/********************************************************************************
** Form generated from reading UI file 'mortgagecalculator.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MORTGAGECALCULATOR_H
#define UI_MORTGAGECALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MortgageCalculator
{
public:

    void setupUi(QWidget *MortgageCalculator)
    {
        if (MortgageCalculator->objectName().isEmpty())
            MortgageCalculator->setObjectName(QStringLiteral("MortgageCalculator"));
        MortgageCalculator->resize(400, 300);

        retranslateUi(MortgageCalculator);

        QMetaObject::connectSlotsByName(MortgageCalculator);
    } // setupUi

    void retranslateUi(QWidget *MortgageCalculator)
    {
        MortgageCalculator->setWindowTitle(QApplication::translate("MortgageCalculator", "MortgageCalculator", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MortgageCalculator: public Ui_MortgageCalculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MORTGAGECALCULATOR_H
