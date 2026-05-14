# Refactoring Guide — Payrolls

## Critical Issue: This Is Not Standard C++

Current code uses **C++/CLI** — Microsoft's managed extension that runs on .NET. Signs:

- `System::String^` — managed string with garbage-collected pointer (`^`)
- `ref class Benfits` — .NET reference class
- `gcnew OleDbConnection(...)` — allocates on managed heap
- `using namespace System` — .NET namespace

C++/CLI **only compiles with MSVC**. `g++` and `clang++` reject it. `make` on CLI won't work until all of this is replaced with standard C++.

This isn't a small fix — it's the core refactor. Everything else is secondary.

---

## Current Code Problems

### 1. Wrong Language (C++/CLI vs Standard C++)

| Current (C++/CLI) | Standard C++ |
|---|---|
| `System::String^` | `std::string` |
| `ref class Foo` | `class Foo` |
| `gcnew Foo()` | `std::make_unique<Foo>()` |
| `OleDbConnection^` | SQLite via `sqlite3.h` |

### 2. Architecture

- **Implementation in headers** — `CheckID.h` has full function bodies. Headers declare, `.cpp` files define.
- **Global functions in headers** — `toStandardString()` and `isNumber()` in `CheckID.h` are `static` globals. Move to a utility namespace in a `.cpp`.
- **Hardcoded absolute paths** — `ConnectionPath.h` hardcodes `C:/Users/Chris/Desktop/...`. Use config file or relative path instead.
- **`using namespace` in headers** — `using namespace System` in `ConnectionPath.h` pollutes every file that includes it.
- **Inconsistent include guards** — some files use `#pragma once`, some use `#ifndef` guards. Prefer `#pragma once` in modern C++.

### 3. Design

- **No inheritance for tax classes** — `FedTax`, `CTTax`, `NJTax`, `NYTax` are identical structure. Should inherit from abstract `Tax` base.
- **Typo in class name** — `Benfits` should be `Benefits`.
- **Broken marginal tax math** — `FedTaxRate` applies the bracket rate to the *entire* income, not just income within that bracket. Someone earning $50k should not be taxed at 22% on the full $50k.
- **Magic string comparisons** — `if (type == "Part time")` is fragile. Use `enum class` instead.
- **`Login.h` declares methods with no `Login.cpp`** — unimplemented interface.
- **`CalculateHealthBenfits` returns `0.0`** — unimplemented stub.

### 4. Build

- `.sln` / `.vcxproj` — Windows/Visual Studio only, not portable
- `.resx` files — Windows Forms designer XML, useless outside VS
- `.accdb` files — Microsoft Access, Windows-only binary format

---

## Target Directory Architecture

```
Payrolls/
├── Makefile
├── README.md
├── REFACTORING.md
├── .gitignore
│
├── include/
│   └── payrolls/
│       ├── models/
│       │   └── employee.h        # Employee struct/class
│       ├── tax/
│       │   ├── tax.h             # abstract base class
│       │   ├── fed_tax.h
│       │   ├── ct_tax.h
│       │   ├── nj_tax.h
│       │   └── ny_tax.h
│       ├── payroll/
│       │   ├── gross_income.h
│       │   └── benefits.h
│       ├── auth/
│       │   └── login.h
│       └── db/
│           └── database.h        # wraps SQLite
│
├── src/
│   ├── main.cpp
│   ├── tax/
│   │   ├── fed_tax.cpp
│   │   ├── ct_tax.cpp
│   │   ├── nj_tax.cpp
│   │   └── ny_tax.cpp
│   ├── payroll/
│   │   ├── gross_income.cpp
│   │   └── benefits.cpp
│   ├── auth/
│   │   └── login.cpp
│   └── db/
│       └── database.cpp
│
├── tests/
│   ├── test_gross_income.cpp
│   ├── test_fed_tax.cpp
│   └── test_benefits.cpp
│
└── data/
    └── payrolls.db               # SQLite (replaces .accdb files)
```

