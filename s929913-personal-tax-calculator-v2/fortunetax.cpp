#include "fortunetax.h"

double fortunetax(int income) {

    if(income < TAX_FLOOR) {
        return 0;
    }

    return income * COMMUNAL_TAX_RATE + income * STATE_TAX_RATE;
}
