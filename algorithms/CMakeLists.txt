cmake_minimum_required(VERSION 3.9)
project(algorithms)

set(CMAKE_CXX_STANDARD 11)

add_library(algorithms library.cpp library.h bubblesort.h bubblesort.cpp)