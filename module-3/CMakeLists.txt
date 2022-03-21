cmake_minimum_required(VERSION 3.18.4)

project(calculator_project)

add_library(my_math
    div.cpp
    add.cpp
)

add_library(my_print
    print.cpp
)

add_executable(calculator
    main.cpp
)

target_link_libraries(calculator
    my_print
    my_math
)