cmake_minimum_required(VERSION 3.17)
project(basicprogramming C)

set(CMAKE_C_FLAGS "-Wall -Wconversion -Wformat")
set(CMAKE_C_STANDARD 99)

add_executable(es04 lab01/es04.c)
add_executable(es07 lab01/es07.c)
add_executable(es08 lab01/es10.c)
add_executable(es13 lab01/es13.c)
add_executable(es20 lab01/es20.c)
add_executable(es21 lab01/es17.c)
add_executable(es22 lab01/es18.c)
add_executable(es25 lab01/es20.c lab01/es25_lib.c lab01/es25_lib.h)