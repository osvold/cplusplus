//
// Created by hans on 12/04/2018.
//

#ifndef GAME_OF_LIFE_GAMEBOARD_H
#define GAME_OF_LIFE_GAMEBOARD_H

#include "gameboard.h"
#include "cell.h"
#include "PrinterInterface.h"
#include <cstdio>
#include <vector>
#include "PrinterInterfaceEnum.cpp"

using namespace std;

class GameBoard {
public:
    GameBoard(int columns, int rows, PrinterInterfaceEnum printerInterfaceEnum);
    void draw();
    void update();
    int findAliveCount();
    void generate();
    ~GameBoard();

private:
    int number_of_columns;
    int number_of_rows;
    vector<vector<Cell>> grid;
    int generation;
    PrinterInterface& printer;
    vector<Cell> findNeighbours(int row, int column);
};

#endif //GAME_OF_LIFE_GAMEBOARD_H
