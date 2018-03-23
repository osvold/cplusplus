#include <iostream>
#include <vector>
#include <cmath>

double monthtlycost (int l, double r, int n);
double interestamount (double m, double i);
double downpayment (double mc, double ia);


struct MonthlyPaymentLine {
    double remaining_debt;
    double monthly_cost;
    double interest_amount;
    double down_payment;
    int term_number;
};

int main() {
    double mortgage = 2000000;
    double interest = 3;
    int years = 20;
    double monthly_cost = monthtlycost(mortgage, interest / (12*100), years * 12);
    std :: vector<MonthlyPaymentLine> monthly_payments;

    for(int i = 1; i <= years*12; ++i) {
        double interest_amount = interestamount(mortgage, interest);
        double down_payment = downpayment(monthly_cost, interest_amount);
        mortgage = mortgage - down_payment;
        int term_number = i;
        MonthlyPaymentLine monthlyPaymentLine{mortgage, monthly_cost, interest_amount, down_payment, term_number};
        monthly_payments.push_back(monthlyPaymentLine);
    }

    for(auto it = monthly_payments.begin(); it < monthly_payments.end(); ++it) {
        MonthlyPaymentLine monthlyPaymentLine = (*it);
        std :: cout << "Term "
                    << monthlyPaymentLine.term_number
                    << "\t\t Interest: "
                    << monthlyPaymentLine.interest_amount
                    << "\t\t Down Payment: "
                    << monthlyPaymentLine.down_payment
                    << "\t\t Sum Interest and Down Payment: "
                    << monthlyPaymentLine.monthly_cost
                    << "\t\t Remaining debt: "
                    << monthlyPaymentLine.remaining_debt
                    << std :: endl;
    }

    return 0;
}

double monthtlycost(int l, double r, int n) {
    double factor = pow((1+r), n);
    return l*r*factor/(factor-1);
}

double interestamount (double m, double i) {
    return m * (i / (100*12));
}

double downpayment (double mc, double ia) {
    return mc - ia;
}


