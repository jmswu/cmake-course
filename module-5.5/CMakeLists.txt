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