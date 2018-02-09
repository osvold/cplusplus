#include "minimumdeduction.h"

double minimumdeduction(int income, int capital) {
    int sumIncomeCapital = income+capital;
    double deduction = sumIncomeCapital * 0.45;
    if(deduction > 97610) {
        return 97610;
    }
    else if(deduction < 4000) {
        return 4000;
    }
    else return deduction;
}
