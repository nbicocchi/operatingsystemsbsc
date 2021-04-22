cmake_minimum_required(VERSION 3.17)
project(basicprogramming C)

set(CMAKE_C_FLAGS "-Wall -Wconversion -Wformat")
set(CMAKE_C_STANDARD 99)

# Examples
add_executable(test examples/test.c)

# Basic Programming lab01
add_executable(es04 lab01/es04.c)
add_executable(es10 lab01/es10.c)
add_executable(es17 lab01/es17.c)
add_executable(es18 lab01/es18.c)
add_executable(es20 lab01/es20.c)

# System Programming lab01
add_executable(s011 labs01/es11.c)
add_executable(s012 labs01/es12.c)
add_executable(s013 labs01/es13.c)
add_executable(s014 labs01/es14.c)
add_executable(s015 labs01/es15.c)
add_executable(s016 labs01/es16.c)
add_executable(s017 labs01/es17.c)
add_executable(s018 labs01/es18.c)
add_executable(s019 labs01/es19.c)

# System Programming lab02
add_executable(s021 labs02/es21.c)
add_executable(s022 labs02/es22.c)
add_executable(s023 labs02/es23.c)
add_executable(s024 labs02/es24.c)
add_executable(s025 labs02/es25.c)
add_executable(s026 labs02/es26.c)
add_executable(s027 labs02/es27.c)
add_executable(s028 labs02/es28.c)
add_executable(s029 labs02/es29.c)

# System Programming lab03
add_executable(s031 labs03/es31.c)
add_executable(s032 labs03/es32.c)
add_executable(s033 labs03/es33.c)
add_executable(s034 labs03/es34.c)
add_executable(s035 labs03/es35.c)
add_executable(s036 labs03/es36.c)
add_executable(s037 labs03/es37.c)
add_executable(s038 labs03/es38.c)
add_executable(s039 labs03/es39.c)
add_executable(s0310 labs03/es310.c)
add_executable(s0311 labs03/es311.c)
add_executable(s0312 labs03/es312.c)
add_executable(s0313 labs03/es313.c)

# System Programming lab04
add_executable(s041 labs04/es41.c)
add_executable(s042 labs04/es42.c)
add_executable(s043 labs04/es43.c)
add_executable(s044 labs04/es44.c)
add_executable(s045 labs04/es45.c)




