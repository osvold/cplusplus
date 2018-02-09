//
// Created by hans on 06/02/2018.
//
#include "toptax.h"

double topTax(int income) {
    double tax;

    if(income < level1) {
        tax = 0;
    }
    else if(income < level2) {
        tax = (income - level1) * level2TaxPercent;
    }
    else if(income < level3) {
        tax = (income - level2) * level3TaxPercent + level2Tax;

    }
    else if(income < level4) {
        tax = (income - level3) * level4TaxPercent + level3Tax + level2Tax;
    }
    else {
        tax = (income - level4) * level5TaxPercent + level4Tax + level3Tax + level2Tax;
    }

    return tax;
}
