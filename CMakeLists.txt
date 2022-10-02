cmake_minimum_required(VERSION 3.21)
project(Simple_Data_Structures)

set(CMAKE_CXX_STANDARD 14)

add_executable(Simple_Data_Structures src/list.h src/stack.h src/queue.h src/bst.h src/heap.h
        main.cpp)
