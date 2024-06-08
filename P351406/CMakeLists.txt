cmake_minimum_required(VERSION 3.20)

project(P351406 VERSION 1.0 LANGUAGES CXX)

# Set C++ standard
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add compiler flags
add_compile_options(-Wall -Wextra -pedantic -O0)

# Specify include directories
include_directories(include)

# Add subdirectories for source code and tests
add_subdirectory(src)
add_subdirectory(test)

# Add executable target
add_executable(main src/main.cpp)

# Link main executable with libraries
target_link_libraries(main PUBLIC my_library)



