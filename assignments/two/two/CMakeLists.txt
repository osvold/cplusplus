cmake_minimum_required(VERSION 3.9)
project(two)

set(CMAKE_CXX_STANDARD 11)

add_executable(two main.cpp Animal.cpp Animal.h Mammal.cpp Mammal.h Dolphin.cpp Dolphin.h Shark.cpp Shark.h Chondrichthyes.cpp Chondrichthyes.h)