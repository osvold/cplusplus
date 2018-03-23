//
// Created by hans on 22/03/2018.
//

#include "Shark.h"
#include <iostream>
using namespace std;

Shark::Shark() {
    cout << "Shark has been created" << endl;
}

Shark::~Shark() {
    cout << "Shark has been destructed" << endl;
}

void Shark::make_sound() {
    cout << "Oh no its a shark..." << endl;
}