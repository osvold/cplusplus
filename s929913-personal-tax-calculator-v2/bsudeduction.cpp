#include "bsudeduction.h"
constexpr double BSU_DEDUCTIBLE_ROOF = 25000.0;

double bsudeduction(int bsuCurrentYear) {
    if(bsuCurrentYear > BSU_DEDUCTIBLE_ROOF) {
        return BSU_DEDUCTIBLE_ROOF * 0.25;
    }

    return bsuCurrentYear * 0.25;
}
