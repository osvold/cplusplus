#include <iostream>
#include <vector>

using namespace std;

int main() {

    int val1;
    int val2;
    int val3;

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
        cout << "Invalid input. Try again: ";
    }

    cout << "Number three: " << endl;

    while(!(cin >> val3)) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input. Try again: ";
    }

    vector<int> numbers = {val1, val2, val3};

    sort(numbers.begin(), numbers.end());

    cout << "Numbers sorted: ";

    for(int n : numbers)
        cout << n << " ";

    return 0;
}