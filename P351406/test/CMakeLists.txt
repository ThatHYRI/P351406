# test/CMakeLists.txt
# Minimum required version of cmake
cmake_minimum_required(VERSION 3.20)

# Create a variable with the list of source files
set(TEST_SOURCES
    test_main.cpp
    # Add other test files here if you have any
)

# Add an executable for the tests
add_executable(runTests ${TEST_SOURCES})

# Link the test executable with the my_library
target_link_libraries(runTests my_library)

# Include directories for tests
target_include_directories(runTests PRIVATE ../include)

# If you are using Catch2 or GoogleTest, you might need to link to them as well
# For example, with Catch2:
# find_package(Catch2 REQUIRED)
# target_link_libraries(runTests Catch2::Catch2)

# For example, with GoogleTest:
find_package(GTest REQUIRED)
target_link_libraries(runTests GTest::GTest GTest::Main)

