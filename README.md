# Payrolls
*City University of New York, College of Staten Island — Bachelor of Computer Science*

**Software Engineering Course CSC430 — Group Project**

Collaborated with other students to deliver a payroll system based on specifications outlined by the professor, iterated on from midterm to final based on feedback.

Originally written in C++/CLI (Microsoft's managed C++ extension) targeting Windows Forms and Microsoft Access. The project is being refactored to standard C++17 with a CLI interface, portable build system, and SQLite database.

---

## Current State (Original Submission)

- C++/CLI targeting .NET — only compiles with MSVC on Windows
- UI built with Windows Forms (`.resx` designer files)
- Data stored in Microsoft Access (`.accdb` binary files)
- Build via Visual Studio solution (`.sln` / `.vcxproj`)

### How to Run (Original)

1. Clone the repository
2. Update the paths in `Payrolls/ConnectionPath.h` to match where the `.accdb` files are saved on your machine
3. Open `Payrolls.sln` in Visual Studio
4. Build and run
5. Use login credentials from the Access database files

---

## Refactoring Roadmap

Full details and code patterns in [REFACTORING.md](REFACTORING.md).

### Why Refactor

The original project used C++/CLI — Microsoft's .NET extension — because Windows Forms was the quickest GUI available in Visual Studio. This was the right call under course deadline pressure. For standard C++ practice, portability, and CLI tooling, the whole stack needs to change.

### Planned Changes

| Area | From | To | Why |
|---|---|---|---|
| Language | C++/CLI (`System::String^`, `ref class`) | Standard C++17 | Portability, industry standard, works with `g++`/`clang++` |
| Build | Visual Studio `.sln` | `Makefile` | Run from any terminal on any OS |
| Database | Microsoft Access (`.accdb`) | SQLite | Cross-platform, no install required, version-controllable schema |
| UI | Windows Forms | CLI (`std::cin`/`std::cout`) | No platform dependency, separates logic from presentation |
| Tax calculation | Flat rate applied to full income | Correct marginal brackets | Current math produces wrong results |
| Tax classes | Four identical standalone classes | Inheritance from abstract `Tax` base | Eliminates duplication, enables polymorphism |
| Employee type | Magic string `"Part time"` | `enum class EmployeeType` | Type-safe, no typo bugs |
| Directory structure | Flat, all files in one folder | `include/`, `src/`, `tests/`, `data/` | Standard C++ project layout |

### Refactoring Steps (in order)

1. Set up `Makefile` + new directory structure, stub `main.cpp` compiling
2. Strip all C++/CLI — replace `System::String^` with `std::string`, remove `gcnew`, `ref class`
3. Split headers from implementations — no function bodies in `.h` files
4. Build abstract `Tax` base class, make all state tax classes inherit from it
5. Fix marginal bracket math
6. Replace Access database with SQLite
7. Add unit tests in `tests/` — start with tax calculation (pure functions)
8. Build CLI menu in `main.cpp`
