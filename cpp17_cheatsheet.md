# C++17 Cheatsheet

---

## Memory: Stack vs Heap

### Stack
- Fixed size (typically 1–8 MB), fast allocation (just move stack pointer).
- Automatic lifetime — destroyed when scope exits.
- Local variables, function arguments, return values live here.

```cpp
void foo() {
    int x = 5;        // stack
    double arr[100];  // stack — fine if small
}                     // x, arr destroyed here
```

### Heap
- Large, dynamic, manual or smart-pointer-managed.
- `new`/`delete` (raw) or `std::make_unique`/`std::make_shared` (preferred).
- Survives scope exit — you control lifetime.

```cpp
int* p = new int(42);   // heap, raw — you must delete
delete p;

auto u = std::make_unique<int>(42);  // heap, RAII — auto-freed
```

### Rules of thumb
| Situation | Use |
|-----------|-----|
| Small, known-size, short-lived | Stack |
| Large object (> few KB) | Heap |
| Lifetime outlives current scope | Heap |
| Polymorphic / unknown type at compile time | Heap |

---

## RAII (Resource Acquisition Is Initialization)

Core C++ idiom. Bind resource lifetime to object lifetime — constructor acquires, destructor releases. Eliminates leaks.

```cpp
struct File {
    FILE* f;
    File(const char* path) : f(fopen(path, "r")) {}
    ~File() { if (f) fclose(f); }   // guaranteed cleanup
};
```

Smart pointers are RAII over heap allocations:
- `std::unique_ptr<T>` — single owner, zero overhead
- `std::shared_ptr<T>` — shared ownership, ref-counted
- `std::weak_ptr<T>` — non-owning observer of a `shared_ptr`

```cpp
auto u = std::make_unique<Foo>(args);  // prefer over new
auto s = std::make_shared<Foo>(args);
std::weak_ptr<Foo> w = s;             // doesn't keep alive
```

---

## Value Categories (lvalue / rvalue)

| Category | What it is | Example |
|----------|-----------|---------|
| lvalue | Has name/address, persists | `int x = 5;` — `x` is lvalue |
| rvalue | Temporary, no address | `5`, `x + 1`, return value |
| xvalue | "expiring" lvalue — movable | `std::move(x)` |

```cpp
int x = 10;
int& lref = x;          // lvalue ref — binds to x
int&& rref = 10;        // rvalue ref — binds to temporary
int&& rref2 = std::move(x); // move x — x is now "empty"
```

Move semantics steal resources instead of copying:
```cpp
std::vector<int> a = {1,2,3};
std::vector<int> b = std::move(a);  // b owns data, a is empty
```

---

## Pointers vs References

| | Pointer | Reference |
|---|---------|-----------|
| Nullable | Yes (`nullptr`) | No — always valid |
| Reassignable | Yes | No — bound at init |
| Arithmetic | Yes | No |
| Syntax | `*p`, `p->m` | `r`, `r.m` |

```cpp
int x = 5;
int* p = &x;    // pointer to x
int& r = x;     // reference to x (alias)

*p = 10;        // write via pointer
r = 10;         // write via reference — same effect
p = nullptr;    // ok
// r = ???      // can't rebind a reference
```

**Prefer references when:** non-nullable, lifetime obvious.  
**Use pointers when:** nullable, needs rebinding, optional ownership.

---

## General Syntax

### Initialization Forms
```cpp
int a = 5;       // copy-init
int b(5);        // direct-init
int c{5};        // uniform/brace-init (C++11+, prevents narrowing)
int d{};         // zero-init

std::vector<int> v{1, 2, 3};   // initializer list
std::vector<int> v2(3, 0);     // 3 elements, all 0
```

### `auto`
```cpp
auto x = 42;            // int
auto y = 3.14;          // double
auto z = "hi";          // const char*
auto& r = x;            // int&
const auto& cr = x;     // const int&
```

### Range-based for
```cpp
std::vector<int> v = {1, 2, 3};
for (int x : v) { }          // copy
for (const int& x : v) { }   // read-only ref (prefer for non-trivial types)
for (int& x : v) { x *= 2; } // mutate in-place
```

