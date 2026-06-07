# CMake Beginner Cheatsheet

## Basic Project Structure
Every CMake project starts with a `CMakeLists.txt` file in the root directory.

```cmake
# Minimum version of CMake required
cmake_minimum_required(VERSION 3.10)

# Project name and version
project(MyProject VERSION 1.0)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add an executable
add_executable(my_app main.cpp)
```

## Core Concepts

### Targets
Everything in CMake revolves around **Targets** (executables or libraries).
- `add_executable(name sources...)`: Create a runnable program.
- `add_library(name STATIC|SHARED sources...)`: Create a library.

### Include Directories
Tell the compiler where to find `.h` files.
```cmake
target_include_directories(my_app PUBLIC include)
```

### Linking Libraries
Connect your app to other libraries.
```cmake
target_link_libraries(my_app PRIVATE my_lib)
```

## Variables and Lists
```cmake
# Set a variable
set(SOURCES main.cpp utils.cpp)

# Use a variable
add_executable(my_app ${SOURCES})

# Lists are just semicolon-separated strings
set(MY_LIST item1 item2 item3)
```

## Modern CMake "Target-Based" Approach
Prefer `target_*` commands over global `include_directories` or `link_libraries`.
- `PRIVATE`: Requirement only for building this target.
- `PUBLIC`: Requirement for building this target AND anyone linking to it.
- `INTERFACE`: Requirement only for targets linking to this one.

## Common Commands

### Adding Subdirectories
Organize larger projects by adding subfolders with their own `CMakeLists.txt`.
```cmake
add_subdirectory(src)
```

### Finding Packages
Find installed libraries on your system (like Boost, OpenSSL, threads).
```cmake
find_package(Threads REQUIRED)
target_link_libraries(my_app PRIVATE Threads::Threads)
```

### Printing Messages (Debugging)
```cmake
message(STATUS "Build type is ${CMAKE_BUILD_TYPE}")
```

## Building the Project (CLI)
CMake is a *generator*. It creates build files (Makefiles, VS Projects) for your compiler.

1. **Create build directory**: `mkdir build && cd build`
2. **Configure**: `cmake ..`
3. **Build**: `cmake --build .`

## Useful Built-in Variables
- `CMAKE_SOURCE_DIR`: Root folder of your project.
- `CMAKE_BINARY_DIR`: Root folder of your build directory.
- `CMAKE_BUILD_TYPE`: Set to `Debug`, `Release`, `RelWithDebInfo`, or `MinSizeRel`.
- `PROJECT_NAME`: Name of the current project.
