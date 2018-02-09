#include "taxcalculation.h"

TaxCalculation::TaxCalculation(){}
TaxCalculation::TaxCalculation(TaxInformation & taxInformation) {
    taxInformation = taxInformation;
}

TaxCalculation::bsudeduction() {
    if(taxInformation.bsuSavings > BSU_DEDUCTIBLE_ROOF) {
        return BSU_DEDUCTIBLE_ROOF * BSU_DEDUCTIBLE_RATE;
    }

    return bsuCurrentYear * BSU_DEDUCTIBLE_RATE;
}

TaxCalculation::laboruniondeduction() {
    if(TaxInformation.unionFee > LABER_UNION_DEDUCTIBLE_ROOF) {
        return LABER_UNION_DEDUCTIBLE_ROOF;
    }

    return TaxInformation.unionFee;
}

TaxCalculation::minimumdeduction() {
    double deduction = (TaxInformation.income + TaxInformation.capital) * MINIMUM_DEDUCTION_RATE;

    if(deduction > MINIMUM_DEDUCTION_ROOF) {
        return MINIMUM_DEDUCTION_ROOF;
    }
    else if(deduction < MINIMUM_DEDUCTION_FLOOR) {
        return MINIMUM_DEDUCTION_FLOOR;
    }
    else return deduction;
}

TaxCalculation::worktraveldeduction() {
    int totalKilometersTraveledPerYear = TaxInformation.commute * 2 * WORK_TRAVEL_ONE_YEAR;

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

TaxCalculation::toptax() {
    double tax;

    if(TaxInformation.income < TOP_TAX_LEVEL_1) {
        tax = 0;
    }
    else if(TaxInformation.income < TOP_TAX_LEVEL_2) {
        tax = (TaxInformation.income - TOP_TAX_LEVEL_1) * TOP_TAX_LEVEL_2_TAX_PERCENT;
    }
    else if(TaxInformation.income < TOP_TAX_LEVEL_3) {
        tax = (TaxInformation.income - TOP_TAX_LEVEL_2) * TOP_TAX_LEVEL_3_TAX_PERCENT + TOP_TAX_LEVEL_2_TAX;
    }
    else if(TaxInformation.income < TOP_TAX_LEVEL_4) {
        tax = (TaxInformation.income - TOP_TAX_LEVEL_3) * TOP_TAX_LEVEL_4_TAX_PERCENT + TOP_TAX_LEVEL_3_TAX + TOP_TAX_LEVEL_2_TAX;
    }
    else {
        tax = (TaxInformation.income - TOP_TAX_LEVEL_4) * TOP_TAX_LEVEL_5_TAX_PERCENT + TOP_TAX_LEVEL_4_TAX + TOP_TAX_LEVEL_3_TAX + TOP_TAX_LEVEL_2_TAX;
    }

    return tax;
}

TaxCalculation::fortunetax() {
    if(TaxInformation.income < GENERAL_TAX_FLOOR) {
        return 0;
    }

    return income * COMMUNAL_TAX_RATE + TaxInformation.income * STATE_TAX_RATE;
}

TaxCalculation::socialtax() {
    if(TaxInformation.income < SOCIALTAX_FLOOR) {
        return 0;
    }

    const double eightPercentOfIncome = TaxInformation.income * 0.082;
    const double tventyFivePercentOfIncomeMinusSocialTaxFloor = (TaxInformation.income-SOCIALTAX_FLOOR) * 0.25;

    if(eightPercentOfIncome > tventyFivePercentOfIncomeMinusSocialTaxFloor) {
        return tventyFivePercentOfIncomeMinusSocialTaxFloor;
    }

    return eightPercentOfIncome;
}

TaxCalculation::generaltax() {
    int totalTaxableIncome = TaxInformation.income + TaxInformation.capital;

    constexpr double personDeduction = 54750;

    totalTaxableIncome = totalTaxableIncome - personDeduction;
    totalTaxableIncome = totalTaxableIncome - minimumdeduction();
    totalTaxableIncome = totalTaxableIncome - worktraveldeduction();
    totalTaxableIncome = totalTaxableIncome - laboruniondeduction();

    if(totalTaxableIncome > 0) {
        return totalTaxableIncome * 0.23;
    }

    return 0.0;
}

TaxCalculation::sumtaxes() {
    return generaltax() + socialtax() + fortunetax() + toptax();
}
