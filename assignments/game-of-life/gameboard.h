//
// Created by hans on 12/04/2018.
//

#ifndef GAME_OF_LIFE_GAMEBOARD_H
#define GAME_OF_LIFE_GAMEBOARD_H

#include "gameboard.h"
#include "cell.h"
#include <cstdio>
#include <vector>

using namespace std;

class GameBoard {
public:
    GameBoard(int columns, int rows, int under_populated, int over_populated);
    void draw();
    void update();
    int findAliveCount();
    void generate();
    ~GameBoard();

private:
    int number_of_columns;
    int number_of_rows;
    int under_populated;
    int over_populated;
    vector<vector<Cell>> grid;
    int generation;
    vector<Cell *> findNeighbours(int row, int column);
};

#endif //GAME_OF_LIFE_GAMEBOARD_H
