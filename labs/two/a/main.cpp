#include <iostream>
using namespace std;

int main() {

    int a = 10;
    int b = a++;

    // should print out "a, b: 11, 10"
    cout << "a, b: " << a << ", " << b << endl;

    int c = ++b;

    // should print out "a, b, c: 11, 11, 11"
    cout << "a, b, c: " << a << ", " << b << ", " << c << endl;

    return 0;
}