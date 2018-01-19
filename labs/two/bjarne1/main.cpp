#include <iostream>
using namespace std;

int main() {
    cout << "Give to integers" << endl;
    cout << "Number 1: ";

    int val1;

    cin >> val1;

    cout << "Number 2: ";
    int val2;

    cin >> val2;

    cout << "Integer1: " << val1 << ", Integer2: " << val2 << endl;

    int difference;
    double ratio;
    if(val1 > val2) {
        cout << "Val2 (" << val2 << ") is the smallest integer." << endl;
        cout << "Val1 (" << val1 << ") is the largest integer." << endl;

        if(val1 && val2 != 0) {
            ratio = val1 / val2;
        }

        difference = val1 - val2;
    }
    else if(val2 > val1) {
        cout << "Val1 (" << val1 << ") is the smallest integer." << endl;
        cout << "Val2 (" << val2 << ") is the largest integer." << endl;
        difference = val2 - val1;

        if(val1 && val2 != 0) {
            ratio = val2 / val1;
        }
    }
    else {
        cout << "Val1 (" << val1 << ") == Val2 (" << val2 << ")." << endl;
        difference = 0;

        if(val1 && val2 != 0) {
            ratio = 1.0;
        }

    }

    int sum = val1 + val2;

    cout << "Sum: " << sum << endl;
    cout << "Difference: " << difference << endl;

    if(val1 && val2 != 0) {
        int product = val1 * val2;

        cout << "Product: " << product << endl;
        cout << "Ratio: " << ratio << endl;
    }

    return 0;
}