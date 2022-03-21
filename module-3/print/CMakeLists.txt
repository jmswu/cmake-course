set(SRC_DIR src)

add_library(my_print
    ${SRC_DIR}/print.cpp
)

target_include_directories(my_print PUBLIC include)