**Why `include/payrolls/` subdirectory?** Lets you write `#include "payrolls/tax/fed_tax.h"` — self-documenting and avoids name collisions if the project grows.

---

## Makefile

```makefile
CXX      := g++
CXXFLAGS := -std=c++17 -Wall -Wextra -Iinclude
LDFLAGS  := -lsqlite3

SRC_DIR  := src
OBJ_DIR  := build
BIN      := payrolls

SRCS     := $(shell find $(SRC_DIR) -name '*.cpp')
OBJS     := $(patsubst $(SRC_DIR)/%.cpp, $(OBJ_DIR)/%.o, $(SRCS))

.PHONY: all clean

all: $(BIN)

$(BIN): $(OBJS)
	$(CXX) $(OBJS) -o $@ $(LDFLAGS)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR) $(BIN)
```

Run: `make && ./payrolls`

---

## Refactoring Patterns

### Pattern 1: Replace `System::String^` with `std::string`

```cpp
// Before (C++/CLI)
int calculateOvertimeHour(int hour, System::String^ type);

// After (standard C++)
int calculateOvertimeHour(int hours, const std::string& type);
```

`const std::string&` passes by const reference — no copy, no mutation. Default choice for string params.

### Pattern 2: Abstract base for tax classes

```cpp
// include/payrolls/tax/tax.h
class Tax {
public:
    virtual double calculate(double grossIncome) const = 0;  // pure virtual
    virtual ~Tax() = default;
};

// include/payrolls/tax/fed_tax.h
class FedTax : public Tax {
public:
    double calculate(double grossIncome) const override;
};
```

Now you can hold a `std::vector<std::unique_ptr<Tax>>` and call `calculate()` on each — polymorphism.

### Pattern 3: Fix marginal bracket math

Current code is wrong. $50k income taxed at 22% on the full amount is incorrect:

```cpp
// Correct marginal bracket calculation
double FedTax::calculate(double income) const {
    double tax = 0.0;
    // Each bracket only taxes income *within* that bracket
    tax += std::min(income, 9950.0) * 0.10;
    if (income > 9950)  tax += std::min(income - 9950,  30575.0) * 0.12;
    if (income > 40525) tax += std::min(income - 40525, 45850.0) * 0.22;
    if (income > 86375) tax += std::min(income - 86375, 78550.0) * 0.24;
    if (income > 164925) tax += std::min(income - 164925, 44500.0) * 0.32;
    if (income > 209425) tax += std::min(income - 209425, 314175.0) * 0.35;
    if (income > 523600) tax += (income - 523600) * 0.37;
    return std::round(tax * 100.0) / 100.0;
}
```

### Pattern 4: Replace Access DB with SQLite

SQLite is a single `.db` file, uses a C API (`sqlite3.h`), works on every platform, needs no server. Replace `OleDbConnection` with SQLite calls.

Install on Mac: `brew install sqlite3`

### Pattern 5: Enum class for EmployeeType

```cpp
// Before: fragile magic string
if (type == "Part time")

// After: type-safe enum
enum class EmployeeType { PartTime, FullTime };
if (type == EmployeeType::PartTime)
```

---

## C++ Concepts You'll Master Doing This

In the order you'll encounter them:

1. **`#pragma once`** — preventing double-inclusion in headers
2. **`const` correctness** — `const std::string&`, `const` member functions
3. **Header vs implementation split** — what belongs in `.h` vs `.cpp` and why
4. **`std::string`** — why it always beats raw `char*`
5. **Smart pointers** — `std::unique_ptr`, `std::make_unique` (replace raw `new`/`delete`)
6. **Inheritance + virtual** — abstract `Tax` base, `override` keyword
7. **Enum classes** — type-safe alternatives to magic strings
8. **Namespaces** — `namespace payrolls::tax { ... }`
9. **Rule of 5** — when you write a destructor, what else you need to write
10. **SQLite C API** — real database interaction without .NET

---

## Refactoring Phases

Each phase is independently shippable — the project compiles and runs at the end of every phase. Do not start a phase until the previous one is green.

---

### Phase 1 — Make It Real C++ (required before anything else)

