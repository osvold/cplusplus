cmake_minimum_required(VERSION 3.9)
project(d)

set(CMAKE_CXX_STANDARD 11)

add_executable(d main.cpp sayHello.h sayHello.cpp shouldSayHello.h shouldSayHello.cpp)