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

set(VAR1 0;1)
set(VAR2 2 3)
set(VAR3 "4 5")

foreach(x IN LISTS VAR1 VAR2 VAR3)
    message("x = ${x}")
endforeach(x)

set(VAR2 2 3)
set(VAR3 "4;5")

foreach(x IN LISTS VAR1 VAR2 VAR3)
    message("x = ${x}")
endforeach(x)
