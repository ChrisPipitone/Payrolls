# CMake ELI5

## What problem does it solve?

You have `.cpp` files. You need to turn them into a binary. You could type:

```bash
g++ -std=c++17 -Wall -Iinclude src/main.cpp src/tax/FedTax.cpp -lsqlite3 -o payrolls
```

That works. But when you have 30 files across 6 folders, that command becomes unmaintainable. You also need to recompile only the files that changed, not everything. And you need it to work on Linux *and* Mac without changing anything.

That's what CMake is for.

---

## The two-step mental model

CMake is not a compiler. It's a **build system generator** — it writes the actual build instructions for your platform, then hands off to the real builder.

```
CMakeLists.txt  →  cmake  →  Makefile (or Ninja build files)
                                  ↓
                             cmake --build  →  binary
```

Step 1: `cmake -B build` — reads your `CMakeLists.txt`, figures out your platform, generates build files into `build/`.

Step 2: `cmake --build build` — runs the generated build files, compiles only what changed.

You write `CMakeLists.txt` once. CMake handles the rest.

---

## Reading CMakeLists.txt line by line

```cmake
cmake_minimum_required(VERSION 3.20)
```
"Fail early if CMake is too old to understand this file."

```cmake
project(payrolls CXX)
```
"This project is called `payrolls` and uses C++."

```cmake
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
```
"Use C++17. Error if the compiler doesn't support it — don't silently fall back."

```cmake
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
```
"Write a `compile_commands.json` file. clangd (your LSP) reads this to know your include paths and flags, so it gives accurate diagnostics in your editor."

```cmake
find_package(SQLite3 REQUIRED)
```
"Find SQLite3 on this machine. Error if it's not installed."

```cmake
file(GLOB_RECURSE SRCS src/*.cpp)
```
"Collect every `.cpp` file under `src/` into a variable called `SRCS`."

```cmake
add_executable(payrolls ${SRCS})
```
"Build an executable named `payrolls` from those source files."

```cmake
target_include_directories(payrolls PRIVATE include)
```
"When compiling `payrolls`, add `include/` to the header search path. Same as `-Iinclude`. `PRIVATE` means this only applies to `payrolls`, not to anything that links against it."

```cmake
target_link_libraries(payrolls PRIVATE SQLite3::SQLite3)
```
"Link the SQLite3 library into `payrolls`. Same as `-lsqlite3`, but CMake also pulls in the right include paths and flags automatically."

```cmake
target_compile_options(payrolls PRIVATE -Wall -Wextra)
```
"Enable extra warnings when compiling `payrolls`."

---

## The compile_commands.json thing

clangd (C++ LSP) needs to know how you're building — what flags, what include paths, what standard. Without this, it guesses wrong and fires false diagnostics.

`compile_commands.json` is a standardized file that records the exact compile command for every source file:

```json
[
  {
    "file": "/home/chris/dev/projects/Payrolls/src/tax/FedTax.cpp",
    "command": "g++ -std=c++17 -Wall -Wextra -Iinclude ...",
    "directory": "/home/chris/dev/projects/Payrolls/build"
  },
  ...
]
```

CMake generates this automatically when `CMAKE_EXPORT_COMPILE_COMMANDS ON` is set. clangd finds it if it's in the project root, so symlink it:

```bash
ln -sf build/compile_commands.json .
```

---

## Common commands

| What | Command |
|---|---|
| Configure (first time or after CMakeLists changes) | `cmake -B build` |
| Build | `cmake --build build` |
| Run | `./build/payrolls` |
| Clean | `cmake --build build --target clean` |
| Nuke and reconfigure | `rm -rf build && cmake -B build` |

---

## Why not just use a Makefile?

You could. But:

- CMake generates `compile_commands.json` natively — no extra tool needed
- CMake handles `find_package` for dependencies across platforms
- CMake scales to multi-target projects (exe + tests + libs) cleanly
- Makefile syntax is archaic and error-prone (tabs vs spaces will ruin your day)

For a project this size, either works. CMake is the industry standard for C++ and what you'll see in real codebases.
