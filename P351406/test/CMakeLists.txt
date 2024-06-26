# Add Google Test
include(FetchContent)

# Declare GoogleTest and specify its URL for fetching the content
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/release-1.11.0.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

# Add the executable for the tests
add_executable(
  runTests
  test_main.cpp
  developer_test.cpp
)

# Link the GoogleTest main library with test executable
target_link_libraries(
  runTests
  gtest_main
)

# Include GoogleTest module & configure test discovery
include(GoogleTest)
gtest_discover_tests(runTests)
