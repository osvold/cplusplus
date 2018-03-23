//
// Created by hans on 22/03/2018.
//

#include "Animal.h"
#include <iostream>
using namespace std;

Animal::Animal() {
    cout << "Animal has been constructed" << endl;
}

Animal::~Animal() {
    cout << "Animal has been destructed" << endl;
}

void Animal::make_sound() {}