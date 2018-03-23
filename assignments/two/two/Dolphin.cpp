//
// Created by hans on 22/03/2018.
//

#include "Dolphin.h"
#include <iostream>
using namespace std;

Dolphin::Dolphin() {
    cout << "Dolphin has been constructed" << endl;
}

Dolphin::~Dolphin() {
    cout << "Dolphin has been destructed" << endl;
}

void Dolphin::make_sound() {
    cout << "Making Dolphin sound" << endl;
}