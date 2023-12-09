cmake_minimum_required(VERSION 3.24)
project(main_c C)

set(CMAKE_C_STANDARD 23)

add_executable(main_c main.c stack.h stack.c tree.c tree.h queue.h list.h queue.c list..c)
