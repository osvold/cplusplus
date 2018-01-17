#include "mortgagecalculator.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MortgageCalculator w;
    w.show();

    return a.exec();
}
