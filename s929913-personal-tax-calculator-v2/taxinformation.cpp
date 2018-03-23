/**
 * Written by Hans Petter Osvold, s929913@stud.hioa.no
 * Assignment 1 in C++ course
 *
 * This struct represent the tax model of a user.
 */

struct TaxInformation
{
    /**
     * Gross income
     * @brief income
     */
    int income;

    /**
     * Capital income
     * @brief capital
     */
    int capital;

    /**
     * Commute distance to work, one way
     * @brief commute
     */
    int commute;

    /**
     * Savings in BSU for given year
     * @brief bsuSavings
     */
    int bsuSavings;

    /**
     * Interests paid for the given year
     * @brief interestsPaid
     */
    int interestsPaid;

    /**
     * Labor union fee paid for the given year
     * @brief laborUnionFee
     */
    int laborUnionFee;

    /**
     * Total net fortune
     * @brief netFortune
     */
    int netFortune;
};