**Goal:** Compile with `g++ -std=c++17` on Linux via `Makefile`. Until this is done the project can't be shown to anyone serious.

Strip C++/CLI entirely:

| Remove | Replace with |
|---|---|
| `System::String^` | `std::string` |
| `ref class Foo` | `class Foo` |
| `gcnew Foo()` | `std::make_unique<Foo>()` |
| `OleDbConnection^` / OleDb entirely | SQLite via `sqlite3.h` |
| All `using namespace System` | (delete) |
| `.resx` files | (delete) |
| `.sln` / `.vcxproj` | `Makefile` |

Also in this phase:
- Set up target directory structure (`include/`, `src/`, `tests/`, `data/`)
- Write stub `main.cpp` — compiles, prints a menu, exits cleanly
- Split all headers from implementations — no function bodies in `.h` files
- Add `data/schema.sql` to replace the binary `.accdb` files in version control

**Done when:** `make && ./payrolls` works on a fresh Linux/Mac machine after `apt install libsqlite3-dev` (or `brew install sqlite3`).

---

### Phase 2 — Fix the Math Bug (high visibility)

**Goal:** Correct federal and CT tax calculations. This is the highest-visibility fix because it demonstrates you understand marginal rate calculation — the kind of numerical correctness that quant and fintech people specifically look for.

**The bug:** `FedTaxRate` and `CTTaxRate` apply the bracket rate to the *entire* gross income. Someone earning $50k is taxed at 22% on the full $50k instead of only on the portion above $40,525. The overstatement is hundreds of dollars per employee.

**Fix:** Proper progressive bracket logic — each bracket only taxes income within it:

```cpp
double FedTax::calculate(double income) const {
    double tax = 0.0;
    tax += std::min(income, 9950.0) * 0.10;
    if (income > 9950)   tax += std::min(income - 9950,   30575.0) * 0.12;
    if (income > 40525)  tax += std::min(income - 40525,  45850.0) * 0.22;
    if (income > 86375)  tax += std::min(income - 86375,  78550.0) * 0.24;
    if (income > 164925) tax += std::min(income - 164925, 44500.0) * 0.32;
    if (income > 209425) tax += std::min(income - 209425, 314175.0) * 0.35;
    if (income > 523600) tax += (income - 523600) * 0.37;
    return std::round(tax * 100.0) / 100.0;
}
```

Verify against IRS published tables with known inputs before and after.

**Done when:** `FedTax::calculate(50000)` returns `6748.50` (correct) not `11000.00` (broken flat rate).

---

### Phase 3 — Abstract Tax Base Class (demonstrates OOP and design)

**Goal:** Four identical tax classes with no inheritance hierarchy is the most obvious design smell in the codebase — and also exactly what an interviewer would ask you to fix on a whiteboard.

**Before:** Four standalone classes with different method names (`FedTaxRate`, `CTTaxRate`, `NJTaxRate`, `NYTaxRate`) and no shared interface.

**After:** Abstract base + four concrete implementations:

```cpp
// include/payrolls/tax/tax.h
class Tax {
public:
    virtual double calculate(double grossIncome) const = 0;
    virtual ~Tax() = default;
};

// include/payrolls/tax/fed_tax.h
class FedTax : public Tax {
public:
    double calculate(double grossIncome) const override;
};
```

Now a payroll engine can hold `std::vector<std::unique_ptr<Tax>>` and apply all applicable taxes in a loop — adding a new state means adding one file, not touching existing code (open/closed principle).

Also in this phase:
- Replace `if (type == "Part time")` magic strings with `enum class EmployeeType { PartTime, FullTime }`
- Rename `Benfits` → `Benefits` everywhere

**Done when:** All four tax classes compile through the abstract interface, and a single call site can iterate them polymorphically.

---

### Phase 4 — Unit Tests (signals engineering maturity)

**Goal:** A test suite for the calculation logic. This signals engineering maturity more than almost anything else in a portfolio project.

The tax and payroll logic is ideal for unit testing: deterministic inputs, known outputs, well-defined edge cases.

