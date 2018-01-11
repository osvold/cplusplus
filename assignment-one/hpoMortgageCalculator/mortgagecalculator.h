#ifndef MORTGAGECALCULATOR_H
#define MORTGAGECALCULATOR_H

#include <QWidget>
#include <QLabel>
#include <QSlider>
#include <QSpinBox>
#include <QLineEdit>
#include <QDoubleSpinBox>
#include "monthlycost.h"

class MortgageCalculator : public QWidget
{
    Q_OBJECT

public:
    MortgageCalculator(QWidget *parent = 0);
    ~MortgageCalculator();
private:
    QLabel *mortgageLabel;
    QSlider *mortgageSlider;
    QSpinBox *mortgageSpinbox;

    QLabel *interestLabel;
    QDoubleSpinBox *interestSpinbox;

    QLabel *yearsLabel;
    QSlider *yearsSlider;
    QSpinBox *yearsSpinbox;

    QLabel *termAmountLabel;
    QLineEdit *termLine;

private slots:
    void on_Change();
};

#endif // MORTGAGECALCULATOR_H
