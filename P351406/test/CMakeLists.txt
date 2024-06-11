# Add Google Test
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/release-1.11.0.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(
  runTests
  test_main.cpp
  developer_test.cpp
)

target_link_libraries(
  runTests
  gtest_main
)

include(GoogleTest)
gtest_discover_tests(runTests)
