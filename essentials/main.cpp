#include <QCoreApplication>
#include <iostream>
#include "helloworld.h"
#include "datatypes.h"
#include "loops.h"
#include "functions.h"
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

   return a.exec();
}
