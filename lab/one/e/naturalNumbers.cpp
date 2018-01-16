//
// Created by hans on 16/01/2018.
//
#include <iostream>
#include "naturalNumbers.h"
using namespace std;

void printNaturalNumbers() {
    int sum = 0;

    for(int i = 0; i <= 15; i++) {
        sum += i;
    }

    cout << "The sum of the first 15 natural numbers is " + to_string(sum) << endl;
}


