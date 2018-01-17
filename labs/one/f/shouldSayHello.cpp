//
// Created by hans on 16/01/2018.
//
#include <iostream>
#include "shouldSayHello.h"
using namespace std;

char shouldSayHello() {
    cout << "Say hello (y/n)? " << endl;
    char c;
    cin >> c;
    return c;
}

