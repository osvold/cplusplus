#include <iostream>
using namespace std;

/**
 * number of bytes data type ocupies in memory
 */
int main() {
    cout << "char is " + to_string(sizeof(char)) + " bytes" << endl;
    cout << "bool is " + to_string(sizeof(bool)) + " bytes" << endl;
    cout << "int is " + to_string(sizeof(int)) + " bytes" << endl;
    cout << "double is " + to_string(sizeof(double)) + " bytes" << endl;
    cout << "float is " + to_string(sizeof(float)) + " bytes" << endl;
    return 0;
}