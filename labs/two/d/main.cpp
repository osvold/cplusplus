#include <iostream>
#include <iomanip>
#include "askForIncome.h"
#include "askForCost.h"
using namespace std;

void staticExample() {
    cout << "Static example!" << endl;
    double income = 950000;
    double cost = 723000;
    double total = income - cost;
    cout << "Result = " << "income (" << income << ") - cost (" << cost << ") = " << total << endl;
}

int main() {

    staticExample();

    cout << "Down to business!" << endl;
    double income = askForIncome();
    double cost = askForCost();
    double result = income - cost;

    if(result > 0) {
        double tax = 1 - 0.23;
        double result = result * tax;
        setprecision(10);
        cout << "Result = " << "(income (" << income << ") - cost (" << cost << ")) * tax(23%) = " << result << endl;
    } else {
        cout << "Result = " << "income (" << income << ") - cost (" << cost << ") = " << result << endl;
    }

    return 0;
}