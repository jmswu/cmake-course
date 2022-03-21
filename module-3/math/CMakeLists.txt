set(SRC_DIR src)

add_library(my_math
    ${SRC_DIR}/add.cpp
    ${SRC_DIR}/div.cpp
)

target_include_directories(my_math PUBLIC include)