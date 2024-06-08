# tests/CMakeLists.txt

# Add GoogleTest
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/release-1.11.0.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

# Add test executable
add_executable(runTests test_main.cpp)

# Link test executable against gtest & gtest_main
target_link_libraries(runTests gtest_main my_library)

# Enable testing
enable_testing()
add_test(NAME runTests COMMAND runTests)


