//
// Created by hans on 12/04/2018.
//

#include <iostream>
#include <random>
#include "gameboard.h"

GameBoard::GameBoard(int columns, int rows, int under_populated, int over_populated) {
    this->number_of_columns = columns;
    this->number_of_rows = rows;
    this->under_populated = under_populated;
    this->over_populated = over_populated;

    vector<vector<Cell>> A (static_cast<unsigned long>(this->number_of_rows), vector<Cell>(
            static_cast<unsigned long>(this->number_of_columns)));

    this->grid = A;
    this->generation = 0;
    this->generate();
}

/**
 *
 */
void GameBoard::draw() {
    vector<vector<Cell> >::iterator row_iterator;
    vector<Cell>::iterator column_iterator;

    for(row_iterator = this->grid.begin(); row_iterator != this->grid.end(); row_iterator++) {
        for(column_iterator = row_iterator->begin(); column_iterator != row_iterator->end(); column_iterator++) {
            std::cout << "  " << column_iterator->ordinal() << "  ";

            if(column_iterator == row_iterator->end() - 1) {
                std::cout << endl;
                std::cout << endl;
            }

        }
    }
}

/**
 * Function to find a neighbouring columns of (x,y).
 *
 * @param x
 * @param y
 * @return
 */
vector<Cell *> GameBoard::findNeighbours(int x, int y) {
    vector<Cell *> neighbours;
    for(int i = -1; i < 2; i++) {
        for(int j = -1; j < 2; j++) {
            int neighbourX = x+i;
            int neighbourY = y+j;
            if(!(neighbourX == x && neighbourY == y)) {
                if(!(neighbourX < 0 || neighbourY < 0 || neighbourX > this->number_of_columns-1 || neighbourY > this->number_of_rows-1)) {
                    Cell * neighbour = (& this->grid.at(static_cast<unsigned long>(neighbourY)).at(
                            static_cast<unsigned long>(neighbourX)));
                    neighbours.push_back(neighbour);
                }
            }
        }
    }

    return neighbours;
}

/**
 *
 */
void GameBoard::update() {
    this->generation++;
    std::cout << "Generation: " << this->generation << endl;

    vector<vector<Cell> >::iterator row_iterator;
    vector<Cell>::iterator column_iterator;
    int row = 0;
    int column = 0;

    vector<Cell *> alive_cells;
    vector<Cell *> dead_cells;

    /**
     * Row iterator iterates through the rows of the game board matrix.
     * Each row is in itself a new vector that contains Cell objects.
     */
    for(row_iterator = this->grid.begin(); row_iterator != this->grid.end(); row_iterator++) {
        column = 0;

        /**
         * Column iterator iterates through each rows columns. Each column has a Cell object that is
         * either living or dead
         */
        for(column_iterator = row_iterator->begin(); column_iterator != row_iterator->end(); column_iterator++) {

            /**
             * Each column can have up to nine neighbouring columns. But the column at (0,0) will only have three neighbours
             * because the remaining neighbours are outside the board.
             */
            vector<Cell *> cell_neighbours = findNeighbours(row, column);

            int alive_neighbour_counter = 0;
            vector<Cell *>::iterator neighbour_it;
            for(neighbour_it = cell_neighbours.begin(); neighbour_it != cell_neighbours.end(); neighbour_it++) {
                if((*neighbour_it)->isAlive()) alive_neighbour_counter++;
            }

            if(column_iterator->isAlive()) {
                if(alive_neighbour_counter < under_populated) {
                    // Cell has less than 2 living neighbours and will die of under population
                    Cell * cell;
                    cell = &(*column_iterator);
                    alive_cells.push_back(cell);
                    //column_iterator->setStatus(LifeStatus::Alive);
                }
                else if(alive_neighbour_counter > over_populated) {
                    // Cell has more than 3 living neighbours and will die of overpopulation
                    Cell * cell;
                    cell = &(*column_iterator);
                    dead_cells.push_back(cell);
                    //column_iterator->setStatus(LifeStatus::Dead);
                }
            }
            else {
                if(alive_neighbour_counter == 3) {
                    // Cell is dead and has exactly three living neighbours => reproduction
                    Cell * cell;
                    cell = &(*column_iterator);
                    alive_cells.push_back(cell);
                    //column_iterator->setStatus(LifeStatus::Alive);
                }
            }

            column++;
        }

        row++;

    }

    vector<Cell *>::iterator iterator;
    for(iterator = alive_cells.begin(); iterator != alive_cells.end(); iterator++) {
        (*iterator)->setStatus(LifeStatus::Alive);
    }

    for(iterator = dead_cells.begin(); iterator != dead_cells.end(); iterator++) {
        (*iterator)->setStatus(LifeStatus::Dead);
    }

}

int GameBoard::findAliveCount() {
    int alive_cell_count = 0;
    vector<vector<Cell> >::iterator row_iterator;
    vector<Cell>::iterator column_iterator;
    for(row_iterator = this->grid.begin(); row_iterator != this->grid.end(); row_iterator++) {
        for(column_iterator = row_iterator->begin(); column_iterator != row_iterator->end(); column_iterator++) {
            if(column_iterator->isAlive()) alive_cell_count++;
        }
    }

    return alive_cell_count;
}

void GameBoard::generate() {
    vector<vector<Cell> >::iterator row_iterator;
    vector<Cell>::iterator col_iterator;

    for(row_iterator = this->grid.begin(); row_iterator != this->grid.end(); row_iterator++) {
        for(col_iterator = row_iterator->begin(); col_iterator != row_iterator->end(); col_iterator++) {
            int n = (rand() % 3);
            if(n == 1) {
                col_iterator->setStatus(LifeStatus::Alive);
            } else {
                col_iterator->setStatus(LifeStatus::Dead);
            }
        }
    }
}

GameBoard::~GameBoard() {
    this->number_of_columns = 0;
    this->number_of_rows = 0;
    this->under_populated = 0;
    this->over_populated = 0;
    this->generation = 0;
    this->grid.clear();
}