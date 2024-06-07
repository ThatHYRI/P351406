# src/CMakeLists.txt
add_library(my_library
    main.cpp
    junior_developer.cpp
    senior_developer.cpp
)

target_include_directories(my_library PUBLIC ../include)