#ifndef TAXCALCULATION_H
#define TAXCALCULATION_H

#include "taxinformation.cpp"

/**
 * @brief The TaxCalculation class
 *
 * Written by Hans Petter Osvold, s929913@stud.hioa.no
 */

class TaxCalculation
{
private:

    /**
     * Private default constructor because it should not be able to
     * create an intance of this class without tax information.
     * @brief TaxCalculation
     */
    TaxCalculation();

    /**
     * Struct that holds information about the users key values to calculate
     * the tax from.
     * @brief taxInformation
     */
    TaxInformation taxInformation;

    /**
     * Function that uses the TaxInformation struct to calculate BSU deduction.
     * @brief bsu_deduction
     * @return
     */
    double bsu_deduction();

    /**
     * Function that uses the TaxInformation struct to calculate Labor Union Fee deduction.
     * @brief labor_union_deduction
     * @return
     */
    double labor_union_deduction();

    /**
     * Function that uses the TaxInformation struct to calculate Minimum deduction.
     * @brief minimum_deduction
     * @return
     */
    double minimum_deduction();

    /**
     * Function that uses the TaxInformation struct to calculate Work Travel deduction.
     * @brief work_travel_deduction
     * @return
     */
    double work_travel_deduction();

    /**
     * Function that uses the TaxInformation struct to calculate Capital-cost deduction.
     * @brief capital_cost_deduction
     * @return
     */
    double capital_cost_deduction();

    /**
     * Function that uses the TaxInformation struct to calculate Person deduction.
     * Could / Should propably be refactored to an constxpr value.
     * @brief person_deduction
     * @return
     */
    double person_deduction();
public:

    /**
     * public constrcutor which take a TaxInformation as argument.
     * @brief TaxCalculation
     * @param taxInformation
     */
    TaxCalculation(TaxInformation &taxInformation);

    /**
     * Function that calculates and returns the fortune tax.
     * @brief fortune_tax
     * @return
     */
    double fortune_tax();

    /**
     * Function that calculates and returns the general tax.
     * @brief general_tax
     * @return
     */
    double general_tax();

    /**
     * Function that calculates and returns the social tax.
     * @brief social_tax
     * @return
     */
    double social_tax();

    /**
     * Function that calculates and returns the sum of taxes.
     * @brief sum_taxes
     * @return
     */
    double sum_taxes();

    /**
     * Function that calculates and returns the top tax.
     * @brief top_tax
     * @return
     */
    double top_tax();
};

#endif // TAXCALCULATION_H
