//
// Created by hans on 12/04/2018.
//

#ifndef GAME_OF_LIFE_CELL_H
#define GAME_OF_LIFE_CELL_H

#include "LifeStatus.cpp"

class Cell {
public:
    Cell();
    ~Cell();
    void setStatus(LifeStatus lifeStatus);
    bool isAlive();
    char ordinal();
private:
    LifeStatus cell_status;
};

#endif //GAME_OF_LIFE_CELL_H
