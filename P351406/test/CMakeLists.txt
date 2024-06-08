# test/CMakeLists.txt
enable_testing()

add_executable(runTests test_main.cpp)
target_link_libraries(runTests my_library)

add_test(NAME MyTest COMMAND runTests)
