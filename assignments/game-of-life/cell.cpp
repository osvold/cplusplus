//
// Created by hans on 12/04/2018.
//

#include <iostream>
#include "cell.h"

Cell::Cell() {
    this->cell_status = LifeStatus::Dead;
}

Cell::~Cell() {
    this->cell_status = LifeStatus::Dead;
}

void Cell::setStatus(LifeStatus life_status) {
    if(life_status == LifeStatus::Alive) {
        //std::cout << "Setting Cell LifeStatus to Alive, " << std::endl;
    } else {
        //std::cout << "Setting Cell LifeStatus to Dead, " << std::endl;
    }
    this->cell_status = life_status;
}

bool Cell::isAlive() {
    return this->cell_status == LifeStatus::Alive;
}

bool Cell::isDead() {
    return this->cell_status == LifeStatus::Dead;
}

char Cell::ordinal() {
    if(this->isAlive()) return '0';
    return '.';
}