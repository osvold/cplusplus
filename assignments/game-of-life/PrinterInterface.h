//
// Created by hans on 19/04/2018.
//

#ifndef GAME_OF_LIFE_PRINTERINTERFACE_H
#define GAME_OF_LIFE_PRINTERINTERFACE_H

#include "cell.h"
#include "PrinterInterface.h"
#include <cstdio>
#include <vector>

using namespace std;

class PrinterInterface {
public:
    virtual void draw(vector<vector<Cell>> grid) = 0;
};

#endif //GAME_OF_LIFE_PRINTERINTERFACE_H
