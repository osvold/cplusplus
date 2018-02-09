#include "socialtax.h"

double socialtax(int income) {

    if(income < SOCIALTAX_FLOOR) {
        return 0;
    }

    double eightPercentOfIncome = income * 0.082;
    double tventyFivePercentOfIncomeMinusSocialTaxFloor = (income-SOCIALTAX_FLOOR) * 0.25;

    if(eightPercentOfIncome > tventyFivePercentOfIncomeMinusSocialTaxFloor) {
        return tventyFivePercentOfIncomeMinusSocialTaxFloor;
    }
    return eightPercentOfIncome;
}