### Lambdas
```cpp
auto add = [](int a, int b) { return a + b; };
add(1, 2); // 3

// capture by value
int n = 10;
auto f = [n](int x) { return x + n; };

// capture by reference
auto g = [&n](int x) { n += x; };

// generic lambda (C++14+)
auto h = [](auto x, auto y) { return x + y; };
```

### Enums — prefer `enum class`
```cpp
// old — leaks names into enclosing scope, implicit int conversion
enum Color { Red, Green, Blue };

// new — scoped, no implicit int cast
enum class Status { OK, Error, Pending };
Status s = Status::OK;
if (s == Status::Error) { }
```

### Namespaces
```cpp
namespace math {
    double sqrt(double x) { /*...*/ }
}
math::sqrt(4.0);

// nested (C++17)
namespace app::util {
    void helper() {}
}
```

### `const` vs `constexpr`
```cpp
const int x = foo();        // runtime constant — can't be used in array size
constexpr int y = 42;       // compile-time constant — can
constexpr int arr[y] = {};  // ok

constexpr int square(int n) { return n * n; }
constexpr int s = square(5); // evaluated at compile time
```

---

## Classes

### Rule of Zero / Three / Five

| Rule | When | What to define |
|------|------|---------------|
| Zero | RAII members handle resources | Nothing — compiler defaults work |
| Three | Manual resource (raw ptr, file) | Destructor, copy ctor, copy assign |
| Five | Need move semantics too | + move ctor, move assign |

**Prefer Rule of Zero** — use smart pointers / containers so you define nothing.

```cpp
// Rule of Five (raw resource example)
struct Buffer {
    int* data;
    int  size;

    Buffer(int n) : data(new int[n]), size(n) {}
    ~Buffer() { delete[] data; }

    Buffer(const Buffer& o) : data(new int[o.size]), size(o.size) {
        std::copy(o.data, o.data + size, data);
    }
    Buffer& operator=(const Buffer& o) {
        if (this == &o) return *this;
        delete[] data;
        size = o.size;
        data = new int[size];
        std::copy(o.data, o.data + size, data);
        return *this;
    }
    Buffer(Buffer&& o) noexcept : data(o.data), size(o.size) {
        o.data = nullptr; o.size = 0;
    }
    Buffer& operator=(Buffer&& o) noexcept {
        if (this == &o) return *this;
        delete[] data;
        data = o.data; size = o.size;
        o.data = nullptr; o.size = 0;
        return *this;
    }
};
```

### Constructor delegation & member init
```cpp
struct Point {
    int x, y;
    Point() : Point(0, 0) {}          // delegates to two-arg ctor
    Point(int x, int y) : x(x), y(y) {}
};
```

### `explicit`
Prevents implicit single-arg conversions.
```cpp
struct Meters {
    explicit Meters(double v) : val(v) {}
    double val;
};
Meters m = 5.0;   // error — explicit prevents this
Meters m{5.0};    // ok
```

### `virtual` and polymorphism
```cpp
struct Animal {
    virtual std::string speak() const = 0;  // pure virtual
    virtual ~Animal() {}                    // always virtual dtor in base
};
struct Dog : Animal {
    std::string speak() const override { return "woof"; }
};

std::unique_ptr<Animal> a = std::make_unique<Dog>();
a->speak(); // "woof" — dynamic dispatch
```

---

## Templates

### Function templates
```cpp
template<typename T>
T max(T a, T b) { return a > b ? a : b; }

max(1, 2);      // T=int, deduced
max(1.0, 2.0);  // T=double, deduced
```

### Class templates
```cpp
template<typename T>
struct Stack {
    std::vector<T> data;
    void push(T val) { data.push_back(val); }
    T pop() { T v = data.back(); data.pop_back(); return v; }
};
Stack<int> s;
```

### Type traits
```cpp
#include <type_traits>
static_assert(std::is_integral_v<int>);
static_assert(std::is_same_v<int, int>);
```

---

## C++17 Language Features

### Structured Bindings
```cpp
std::map<int, std::string> m = {{1, "one"}, {2, "two"}};
for (const auto& [key, value] : m) { }

struct Point { int x, y; };
auto [x, y] = Point{10, 20};
```

