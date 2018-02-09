#include "worktraveldeduction.h"

constexpr int DEDUCTION_FLOOR = 22350;
constexpr int LEVEL_2 = 50000;
constexpr double RATE_LEVEL_1 = 1.56;
constexpr double RATE_LEVEL_2 = 0.78;
constexpr int ONE_YEAR = 230;

double worktraveldeduction(int kilometersTravelToWork) {

    int totalKilometersTraveledPerYear = kilometersTravelToWork * 2 * ONE_YEAR;

    double deductible;

    if(totalKilometersTraveledPerYear > LEVEL_2) {
        deductible = (totalKilometersTraveledPerYear - LEVEL_2) * RATE_LEVEL_2 + LEVEL_2 * RATE_LEVEL_1;
    } else {
        deductible = totalKilometersTraveledPerYear * RATE_LEVEL_1;
    }

    if(deductible < DEDUCTION_FLOOR) {
        deductible = 0;
    } else {
        deductible = deductible - DEDUCTION_FLOOR;
    }

    return deductible;
}
