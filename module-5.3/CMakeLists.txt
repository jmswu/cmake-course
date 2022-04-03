cmake_minimum_required(VERSION 3.0.0)

set(VAR a)

while(NOT VAR STREQUAL "aaaaaaaaaa")
    set(VAR ${VAR}a)
    message(${VAR})
endwhile()

foreach(NAME Alice Bob Charlie)
    message(${NAME})
endforeach()


foreach(x RANGE 100 105)
    message("Person_${x}")    
endforeach()
