cmake_minimum_required(VERSION 3.6)
project(marian)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp)
add_executable(marian ${SOURCE_FILES})