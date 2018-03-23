/**
 * Written by Hans Petter Osvold, s929913@stud.hioa.no
 * Assignment 1 in C++ course
 */

#include "taxcalculator.h"
#include <QApplication>

/**
 * @brief The TaxCalculation class
 *
 * Written by Hans Petter Osvold, s929913@stud.hioa.no
 */

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TaxCalculator w;
    w.show();
    return a.exec();
}
