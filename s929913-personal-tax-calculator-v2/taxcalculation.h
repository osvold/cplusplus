#ifndef TAXCALCULATION_H
#define TAXCALCULATION_H

#include "taxinformation.h"

constexpr int GENERAL_TAX_FLOOR = 1480000;
constexpr double GENERAL_TAX_COMMUNAL_TAX_RATE = 0.007;
constexpr double GENERAL_TAX_STATE_TAX_RATE = 0.015;
constexpr int PERSON_DEDUCTION = 54750;
constexpr int TOP_TAX_LEVEL_1 = 169000;
constexpr int TOP_TAX_LEVEL_2 = 237900;
constexpr int TOP_TAX_LEVEL_3 = 598050;
constexpr int TOP_TAX_LEVEL_4 = 962050;
constexpr double TOP_TAX_LEVEL_1_TAX_PERCENT = 0;
constexpr double TOP_TAX_LEVEL_2_TAX_PERCENT = 0.014;
constexpr double TOP_TAX_LEVEL_3_TAX_PERCENT = 0.033;
constexpr double TOP_TAX_lEVEL_4_TAX_PERCENT = 0.124;
constexpr double TOP_TAX_LEVEL_5_TAX_PERCENT = 0.154;
constexpr double TOP_TAX_LEVEL_1_TAX = LEVEL_1 * level1TaxPercent;
constexpr double TOP_TAX_LEVEL_2_TAX = (LEVEL_2 - LEVEL_1) * LEVEL_2_TAX_PERCENT;
constexpr double TOP_TAX_LEVEL_3_TAX = (LEVEL_3 - LEVEL_2) * LEVEL_3_TAX_PERCENT;
constexpr double TOP_TAX_LEVEL_4_TAX = (LEVEL_4 - LEVEL_3) * LEVEL_4_TAX_PERCENT;
constexpr double BSU_DEDUCTIBLE_ROOF = 25000.0;
constexpr double BSU_DEDUCTIBLE_RATE = 0.25;
constexpr int LABER_UNION_DEDUCTIBLE_ROOF = 3850;
constexpr int WORK_TRAVEL_DEDUCTION_FLOOR = 22350;
constexpr int WORK_TRAVEL_LEVEL_2 = 50000;
constexpr double WORK_TRAVEL_RATE_LEVEL_1 = 1.56;
constexpr double WORK_TRAVEL_RATE_LEVEL_2 = 0.78;
constexpr int WORK_TRAVEL_ONE_YEAR = 230;
constexpr int MINIMUM_DEDUCTION_RATE = 45;
constexpr int MINIMUM_DEDUCTION_ROOF = 97610;
constexpr int MINIMUM_DEDUCTION_FLOOR = 4000;

class TaxCalculation
{
private:
    TaxCalculation();
    TaxInformation TaxInformation;
    double bsudeduction();
    int laboruniondeduction();
    double minimumdeduction();
    double worktraveldeduction();
public:
    TaxCalculation(TaxInformation & taxInformation);
    double fortunetax();
    double generaltax();
    double socialtax();
    double sumtaxes();
    double toptax();
};

#endif // TAXCALCULATION_H
