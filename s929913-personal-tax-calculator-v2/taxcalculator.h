#ifndef TAXCALCULATOR_H
#define TAXCALCULATOR_H

#include <QWidget>
#include <QLabel>
#include <QSlider>
#include <QSpinBox>
#include <QLineEdit>
#include <QDoubleSpinBox>
#include <QPushButton>
#include "taxcalculation.h"

/**
 * @brief The TaxCalculation class
 *
 * Written by Hans Petter Osvold, s929913@stud.hioa.no
 */

namespace Ui {
class TaxCalculator;
}

class TaxCalculator : public QWidget
{
    Q_OBJECT

public:
    explicit TaxCalculator(QWidget *parent = 0);
    ~TaxCalculator();

private:
    Ui::TaxCalculator *ui;
    QLabel *incomeLabel;
    QSpinBox *incomeSpinbox;

    QLabel *capitalLabel;
    QSpinBox *capitalSpinbox;

    QLabel *commuteLabel;
    QSpinBox *commuteSpinbox;

    QLabel *interestPaidLabel;
    QSpinBox *interestPaidSpinbox;

    QLabel *bsuSavingsLabel;
    QSpinBox *bsuSavingsSpinbox;

    QLabel *laborUnionFeeLabel;
    QSpinBox *laborUnionFeeSpinbox;

    QLabel *netFortuneLabel;
    QSpinBox *netFortuneSpinbox;

    QLabel *topTaxLabel;
    QLineEdit *topTaxLine;

    QLabel *socialTaxLabel;
    QLineEdit *socialTaxLine;

    QLabel *generalTaxLabel;
    QLineEdit *generalTaxLine;

    QLabel *fortuneTaxLabel;
    QLineEdit *fortuneTaxLine;

    QLabel *sumTaxLabel;
    QLineEdit *sumTaxLine;

    QPushButton *submitBtn;

private slots:
    void handleButton();
};

#endif // TAXCALCULATOR_H
