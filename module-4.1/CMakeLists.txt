cmake_minimum_required(VERSION 3.0.0)

set(NAME Alice)
set(Alice Bob)

message(NAME ${NAME} ${${NAME}})
message(NAME${NAME}${${NAME}})
message("NAME ${NAME} ${${NAME}}")

set(NAMEAliceBob Charlie)
message(${NAME${NAME}${${NAME}}})
