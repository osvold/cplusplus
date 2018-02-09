#include <iostream>
using namespace std;

int main() {

    int val1 = {0};
    int val2 = {0};

    cout << "Number one: " << endl;
    while(!(cin >> val1)) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input. Try again: ";
    }

    cout << "Number two: " << endl;
    while(!(cin >> val2)) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input. Try Again: ";
    }

    int difference = {0};
    int product = val1 * val2;
    double ratio = {1};

    if(val1 > val2) {

        cout << "Largest number is val1: " << val1 << endl;
        cout << "Smallest number is val2: " << val2 << endl;
        difference = val1 - val2;
        ratio = (double) val1 / (double) val2;

    } else if(val1 < val2) {

        cout << "Largest number is val2: " << val2 << endl;
        cout << "Smallest number is val1: " << val1 << endl;
        difference = val2 - val1;
        ratio = (double) val2 / (double) val1;

    } else {

        cout << "Both numbers are equal. val1: " << val1 << ", val2: " << val2 << endl;
        difference = val1 - val2;

    }

    cout << "Difference is: " << difference << endl;
    cout << "Product is: " << product << endl;
    cout << "Ratio is: " << ratio << endl;

    return 0;
}