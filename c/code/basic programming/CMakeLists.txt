cmake_minimum_required(VERSION 3.17)
project(basicprogramming C)

set(CMAKE_C_FLAGS "-Wall -Wconversion -Wformat")
set(CMAKE_C_STANDARD 99)

add_executable(es04 lab01/es04.c)
add_executable(es10 lab01/es10.c)
add_executable(es17 lab01/es17.c)
add_executable(es18 lab01/es18.c)
add_executable(es20 lab01/es20.c)

add_executable(helloworld examples/helloworld.c)

