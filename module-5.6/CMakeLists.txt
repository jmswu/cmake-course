cmake_minimum_required(VERSION 3.0.0)

set(Name Charlie)

function(print_detail)
    message("Inside function: Before modification: ${Name}")
    set(Name Bob)
    message("Inside function: After modification: ${Name}")
endfunction()

message("Outside function: ${Name}")
print_detail()
message("Outside function: ${Name}")

message("=====")

function(print_detail)
    message("Inside function: Before modification: ${Name}")
    set(Name Bob PARENT_SCOPE)
    message("Inside function: After modification: ${Name}")
endfunction()

message("Outside function: ${Name}")
print_detail()
message("Outside function: ${Name}")
