#include <iostream>
using namespace std;

int main() {

    cout << "Give one spelled out number from zero to nine: " << endl;

    string var1;
    cin >> var1;

    cout << "Your number is: ";

    if(var1 == "zero") {
        cout << 0 << endl;
    }
    else if(var1 == "one") {
        cout << 1 << endl;
    }
    else if(var1 == "two") {
        cout << 2 << endl;
    }
    else if(var1 == "three") {
        cout << 3 << endl;
    }
    else if(var1 == "four") {
        cout << 4 << endl;
    }
    else if(var1 == "five") {
        cout << 5 << endl;
    }
    else if(var1 == "six") {
        cout << 6 << endl;
    }
    else if(var1 == "seven") {
        cout << 7 << endl;
    }
    else if(var1 == "eight") {
        cout << 8 << endl;
    }
    else if(var1 == "nine") {
        cout << 9 << endl;
    }
    else {
        cout << "not a number I know.." << endl;
    }

    return 0;
}