cmake_minimum_required(VERSION 3.14)
project(c_codes C)

set(CMAKE_C_STANDARD 99)
set(SOURCE_FILES main.c)
#add_executable(main define.c)
add_executable(main array/array.c)