//
// Created by hans on 12/04/2018.
//

#include "cell.h"

Cell::Cell() {
    this->cell_status = LifeStatus::Dead;
}

Cell::~Cell() {
    this->cell_status = LifeStatus::Dead;
}

void Cell::setStatus(LifeStatus life_status) {
    this->cell_status = life_status;
}

bool Cell::isAlive() {
    return this->cell_status == LifeStatus::Alive;
}

char Cell::ordinal() {
    if(this->isAlive()) return '0';
    return '.';
}