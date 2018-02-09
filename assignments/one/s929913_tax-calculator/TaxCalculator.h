//
// Created by hans on 09/02/2018.
//

#ifndef S929913_TAX_CALCULATOR_TAXCALCULATOR_H
#define S929913_TAX_CALCULATOR_TAXCALCULATOR_H


#include "TaxInformation.h"

class TaxCalculator {
    TaxInformation taxInformation;
public:
    TaxCalculator();
    TaxCalculator(TaxCalculator & taxCalculator);
    void setTaxInformation(TaxInformation & data);
    TaxInformation getTaxInformation();
};


#endif //S929913_TAX_CALCULATOR_TAXCALCULATOR_H
