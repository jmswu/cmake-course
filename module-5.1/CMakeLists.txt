cmake_minimum_required(VERSION 3.0.0)

# Unary test

set(Name Alice)

if (DEFINED Name)
    message("Name: if block executed")
else()
    message("Name: else block executed")
endif()

# check if case sensitive 
if (DEFINED NAME)
    message("Name: if block executed")
else()
    message("Name: else block executed")
endif()

if(DEFINED Age)
    message("Age: if block executed")
else()
    message("Age: else block executed")
endif()

if(COMMAND target_link_library)
    message("target_link_library: if block executed")
else()
    message("target_link_library: else block executed")
endif()

if(COMMAND target_link_libraries)
    message("target_link_libraries: if block executed")
else()
    message("target_link_libraries: else block executed")
endif()

if(EXISTS ./CMakeLists.txt)
    message("given file exits")
else()
    message("given file not exits")
endif()