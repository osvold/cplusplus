#include <iostream>
using namespace std;

int main() {

    cout << "Give integer: " << endl;
    int val;

    while(!(cin >> val)) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input. Try again.";
    }

    if(val % 2 == 0) {
        cout << "The number " << val << " is a even number." << endl;
    } else {
        cout << "The number " << val << " is a odd number." << endl;
    }

    return 0;
}