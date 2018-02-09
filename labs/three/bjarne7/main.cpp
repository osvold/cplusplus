#include <iostream>
using namespace std;

int main() {

    string val;
    getline(cin, val);

    if(val == "zero") {
        cout << 0 << endl;
    }
    else if(val == "one") {
        cout << 1 << endl;
    }
    else if(val == "two") {
        cout << 2 << endl;
    }
    else if(val == "three") {
        cout << 3 << endl;
    }
    else if(val == "four") {
        cout << 4 << endl;
    }
    else if(val == "five") {
        cout << 5 << endl;
    }
    else {
        cout << "not a number i know" << endl;
    }
    
    return 0;
}