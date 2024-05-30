cmake_minimum_required(VERSION 3.28)
project(hashing C)

set(CMAKE_C_STANDARD 99)

add_executable(hashing main.c
        hash.c
        hash.h)
