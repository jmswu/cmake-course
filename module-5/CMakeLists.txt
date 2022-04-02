cmake_minimum_required( VERSION 3.0.0 )

set( VAR YES )

if( VAR )
    message( "Condition is YES" )
else()
    message( "Condition is NO" )
endif()