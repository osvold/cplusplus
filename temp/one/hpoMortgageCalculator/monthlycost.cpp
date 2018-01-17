#include "monthlycost.h"

double monthtlycost(int l, double r, int n) {
    double factor = pow((1+r), n);
    return l*r*factor/(factor-1);
}
