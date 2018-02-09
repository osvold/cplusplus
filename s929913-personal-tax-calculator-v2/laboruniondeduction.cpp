#include "laboruniondeduction.h"

constexpr int LABER_UNION_DEDUCTIBLE_ROOF = 3850;

int laboruniondeduction(int unionFee) {
    if(unionFee > LABER_UNION_DEDUCTIBLE_ROOF) {
        return LABER_UNION_DEDUCTIBLE_ROOF;
    }

    return unionFee;
}
