#include "taxcalculator.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TaxCalculator w;
    w.show();

    return a.exec();
}
