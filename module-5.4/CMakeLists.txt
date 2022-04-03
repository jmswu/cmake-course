cmake_minimum_required(VERSION 3.0.0)


# function with no argument
function(print_detail)
    message("My name is Bob")
endfunction()

print_detail()

# function with one argument
function(print_detail name_var)
    message("My name is ${name_var}")
endfunction()

print_detail(Charlie)