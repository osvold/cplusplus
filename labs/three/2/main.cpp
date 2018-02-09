#include <iostream>
#include <vector>

using namespace std;

int main() {
    double realEstateAssets = 10000000;
    double cash = 100000;
    double debt = 1000000;
    double sumAssets = cash + realEstateAssets;
    double companyCapital = realEstateAssets + cash - debt;
    double sumCapitalDebt = companyCapital + debt;

    cout << "Balance January 2017: " << endl;
    cout << endl;
    cout << "Assets\t\t\t\t\tCapital and debt\t\t" << endl;
    cout << "---------------------------------------------------" << endl;
    cout << "Real estate\t" << realEstateAssets << "\tCompany Capital\t\t" << companyCapital << endl;
    cout << "Bank account\t" << cash << endl;
    cout << "\t\t\t\t\t\tDebt\t\t\t\t" << debt << endl;
    cout << "Sum assets\t"  << sumAssets << "\tSum capital, debt: " << sumCapitalDebt << endl;

    // rental incomes 2017
    vector<double> income = {
            12000.0, 12000.0, 12000.0, 12000.0, 12000.0, 12000.0, 12000.0, 12000.0, 12000.0, 12000.0, 12000.0, 12000.0
    };

    double totalIncome2017 = {0.0};

    for(double d: income) totalIncome2017 += d;

    //vector<double> income = {12000.0, 12000.0}; // to test if the company looses money

    vector<double> cost = {6700.0, 31000.0}; // incurred costs 2017, like insurance and maintenance

    double totalCost2017 = {0.0};

    for(double d: cost) totalCost2017 += d;

    double result2017 = totalIncome2017 - totalCost2017;

    cout << "Result before tax:\t" << result2017 << endl;

    if(result2017 > 0) result2017 *= 0.77;

    cout << "Result after tax:\t" << result2017 << endl;

    cash += result2017;
    sumAssets = cash + realEstateAssets;
    companyCapital = realEstateAssets + cash - debt;
    sumCapitalDebt = companyCapital + debt;

    cout << "Balance December 2017: " << endl;
    cout << endl;
    cout << "Assets\t\t\t\t\tCapital and debt\t\t" << endl;
    cout << "---------------------------------------------------" << endl;
    cout << "Real estate\t" << realEstateAssets << "\tCompany Capital\t\t" << companyCapital << endl;
    cout << "Bank account\t" << cash << endl;
    cout << "\t\t\t\t\t\tDebt\t\t\t\t" << debt << endl;
    cout << "Sum assets\t"  << sumAssets << "\tSum capital, debt: " << sumCapitalDebt << endl;



    return 0;
}