//
// Created by hans on 19/04/2018.
//

#ifndef GAME_OF_LIFE_CONSOLEPRINTER_H
#define GAME_OF_LIFE_CONSOLEPRINTER_H

#include "cell.h"
#include "PrinterInterface.h"
#include <cstdio>
#include <vector>

using namespace std;

class ConsolePrinter : public PrinterInterface {
public:
    ConsolePrinter();
    void draw(vector<vector<Cell>> grid) override;
    ConsolePrinter& operator=(const PrinterInterface& copy_from) const;
    ~ConsolePrinter();
};

#endif //GAME_OF_LIFE_CONSOLEPRINTER_H
