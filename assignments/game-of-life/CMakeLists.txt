cmake_minimum_required(VERSION 3.9)
project(game_of_life)

set(CMAKE_CXX_STANDARD 11)

add_executable(game_of_life main.cpp gameboard.cpp cell.cpp cell.h gameboard.h LifeStatus.cpp PrinterInterface.h ConsolePrinter.cpp ConsolePrinter.h PrinterInterfaceEnum.cpp)