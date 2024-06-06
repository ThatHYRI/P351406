cmake_minimum_required(VERSION 3.20)

project(P351406 VERSION 1.0 LANGUAGES CXX)

# Set C++ standard
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add subdirectories for source code and tests
add_subdirectory(src)
add_subdirectory(tests)

# Specify include directories
include_directories(include)

# Add compiler flags
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -pedantic")

# Add executable target
add_executable(main main.cpp)

# Link main executable with libraries
target_link_libraries(main PUBLIC developer)



