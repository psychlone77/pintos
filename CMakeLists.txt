cmake_minimum_required(VERSION 3.20)
project(pintos C)

set(CMAKE_C_STANDARD 99)
include_directories(src src/lib)

add_executable(pintos main.c)