### Selection Statements with Initializer
```cpp
if (auto it = m.find(key); it != m.end()) {
    // use it
} // it destroyed here

switch (Device dev = get_device(); dev.type()) {
    case Device::Type::USB: break;
}
```

### Inline Variables
```cpp
struct MyClass {
    static inline int value = 42; // no separate .cpp definition needed
};
```

### `constexpr if`
```cpp
template <typename T>
void process(T t) {
    if constexpr (std::is_integral_v<T>) {
        // only compiled for integral T
    } else {
        // only compiled otherwise
    }
}
```

### Fold Expressions
```cpp
template<typename... Args>
auto sum(Args... args) { return (... + args); }

template<typename... Args>
void print(Args... args) { (std::cout << ... << args) << '\n'; }
```

### CTAD (Class Template Argument Deduction)
```cpp
std::pair p(1, 2.3);       // pair<int, double>
std::vector v = {1, 2, 3}; // vector<int>
```

---

## C++17 Standard Library

### `std::optional`
```cpp
std::optional<int> find(bool found) {
    if (found) return 42;
    return std::nullopt;
}
auto v = find(true);
if (v) { int x = *v; }
int y = v.value_or(0);
```

### `std::variant`
```cpp
std::variant<int, float, std::string> v = "hello";
std::visit([](auto&& arg) { std::cout << arg; }, v);
if (std::holds_alternative<int>(v)) {
    int i = std::get<int>(v);
}
```

### `std::string_view`
Non-owning, cheap to copy. No allocation.
```cpp
void log(std::string_view sv) { std::cout << sv; }
// accepts const char*, std::string, string literal
```

### `std::any`
```cpp
std::any a = 10;
a = std::string("hi");
std::string s = std::any_cast<std::string>(a); // throws if wrong type
```

### `std::filesystem`
```cpp
namespace fs = std::filesystem;
fs::path p = "/usr/bin/clang";
if (fs::exists(p)) auto size = fs::file_size(p);
for (auto& e : fs::directory_iterator(".")) { }
```

### Parallel Algorithms
```cpp
#include <execution>
std::sort(std::execution::par, v.begin(), v.end());
```

---

## Common Mistakes

### 1. Dangling pointer / reference
```cpp
int* foo() {
    int x = 5;
    return &x;  // WRONG — x destroyed on return
}

std::string_view bad() {
    std::string s = "hello";
    return s;   // WRONG — string_view outlives s
}
```

### 2. Uninitialized variables
```cpp
int x;          // undefined value — not zero
bool b;         // could be anything
int arr[10];    // all garbage
// Fix: always initialize
int x = 0;
int arr[10]{};  // zero-init with {}
```

### 3. Signed/unsigned mismatch
```cpp
std::vector<int> v(10);
for (int i = 0; i < v.size(); ++i) { }  // warning: i (signed) vs size() (unsigned)
// Fix: use size_t or range-for
for (std::size_t i = 0; i < v.size(); ++i) { }
for (auto& x : v) { }
```

### 4. Object slicing
```cpp
struct Base { int x; };
struct Derived : Base { int y; };

Derived d;
Base b = d;  // y is sliced off — b is just Base
void foo(Base b) { }  // same — slices
// Fix: pass by pointer or reference
void foo(Base& b) { }
void foo(Base* b) { }
```

### 5. Off-by-one with `new[]` / `delete[]`
```cpp
int* p = new int[10];
delete p;    // WRONG — undefined behavior
delete[] p;  // correct
```

### 6. Forgetting `virtual` destructor
```cpp
struct Base {
    ~Base() {}           // non-virtual — memory leak when deleting via Base*
    virtual ~Base() {}   // correct
};
```

### 7. `shared_ptr` cycles (memory leak)
```cpp
struct Node {
    std::shared_ptr<Node> next;  // if two nodes point at each other: leak
    std::weak_ptr<Node> next;    // fix: break cycle with weak_ptr
};
```

### 8. `std::string_view` outliving its source
```cpp
std::string_view sv = std::string("temp");  // WRONG — string destroyed immediately
std::string s = "hello";
std::string_view sv2 = s;  // ok — s still alive
```

