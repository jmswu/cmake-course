cmake_minimum_required(VERSION 3.0.0)

# function has its own scope
message("")
function(print_detail name_var)
    message("My name is ${name_var}")
    set(name_var abc)
    message("My name is ${name_var}")
endfunction()

print_detail(Charlie)

# using parent scope
message("")
macro(print_detail_micro name_not_var)
    message("My name is ${name_not_var}")
    set(name_not_var abc)
    message("My name is ${name_not_var}")
endmacro()

print_detail_micro(Charlie)

# in macro, there is no variable created
message("")
macro(print_detail_micro name_not_var)
    message("My name is ${name_not_var}")
    set(name_not_var abc)
    if (DEFINED name_not_var)
        message("If block executed")
    endif()
endmacro()

print_detail_micro(Charlie)
