#include <iostream>
using namespace std;

void addFiveAndPrintPassedByValue(int i) {
    i += 5;
    printf("Printing from inside addFiveAndPrintPassedByValue() : The value is %d\n", i);
}

void addFiveAndPrintPassedByReference(int &i) {
    i += 5;
    printf("Printing from inside addFiveAndPrintPassedByReference() : The value is %d\n", i);
}
