cmake_minimum_required(VERSION 3.9)
project(five)

set(CMAKE_CXX_STANDARD 11)

add_executable(five Book.cpp Book.h Library.cpp Library.h GenreEnum.cpp Patron.cpp Patron.h std_lib_facilities.h Chrono.cpp Chrono.h main.cpp)