### 9. Iterator invalidation
```cpp
std::vector<int> v = {1,2,3};
for (auto it = v.begin(); it != v.end(); ++it) {
    v.push_back(4);  // WRONG — push_back may reallocate, invalidating it
}
```

### 10. Narrowing conversion silently
```cpp
int x = 3.7;   // truncates to 3 — no error
int x{3.7};    // error in C++11+ — brace-init forbids narrowing
```

### 11. `std::endl` vs `'\n'`
`std::endl` flushes the buffer — ~100x slower in loops.
```cpp
std::cout << std::endl;  // flushes — slow
std::cout << '\n';       // just newline — fast
```

### 12. Copying when you should move
```cpp
std::vector<std::string> words;
std::string s = build_long_string();
words.push_back(s);             // copies s
words.push_back(std::move(s));  // moves — zero copy
```

---

## Things You Should Know

### Translation Units & Linking
- Each `.cpp` file is one translation unit (TU), compiled independently.
- Header files are textually included — guard with `#pragma once` or include guards.
- `inline` functions/variables can be defined in headers without ODR violation.
- `static` at file scope = internal linkage (not visible outside TU).
- `extern` declares without defining — used to share globals across TUs.

### `#pragma once` vs include guards
```cpp
#pragma once           // modern, nearly universal support

// Traditional:
#ifndef MY_HEADER_H
#define MY_HEADER_H
// ...
#endif
```

### Integer types — be explicit
```cpp
#include <cstdint>
int8_t   / uint8_t    // exactly 8-bit
int16_t  / uint16_t   // exactly 16-bit
int32_t  / uint32_t   // exactly 32-bit
int64_t  / uint64_t   // exactly 64-bit
std::size_t            // unsigned, result of sizeof/container sizes
std::ptrdiff_t         // signed pointer difference
```
`int` is at least 16 bits — exact size is platform-defined.

### Undefined Behavior (UB) — the bad list
UB means anything can happen — wrong output, crash, or seemingly correct behavior that breaks in release builds.

- Signed integer overflow (`int x = INT_MAX; x++;`)
- Null pointer dereference
- Out-of-bounds array access
- Use-after-free / use-after-scope
- Uninitialized read
- Data race (two threads, one write, no sync)
- Calling `delete` on same pointer twice

### `const` correctness
```cpp
void print(const std::string& s);   // won't modify s
const int* p = &x;                  // ptr to const int — can't change *p
int* const p = &x;                  // const ptr — can't change p itself
const int* const p = &x;            // both const
```

### Compilation model (simplified)
```
.cpp → [preprocessor] → [compiler] → .o → [linker] → executable
```
- Compiler errors: syntax, type errors — per TU.
- Linker errors: unresolved symbols — across TUs (`undefined reference to`).

### `static` keyword (context-dependent)
```cpp
static int x;             // file scope: internal linkage
static int x = 0;         // function scope: persists across calls (initialized once)

struct Foo {
    static int count;     // class scope: shared by all instances
};
```

### Order of initialization pitfall
Static objects across TUs have undefined initialization order — don't rely on it. Use the "construct on first use" idiom:
```cpp
Foo& get_foo() {
    static Foo instance;  // initialized first time called, safe
    return instance;
}
```

### Miscellaneous attributes
- `[[nodiscard]]` — warn if caller ignores return value
- `[[maybe_unused]]` — suppress unused-variable warning
- `[[fallthrough]]` — mark intentional switch fallthrough
- `[[deprecated("use bar instead")]]` — warn at call sites

### `std::byte`, `std::scoped_lock`
```cpp
std::byte b{0xFF};          // raw byte — not char, not int

std::mutex m1, m2;
std::scoped_lock lock(m1, m2);  // locks both atomically, RAII
```

### Useful `<algorithm>` snippets
```cpp
#include <algorithm>
std::sort(v.begin(), v.end());
std::sort(v.begin(), v.end(), std::greater<int>{}); // descending
auto it = std::find(v.begin(), v.end(), 42);
bool has = std::any_of(v.begin(), v.end(), [](int x){ return x > 10; });
std::transform(v.begin(), v.end(), out.begin(), [](int x){ return x*2; });
```
