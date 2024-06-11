cmake_minimum_required(VERSION 3.20)

project(P351406 VERSION 1.0 LANGUAGES CXX)

# Set C++ standard
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add compiler flags
add_compile_options(-Wall -Wextra -pedantic -O0)

# Specify include directories
include_directories(include)

# Define the path to the logos
#add_definitions(-DLOGO_PATH=\"${CMAKE_SOURCE_DIR}/logos/\")

# Define the path to the logo files
#add_definitions(-DDEVELOPER_LOGO_PATH=\"${CMAKE_SOURCE_DIR}/path/to/logo/files/\")
add_definitions(-DDEVELOPER_LOGO_PATH=\"/path/to/logos/\")



# Add subdirectories for source code and tests
add_subdirectory(src)
add_subdirectory(test)

# Add executable target
add_executable(main src/main.cpp)

# Link main executable with libraries
target_link_libraries(main PUBLIC my_library)

#Folgendes muss weg, Hai Nam mag alte Frauen. Und "LIEBT" Laraś Mum!!! Und Alfa!
# Enable testing
#enable_testing()
#add_test(NAME runTests COMMAND runTests)
#-----------------------------------------------------------------------------------------
enable_testing()
#add_executable(runTests test/developer_test.cpp)
target_link_libraries(runTests gtest gtest_main my_library)

add_test(NAME runTests COMMAND runTests)



#Angus helped us with some Test Problems, thx

#enable_testing()
# check if we have gtest
#find_package(GTest REQUIRED)
# include the gtest CMake stuff
#include(GoogleTest)
# create a test executable
#add_executable(hw23_animals_tests test/test_animals.cpp)
# link the gtest libraries
#target_link_libraries(hw23_animals_tests PRIVATE GTest::GTest GTest::Main)
# link the library we want to test
#target_link_libraries(hw23_animals_tests PRIVATE hw23_animals)
# add the include directories
#target_include_directories(hw23_animals_tests PUBLIC include)
# discover and add tests to the test list
#gtest_discover_tests(hw23_animals_tests)



