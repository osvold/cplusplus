//
// Created by hans on 22/03/2018.
//

#include "Mammal.h"
#include <iostream>
using namespace std;

Mammal::Mammal() {
    cout << "Mammal has been constructed" << endl;
}
Mammal::~Mammal() {
    cout << "Mammal has been destructed" << endl;
}

void Mammal::make_sound() {}