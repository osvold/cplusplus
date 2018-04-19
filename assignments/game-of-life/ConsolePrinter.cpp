//
// Created by hans on 19/04/2018.
//

#include <iostream>
#include "ConsolePrinter.h"

ConsolePrinter::ConsolePrinter() = default;

void ConsolePrinter::draw(vector<vector<Cell>> grid) {
    vector<vector<Cell>>::iterator row_iterator;
    vector<Cell>::iterator column_iterator;

    for(row_iterator = grid.begin(); row_iterator != grid.end(); row_iterator++) {
        for(column_iterator = row_iterator->begin(); column_iterator != row_iterator->end(); column_iterator++) {
            std::cout << "  " << column_iterator->ordinal() << "  ";

            if(column_iterator == row_iterator->end() - 1) {
                std::cout << endl;
                std::cout << endl;
            }

        }
    }
}

ConsolePrinter& ConsolePrinter::operator=(const PrinterInterface& copy_from) const {
}
ConsolePrinter::~ConsolePrinter() = default;