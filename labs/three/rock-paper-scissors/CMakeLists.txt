cmake_minimum_required(VERSION 3.9)
project(rock_paper_scissors)

set(CMAKE_CXX_STANDARD 11)

add_executable(rock_paper_scissors main.cpp computer.h computer.cpp player.h player.cpp game.h game.cpp)