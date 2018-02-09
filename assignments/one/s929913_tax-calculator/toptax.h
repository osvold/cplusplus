//
// Created by hans on 06/02/2018.
//

#ifndef S929913_TAX_CALCULATOR_TOPTAX_H
#define S929913_TAX_CALCULATOR_TOPTAX_H

constexpr int level1 = 169000;
constexpr int level2 = 237900;
constexpr int level3 = 598050;
constexpr int level4 = 962050;

constexpr double level1TaxPercent = 0;
constexpr double level2TaxPercent = 0.014;
constexpr double level3TaxPercent = 0.033;
constexpr double level4TaxPercent = 0.124;
constexpr double level5TaxPercent = 0.154;

constexpr double level1Tax = level1 * level1TaxPercent;
constexpr double level2Tax = (level2 - level1) * level2TaxPercent;
constexpr double level3Tax = (level3 - level2) * level3TaxPercent;
constexpr double level4Tax = (level4 - level3) * level4TaxPercent;

double topTax(int income);

#endif //S929913_TAX_CALCULATOR_TOPTAX_H
