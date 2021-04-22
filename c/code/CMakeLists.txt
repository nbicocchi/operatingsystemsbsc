cmake_minimum_required(VERSION 3.17)
project(operatingsystemsbsc C)

set(CMAKE_C_FLAGS "-Wall -Wconversion -Wformat")
set(CMAKE_C_STANDARD 99)

# Examples
add_executable(test examples/test.c)

# Basic Programming lab01
add_executable(0104 lab01/0104.c)
add_executable(0110 lab01/0110.c)
add_executable(0117 lab01/0117.c)
add_executable(0118 lab01/0118.c)
add_executable(0120 lab01/0120.c)

# System Programming labs01
add_executable(s011 labs01/s011.c utils/utils.c)
add_executable(s012 labs01/s012.c utils/utils.c)
add_executable(s013 labs01/s013.c utils/utils.c)
add_executable(s014 labs01/s014.c utils/utils.c)
add_executable(s015 labs01/s015.c utils/utils.c)
add_executable(s016 labs01/s016.c utils/utils.c)
add_executable(s017 labs01/s017.c utils/utils.c)
add_executable(s018 labs01/s018.c utils/utils.c)
add_executable(s019 labs01/s019.c utils/utils.c)

# System Programming labs02
add_executable(s021 labs02/s021.c utils/utils.c)
add_executable(s022 labs02/s022.c utils/utils.c)
add_executable(s023 labs02/s023.c utils/utils.c)
add_executable(s024 labs02/s024.c utils/utils.c)
add_executable(s025 labs02/s025.c utils/utils.c)
add_executable(s026 labs02/s026.c utils/utils.c)
add_executable(s027 labs02/s027.c utils/utils.c)
add_executable(s028 labs02/s028.c utils/utils.c)
add_executable(s029 labs02/s029.c utils/utils.c)

# System Programming labs03
add_executable(s031 labs03/s031.c utils/utils.c)
add_executable(s032 labs03/s032.c utils/utils.c)
add_executable(s033 labs03/s033.c utils/utils.c)
add_executable(s034 labs03/s034.c utils/utils.c)
add_executable(s035 labs03/s035.c utils/utils.c)
add_executable(s036 labs03/s036.c utils/utils.c)
add_executable(s037 labs03/s037.c utils/utils.c)
add_executable(s038 labs03/s038.c utils/utils.c)
add_executable(s039 labs03/s039.c utils/utils.c)

# System Programming labs04
add_executable(s041 labs04/s041.c utils/utils.c)
add_executable(s042 labs04/s042.c utils/utils.c)
add_executable(s043 labs04/s043.c utils/utils.c)
add_executable(s044 labs04/s044.c utils/utils.c)
add_executable(s045 labs04/s045.c utils/utils.c)




