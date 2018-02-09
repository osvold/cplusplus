#include <QCoreApplication>
#include <iostream>
#include "helloworld.h"
#include "datatypes.h"
#include "loops.h"
#include "functions.h"
#include "jump.cpp"
#include "variadic.h"
#include "factorial.h"
#include "class1.cpp"
#include "data-members-struct.cpp"
using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    helloWorld();
    dataTypes();
    loops();

    int i = 15;
    printf("The value of i is %d\n", i);
    printf("Going into addFiveAndPrintPassedByValue()\n");
    addFiveAndPrintPassedByValue(i);
    printf("Outside of addFiveAndPrintPassedByValue()\n");
    printf("The value of i is %d\n", i);
    printf("Going into addFiveAndPrintPassedByReference()\n");
    addFiveAndPrintPassedByReference(i);
    printf("Outside of addFiveAndPrintPassedByReference()\n");
    printf("The value of i is %d\n", i);

    message("This is a message");
    message("Average: %lf", average(5, 25.0, 35.7, 50.1, 127.6, 75.0));

    while(jump(prompt()));
    puts("\nDone.");

    unsigned long int n = 7;
    message("Factorial of %ld is %ld\n", n, factorial(n));

    i = 47;
    Class1 object1;
    object1.setValue(i);
    printf("Value is %d\n", object1.getValue());
    printf("Value2 is %d\n", object1.j);

    A structA = { 1, 2, 3 };
    printf("ia is %d, ib is %d, ic is %d\n", structA.ia, structA.ib, structA.ic);

    // a pointer to the structA
    A *pa = &structA;
    printf("ia is %d, ib is %d, ic is %d\n", pa->ia, pa->ib, pa->ic);

    // members of struct and class is identical except for
    // members of a struct defaults to public and
    // members of a class defaults to private

    // it is good practice to use structs when it only needs to contain data members
    // if it needs function members then it should be a class

    return a.exec();
}
