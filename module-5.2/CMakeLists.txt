cmake_minimum_required(VERSION 3.0.0)

set(NAME1 Alice)
set(NAME2 Bob)

# comparastion is compare who is before the 
# ditionary alphabeta order, eg upper case
# is before lower case. A is before B

if (NAME1 STRLESS NAME2)
    message("${NAME1} is less than ${NAME2}")
elseif(NAME1 STRGREATER NAME2)
    message("${NAME1} is greater than ${NAME2}")
elseif(NAME1 STREQUAL NAME2)
    message("${NAME1} is equal ${NAME2}")
endif()

set(NAME1 Charlie)
set(NAME2 bob)

if (NAME1 STRLESS NAME2)
    message("${NAME1} is less than ${NAME2}")
elseif(NAME1 STRGREATER NAME2)
    message("${NAME1} is greater than ${NAME2}")
elseif(NAME1 STREQUAL NAME2)
    message("${NAME1} is equal ${NAME2}")
endif()

set(NAME1 Charlie)
set(NAME2 Charlies)

if (NAME1 STRLESS NAME2)
    message("${NAME1} is less than ${NAME2}")
elseif(NAME1 STRGREATER NAME2)
    message("${NAME1} is greater than ${NAME2}")
elseif(NAME1 STREQUAL NAME2)
    message("${NAME1} is equal ${NAME2}")
endif()