//
// Created by hans on 09/02/2018.
//

#include "TaxCalculator.h"

TaxCalculator::TaxCalculator() = default;

TaxCalculator::TaxCalculator(TaxCalculator & taxCalculator) {

}

void TaxCalculator::setTaxInformation(TaxInformation & data) {
    taxInformation = data;
}

TaxInformation TaxCalculator::getTaxInformation() {
    return taxInformation;
}

