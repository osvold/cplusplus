/********************************************************************************
** Form generated from reading UI file 'taxcalculator.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TAXCALCULATOR_H
#define UI_TAXCALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TaxCalculator
{
public:

    void setupUi(QWidget *TaxCalculator)
    {
        if (TaxCalculator->objectName().isEmpty())
            TaxCalculator->setObjectName(QStringLiteral("TaxCalculator"));
        TaxCalculator->resize(400, 300);

        retranslateUi(TaxCalculator);

        QMetaObject::connectSlotsByName(TaxCalculator);
    } // setupUi

    void retranslateUi(QWidget *TaxCalculator)
    {
        TaxCalculator->setWindowTitle(QApplication::translate("TaxCalculator", "TaxCalculator", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TaxCalculator: public Ui_TaxCalculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TAXCALCULATOR_H