**Test cases to start with:**

```cpp
// Bracket boundaries — test just above and just below each threshold
assert(fed_tax.calculate(9950)  == 995.00);   // top of 10% bracket
assert(fed_tax.calculate(9951)  == 995.12);   // first dollar into 12% bracket

// Overtime thresholds
assert(gross.calculateOvertimeHour(40, EmployeeType::FullTime)  == 0);
assert(gross.calculateOvertimeHour(41, EmployeeType::FullTime)  == 1);
assert(gross.calculateOvertimeHour(30, EmployeeType::PartTime)  == 0);
assert(gross.calculateOvertimeHour(31, EmployeeType::PartTime)  == 1);

// Benefits
assert(benefits.calculateSSAWithholding(1000.0) == 62.00);
assert(benefits.calculate401k(1000.0)           == 43.00);
```

Use a minimal test framework — either raw `assert()` calls in `tests/run_tests.cpp`, or add [Catch2](https://github.com/catchorg/Catch2) as a single-header include.

Add a `make test` target to the Makefile.

**Done when:** `make test` runs all assertions green.

---

### Phase 5 — RAII for DB Connections, Fix the O(n) ID Scan

**Goal:** Two specific things a systems engineer will immediately spot in a code review.

**Fix 1 — O(n) table scan in `CheckID.h`:**

Current code does `SELECT [iD] FROM EmployeeInfo` (returns every row), then iterates all of them in C++ comparing IDs. This is O(n) on every login attempt.

```cpp
// Current — scans entire table
cmd->CommandText = "SELECT [iD] FROM EmployeeInfo";
OleDbDataReader^ reader = cmd->ExecuteReader();
while (reader->Read()) {
    if (reader["ID"]->ToString() == empID)  // linear scan
        return true;
}

// Fixed — database does the lookup, O(1) with index
stmt = "SELECT COUNT(*) FROM employees WHERE id = ?";
sqlite3_bind_int(stmt, 1, id);
// returns 1 if exists, 0 if not
```

**Fix 2 — RAII DB connection guard:**

Current code opens connections manually with no guaranteed close on exception. Wrap in a RAII guard:

```cpp
class DbConnection {
public:
    explicit DbConnection(const std::string& path) {
        if (sqlite3_open(path.c_str(), &db_) != SQLITE_OK)
            throw std::runtime_error(sqlite3_errmsg(db_));
    }
    ~DbConnection() { sqlite3_close(db_); }  // guaranteed cleanup

    // Disable copy, allow move
    DbConnection(const DbConnection&) = delete;
    DbConnection& operator=(const DbConnection&) = delete;

    sqlite3* get() const { return db_; }
private:
    sqlite3* db_;
};
```

Connection closes when `DbConnection` goes out of scope — no manual cleanup, no leaks on exception.

**Done when:** Login path uses parameterized `WHERE id = ?` and all DB connections are managed by the RAII guard.

---

## Recommended Refactoring Order

Work in this order — each step compiles and runs before moving to the next.

1. **Set up Makefile + new directory structure** — move files, get a stub `main.cpp` compiling
2. **Strip all C++/CLI** — replace `System::String^` → `std::string`, `ref class` → `class`, remove all `gcnew`
3. **Split headers from implementations** — gut `CheckID.h`, move all function bodies to `.cpp` files
4. **Fix tax inheritance** — abstract `Tax` base, all state tax classes extend it
5. **Fix marginal bracket math** — verify with known income values
6. **Replace Access with SQLite** — new `db/database.h` + `database.cpp`
7. **Add tests** — `tests/` folder, start with tax math (pure functions, easiest to test)
8. **Build CLI menu** — `main.cpp` with `std::cin`/`std::cout` menus replacing Windows Forms

> **Start with `GrossIncome`** — fewest CLI dependencies, pure calculation logic, testable immediately.

---

## `.gitignore` Updates Needed

```
build/
*.o
payrolls
*.accdb
```

The `.accdb` files are binary Microsoft Access databases. They should not be in version control — store schema as SQL and seed data as a script instead.
