cmake_minimum_required(VERSION 3.14)
project(Stack)

set(CMAKE_CXX_STANDARD 17)

add_executable(Stack main.cpp stack.h ../List/List.h)