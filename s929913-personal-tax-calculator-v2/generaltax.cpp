#include "generaltax.h"
#include "minimumdeduction.h"
#include "worktraveldeduction.h"
#include "laboruniondeduction.h"

double generaltax(TaxInformation & taxInformation) {

    int totalTaxableIncome = taxInformation.income + taxInformation.capital;

    constexpr double personDeduction = 54750;

    totalTaxableIncome = totalTaxableIncome - personDeduction;
    totalTaxableIncome = totalTaxableIncome - minimumdeduction(taxInformation.income, taxInformation.capital);
    totalTaxableIncome = totalTaxableIncome - worktraveldeduction(taxInformation.commute);
    totalTaxableIncome = totalTaxableIncome - laboruniondeduction(taxInformation.laborUnionFee);

    if(totalTaxableIncome > 0) {
        return totalTaxableIncome * 0.23;
    }

    return 0.0;
}
