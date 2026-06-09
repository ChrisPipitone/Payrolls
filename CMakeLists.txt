# Minimum version of CMake required
cmake_minimum_required(VERSION 3.10)

# Project name and version
project(Payrolls VERSION 0.1 LANGUAGES CXX)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

find_package(Curses REQUIRED)

# Add an executable
add_executable(csi_payrolls
  src/main.cpp
  src/tax/CTTax.cpp
  src/tax/FedTax.cpp
  src/tax/NJTax.cpp
  src/tax/NYTax.cpp
)
target_include_directories(csi_payrolls PRIVATE include ${CURSES_INCLUDE_DIRS})
target_compile_options(csi_payrolls PRIVATE -Wall -Wextra)
target_link_libraries(csi_payrolls PRIVATE ${CURSES_LIBRARIES})

