cmake_minimum_required(VERSION 3.0.0)


function(print_detail name_var)
    message("1. My name is ${name_var}")
endfunction()

function(print_detail name_var)
    message("2. My name is ${name_var}")
endfunction()

# print the second defination
print_detail(Charlie)

# print the fist defination
_print_detail(Alice)

# optional argument
function(test_func name_var)
    message("My name is ${name_var}")
    if (DEFINED ARGV1)
        message("Hello, ${ARGV1}")
    endif()

    message("ARGC = ${ARGC}")
    message("ARGV = ${ARGV}")
    message("ARGN = ${ARGN}")

endfunction()

test_func(Alice)
test_func(Alice Bob John Tim)