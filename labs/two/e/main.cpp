#include <iostream>
using namespace std;

int main() {

    int realEstateAssets = 10000000;
    int companyCapital = 9000000;
    int debt = 1000000;
    int sumCapitalDebt = companyCapital + debt;

    cout << "Balance: " << endl;
    cout << endl;
    cout << "Assets\t\t\t\t\tCapital and debt\t\t" << endl;
    cout << "---------------------------------------------------" << endl;
    cout << "Real estate\t" << realEstateAssets << "\tCompany Capital\t\t" << companyCapital << endl;
    cout << "\t\t\t\t\t\tDebt\t\t\t\t" << debt << endl;
    cout << "Sum assets\t"  << realEstateAssets << "\tSum capital, debt: " << sumCapitalDebt << endl;
    return 0;
}