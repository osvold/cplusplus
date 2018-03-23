/**
 * Written by Hans Petter Osvold, s929913@stud.hioa.no
 * Assignment 1 in C++ course
 */

#include <iostream>
#include "taxcalculation.h"
using namespace std;

TaxCalculation::TaxCalculation(TaxInformation &information) {
    taxInformation = information;
}

/**
 * Function that uses the TaxInformation struct to calculate BSU deduction.
 * @brief bsu_deduction
 * @return
 */
double TaxCalculation::bsu_deduction() {

    constexpr double BSU_DEDUCTIBLE_ROOF = 25000.0;
    constexpr double BSU_DEDUCTIBLE_RATE =  0.20;

    if(taxInformation.bsuSavings > BSU_DEDUCTIBLE_ROOF) {
        return BSU_DEDUCTIBLE_ROOF * BSU_DEDUCTIBLE_RATE;
    }

    return taxInformation.bsuSavings * BSU_DEDUCTIBLE_RATE;
}

/**
 * Function that uses the TaxInformation struct to calculate Labor Union Fee deduction.
 * @brief labor_union_deduction
 * @return
 */
double TaxCalculation::labor_union_deduction() {

    constexpr int LABER_UNION_DEDUCTIBLE_ROOF = 3850;

    if(taxInformation.laborUnionFee > LABER_UNION_DEDUCTIBLE_ROOF) {
        return LABER_UNION_DEDUCTIBLE_ROOF;
    }

    return taxInformation.laborUnionFee;
}

/**
 * Function that uses the TaxInformation struct to calculate Minimum deduction.
 * @brief minimum_deduction
 * @return
 */
double TaxCalculation::minimum_deduction() {

    constexpr double MINIMUM_DEDUCTION_RATE = 0.45;
    constexpr int MINIMUM_DEDUCTION_ROOF = 97610;
    constexpr int MINIMUM_DEDUCTION_FLOOR = 4000;

    double deduction = (taxInformation.income + taxInformation.capital) * MINIMUM_DEDUCTION_RATE;

    if(deduction > MINIMUM_DEDUCTION_ROOF) {
        return MINIMUM_DEDUCTION_ROOF;
    }
    else if(deduction < MINIMUM_DEDUCTION_FLOOR) {
        return MINIMUM_DEDUCTION_FLOOR;
    }
    else return deduction;
}

/**
 * Function that uses the TaxInformation struct to calculate Work Travel deduction.
 * @brief work_travel_deduction
 * @return
 */
double TaxCalculation::work_travel_deduction() {

    constexpr int WORK_TRAVEL_DEDUCTION_FLOOR = 22350;
    constexpr int WORK_TRAVEL_LEVEL_2 = 50000;
    constexpr double WORK_TRAVEL_RATE_LEVEL_1 = 1.56;
    constexpr double WORK_TRAVEL_RATE_LEVEL_2 = 0.78;
    constexpr int WORK_TRAVEL_ONE_YEAR = 230;

    double totalKilometersTraveledPerYear = taxInformation.commute * 2 * WORK_TRAVEL_ONE_YEAR;

    double deductible;

    if(totalKilometersTraveledPerYear > WORK_TRAVEL_LEVEL_2) {
        deductible = (totalKilometersTraveledPerYear - WORK_TRAVEL_LEVEL_2) * WORK_TRAVEL_RATE_LEVEL_2 + WORK_TRAVEL_LEVEL_2 * WORK_TRAVEL_RATE_LEVEL_2;
    } else {
        deductible = totalKilometersTraveledPerYear * WORK_TRAVEL_RATE_LEVEL_1;
    }

    if(deductible < WORK_TRAVEL_DEDUCTION_FLOOR) {
        deductible = 0;
    } else {
        deductible = deductible - WORK_TRAVEL_DEDUCTION_FLOOR;
    }

    return deductible;
}

/**
 * Function that uses the TaxInformation struct to calculate Capital-cost deduction.
 * @brief capital_cost_deduction
 * @return
 */
double TaxCalculation::capital_cost_deduction() {

    if(taxInformation.interestsPaid > 0) {
        return taxInformation.interestsPaid;
    }

    return 0.0;
}

/**
 * Function that uses the TaxInformation struct to calculate Person deduction.
 * Could / Should propably be refactored to an constxpr value.
 * @brief person_deduction
 * @return
 */
double TaxCalculation::person_deduction() {
    return 54750;
}

/**
 * Function that calculates and returns the top tax.
 * @brief top_tax
 * @return
 */
