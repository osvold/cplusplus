#include <iostream>
#include <fstream>
#include "toptax.h"

using namespace std;

int main() {

    cout << "Yearly gross income: " << endl;
    int income;
    while(!(cin >> income)) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input. Try again.";
    }

    double tax = { topTax(income) };

    cout << "tax: " << tax << endl;

    ofstream myFile;
    myFile.open("s929913_toptax.txt");
    myFile << "Gross income: " << income << ", top tax: " << tax << endl;
    myFile.close();

    return 0;
}