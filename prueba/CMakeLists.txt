cmake_minimum_required(VERSION 3.6)
project(prueba)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES main.c scanner.c scanner.h)
add_executable(prueba ${SOURCE_FILES})