double TaxCalculation::top_tax() {

    constexpr int TOP_TAX_LEVEL_1 = 169000;
    constexpr int TOP_TAX_LEVEL_2 = 237900;
    constexpr int TOP_TAX_LEVEL_3 = 598050;
    constexpr int TOP_TAX_LEVEL_4 = 962050;
    constexpr double TOP_TAX_LEVEL_2_TAX_PERCENT = 0.014;
    constexpr double TOP_TAX_LEVEL_3_TAX_PERCENT = 0.033;
    constexpr double TOP_TAX_LEVEL_4_TAX_PERCENT = 0.124;
    constexpr double TOP_TAX_LEVEL_5_TAX_PERCENT = 0.154;
    constexpr double TOP_TAX_LEVEL_2_TAX = (TOP_TAX_LEVEL_2 - TOP_TAX_LEVEL_1) * TOP_TAX_LEVEL_2_TAX_PERCENT;
    constexpr double TOP_TAX_LEVEL_3_TAX = (TOP_TAX_LEVEL_3 - TOP_TAX_LEVEL_2) * TOP_TAX_LEVEL_3_TAX_PERCENT;
    constexpr double TOP_TAX_LEVEL_4_TAX = (TOP_TAX_LEVEL_4 - TOP_TAX_LEVEL_3) * TOP_TAX_LEVEL_4_TAX_PERCENT;
    double tax;

    if(taxInformation.income < TOP_TAX_LEVEL_1) {
        tax = 0;
    }
    else if(taxInformation.income < TOP_TAX_LEVEL_2) {
        tax = (taxInformation.income - TOP_TAX_LEVEL_1) * TOP_TAX_LEVEL_2_TAX_PERCENT;
    }
    else if(taxInformation.income < TOP_TAX_LEVEL_3) {
        tax = (taxInformation.income - TOP_TAX_LEVEL_2) * TOP_TAX_LEVEL_3_TAX_PERCENT + TOP_TAX_LEVEL_2_TAX;
    }
    else if(taxInformation.income < TOP_TAX_LEVEL_4) {
        tax = (taxInformation.income - TOP_TAX_LEVEL_3) * TOP_TAX_LEVEL_4_TAX_PERCENT + TOP_TAX_LEVEL_3_TAX + TOP_TAX_LEVEL_2_TAX;
    }
    else {
        tax = (taxInformation.income - TOP_TAX_LEVEL_4) * TOP_TAX_LEVEL_5_TAX_PERCENT + TOP_TAX_LEVEL_4_TAX + TOP_TAX_LEVEL_3_TAX + TOP_TAX_LEVEL_2_TAX;
    }

    return tax;
}

/**
 * Function that calculates and returns the fortune tax.
 * @brief fortune_tax
 * @return
 */
double TaxCalculation::fortune_tax() {     
    constexpr int GENERAL_TAX_FLOOR = 1480000;
    constexpr double GENERAL_TAX_COMMUNAL_TAX_RATE = 0.007;
    constexpr double GENERAL_TAX_STATE_TAX_RATE = 0.0015;
    const double TAXABLE_FORTUNE = taxInformation.netFortune - GENERAL_TAX_FLOOR;

    if(TAXABLE_FORTUNE < 0) {
        return 0.0;
    }

    double communalTax = TAXABLE_FORTUNE * GENERAL_TAX_COMMUNAL_TAX_RATE;
    double stateTax = TAXABLE_FORTUNE * GENERAL_TAX_STATE_TAX_RATE;
    return communalTax + stateTax;
}

/**
 * Function that calculates and returns the social tax.
 * @brief social_tax
 * @return
 */
double TaxCalculation::social_tax() {

    constexpr int SOCIAL_TAX_FLOOR = 54650;

    if(taxInformation.income < SOCIAL_TAX_FLOOR) {
        return 0;
    }

    const double eightPercentOfIncome = taxInformation.income * 0.082;
    const double tventyFivePercentOfIncomeMinusSocialTaxFloor = (taxInformation.income-SOCIAL_TAX_FLOOR) * 0.25;

    if(eightPercentOfIncome > tventyFivePercentOfIncomeMinusSocialTaxFloor) {
        return tventyFivePercentOfIncomeMinusSocialTaxFloor;
    }

    return eightPercentOfIncome;
}

/**
 * Function that calculates and returns the general tax.
 * @brief general_tax
 * @return
 */
double TaxCalculation::general_tax() {

    double totalTaxableIncome = taxInformation.income + taxInformation.capital;

    totalTaxableIncome -= person_deduction();
    totalTaxableIncome -= minimum_deduction();
    totalTaxableIncome -= work_travel_deduction();
    totalTaxableIncome -= labor_union_deduction();
    totalTaxableIncome -= capital_cost_deduction();

    if(totalTaxableIncome > 0) {
        return totalTaxableIncome * 0.23;
    }

    return 0.0;
}

/**
 * Function that calculates and returns the sum of taxes.
 * @brief sum_taxes
 * @return
 */
double TaxCalculation::sum_taxes() {
    return general_tax() + social_tax() + fortune_tax() + top_tax() - bsu_deduction();
}
