cmake_minimum_required( VERSION 3.0.0 )

set( VAR YES )

if( VAR )
    message( "If block executed" )
else()
    message( "Else block executed" )
endif()