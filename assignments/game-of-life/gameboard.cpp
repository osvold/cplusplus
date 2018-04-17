//
// Created by hans on 12/04/2018.
//

#include <iostream>
#include "gameboard.h"

GameBoard::GameBoard(int columns, int rows) {
    this->number_of_columns = columns;
    this->number_of_rows = rows;
    vector<vector<Cell>> A (this->number_of_rows, vector<Cell>(this->number_of_columns));
    this->grid = A;
    this->generation = 0;
    this->generate();
}

void GameBoard::draw() {
    vector<vector<Cell>>::iterator row_iterator;
    vector<Cell>::iterator column_iterator;

    for(row_iterator = this->grid.begin(); row_iterator != this->grid.end(); row_iterator++) {
        for(column_iterator = row_iterator->begin(); column_iterator != row_iterator->end(); column_iterator++) {
            std::cout << column_iterator->ordinal();

            if(column_iterator == row_iterator->end() - 1) {
                std::cout << endl;
            }

        }
    }

}

vector<Cell> GameBoard::findNeighbours(int x, int y) {
    vector<Cell> neighbours;
    for(int i = -1; i < 3; i++) {
        for(int j = -1; j < 3; j++) {
            int neighbourX = x+i;
            int neighbourY = y+j;
            if(!(neighbourX == x && neighbourY == y)) {
                if(!(neighbourX < 0 || neighbourY < 0 || neighbourX > this->number_of_columns-1 || neighbourY > this->number_of_rows-1)) {
                    Cell& neighbour = this->grid.at(neighbourY).at(neighbourX);
                    neighbours.push_back(neighbour);
                }
            }
        }
    }

    return neighbours;
}

void GameBoard::update() {
    this->generation++;
    std::cout << "Generation: " << this->generation << endl;
    vector<Cell> dead;
    vector<Cell> alive;

    vector<vector<Cell>>::iterator row_it;
    vector<Cell>::iterator column_it;
    int row = 0;
    int column = 0;

    for(row_it = this->grid.begin(); row_it != this->grid.end(); row_it++) {
        row++;
        column = 0;
        for(column_it = row_it->begin(); column_it != row_it->end(); column_it++) {
            column++;
            vector<Cell> cell_neighbours = findNeighbours(row, column);
            int counter = 0;
            // Todo: Dangerous - lookup correct way to do this
            Cell cell2 = *column_it;

            vector<Cell>::iterator neighbour_it;
            for(neighbour_it = cell_neighbours.begin(); neighbour_it != cell_neighbours.end(); neighbour_it++) {
                if(neighbour_it->isAlive()) counter++;
            }

            std::cout << "Counter=" << counter << std::endl;

            if(cell2.isAlive()) {
                if(counter < 2)
                    dead.push_back(cell2);
                if(counter > 3)
                    alive.push_back(cell2);
            }
            else {
                if(counter == 3) {
                    alive.push_back(cell2);
                }
            }

            std::cout << "Row= " << row << ", Column= " << column << endl;

            vector<Cell>::iterator cell_iterator;
            for(cell_iterator = dead.begin(); cell_iterator != dead.end(); cell_iterator++) {
                std::cout << "Found Dead cell!" << endl;
//                cell_iterator->setStatus(LifeStatus::Dead);
                this->grid.at(row-1).at(column-1).setStatus(LifeStatus::Dead);
            }

            for(cell_iterator = alive.begin(); cell_iterator != alive.end(); cell_iterator++) {
                std::cout << "Found Alive Cell!" << endl;
//                cell_iterator->setStatus(LifeStatus::Alive);
                this->grid.at(row-1).at(column-1).setStatus(LifeStatus::Alive);
            }

            std::cout << "Generation number: " << this->generation << endl;
        }
    }

}

int GameBoard::findAliveCount() {
    int alive_cell_count = 0;
    vector<vector<Cell>>::iterator row_iterator;
    vector<Cell>::iterator column_iterator;
    for(row_iterator = this->grid.begin(); row_iterator != this->grid.end(); row_iterator++) {
        for(column_iterator = row_iterator->begin(); column_iterator != row_iterator->end(); column_iterator++) {
            if(column_iterator->isAlive()) alive_cell_count++;
        }
    }

    return alive_cell_count;
}

void GameBoard::generate() {
    vector<vector<Cell>>::iterator row;
    vector<Cell>::iterator col;
    for(row = this->grid.begin(); row != this->grid.end(); row++) {
        for(col = row->begin(); col != row->end(); col++) {
            int n = (rand() % 3);
            if(n == 1) {
                col->setStatus(LifeStatus::Alive);
            } else {
                col->setStatus(LifeStatus::Dead);
            }
        }
    }
}

GameBoard::~GameBoard() {
    this->number_of_columns = 0;
    this->number_of_rows = 0;
    this->generation = 0;
}