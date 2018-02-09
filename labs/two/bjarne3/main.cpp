#include <iostream>
using namespace std;

int main() {

    cout << "Gi et tall: " << endl;

    int var1;
    cin >> var1;

    if(var1 % 2 == 0) {
        cout << "The value " << var1 << " is an even number." << endl;
    } else {
        cout << "The value " << var1 << " is an odd number." << endl;
    }

    return 0;
}