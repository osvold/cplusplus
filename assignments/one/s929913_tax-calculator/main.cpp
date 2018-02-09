#include <iostream>
#include <fstream>
#include "fortunetax.h"
#include "generaltax.h"
#include "toptax.h"
#include "socialtax.h"
using namespace std;

int getIncome();
int getCapital();
int getTravelDistanceToWorkOneWay();
int getInterestAndCapitalCostsPayed();
int getAmountInBSUSavings();
int getLaborUnionMembershipFee();
int getNetFortune();
int writeResultToFile(int income, double tax);

int main() {

    int income = getIncome();
    int capital = getCapital();
    int travelDistanceToWorkOneWay = getTravelDistanceToWorkOneWay();
    int interestAndCapitalCostsPayed = getInterestAndCapitalCostsPayed();
    int amountInBSUSavings = getAmountInBSUSavings();
    int laborUnionMembershipFee = getLaborUnionMembershipFee();
    int netFortune = getNetFortune();

    double tax = { topTax(income) };

    cout << "tax: " << tax << endl;
    writeResultToFile(income, tax);

}

int getIncome() {
    cout << "Yearly gross income: " << endl;
    int income;
    while(!(cin >> income)) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input. Try again.";
    }

    return income;
}


int getCapital() {
    cout << "Capital income: " << endl;
    int capital;
    while(!(cin >> capital)) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input. Try again.";
    }

    return capital;
}


int getTravelDistanceToWorkOneWay() {
    cout << "Travel distance to work one way: " << endl;
    int travelDistanceToWorkOneWay;
    while(!(cin >> travelDistanceToWorkOneWay)) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input. Try again.";
    }

    return travelDistanceToWorkOneWay;
}

int getInterestAndCapitalCostsPayed() {
    cout << "Interest and capital costs payed: " << endl;
    int interestAndCapitalCostsPayed;
    while(!(cin >> interestAndCapitalCostsPayed)) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input. Try again.";
    }

    return interestAndCapitalCostsPayed;
}

int getAmountInBSUSavings() {
    cout << "Amount in BSU savings: " << endl;
    int amountInBSUSavings;
    while(!(cin >> amountInBSUSavings)) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input. Try again.";
    }

    return amountInBSUSavings;
}

int getLaborUnionMembershipFee() {
    cout << "Labor union membership fee: " << endl;
    int laborUnionMembershipFee;
    while(!(cin >> laborUnionMembershipFee)) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input. Try again.";
    }

    return laborUnionMembershipFee;
}

int getNetFortune() {
    cout << "Net fortune: " << endl;
    int netFortune;
    while(!(cin >> netFortune)) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input. Try again.";
    }

    return netFortune;
}

int writeResultToFile(int income, double tax) {
    ofstream myFile;
    myFile.open("s929913_toptax.txt");
    myFile << "Gross income: " << income << ", top tax: " << tax << endl;
    myFile.close();
}