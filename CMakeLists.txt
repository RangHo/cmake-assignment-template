cmake_minimum_required(VERSION 3.15...4.1)

project(
  Assignment
  VERSION 1.0
  LANGUAGES CXX
)

add_executable(
  # Executable name.
  assignment
  # Source files.
  src/main.cpp
  src/solution.cpp
)
target_compile_features(assignment PRIVATE cxx_std_20)
