cmake_minimum_required(VERSION 3.18.4)

project(calculator_project)

add_subdirectory(math)
add_subdirectory(print)

add_executable(calculator
    main.cpp
)

target_link_libraries(calculator
    my_print
    my_math
)