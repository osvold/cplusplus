#include <QHBoxLayout>
#include <QSpacerItem>

#include "taxcalculator.h"
#include "ui_taxcalculator.h"
#include "taxinformation.h"


TaxCalculator::TaxCalculator(QWidget *parent) :
    QWidget(parent)
{

    // ui elements for income row
    incomeLabel = new QLabel(tr("Yearly gross income: "));
    incomeSpinbox = new QSpinBox;
    incomeSpinbox->setSingleStep(25000);
    incomeSpinbox->setRange(0, 15000000);

    // adding the income ui elements to a QHBoxLayout
    // that will represent one row of the calculator
    QHBoxLayout *incomeRowLayout = new QHBoxLayout;
    incomeRowLayout->addWidget(incomeLabel);
    incomeRowLayout->addStretch();
    incomeRowLayout->addWidget(incomeSpinbox);

    // ui elements for capital row
    capitalLabel = new QLabel(tr("Capital income: "));
    capitalSpinbox = new QSpinBox;
    capitalSpinbox->setSingleStep(25000);
    capitalSpinbox->setRange(0, 15000000);

    // adding the capital ui elements to a QHBoxLayout
    // that will represent one row of the calculator
    QHBoxLayout *capitalRowLayout = new QHBoxLayout;
    capitalRowLayout->addWidget(capitalLabel);
    capitalRowLayout->addStretch();
    capitalRowLayout->addWidget(capitalSpinbox);

    // ui elements for commute row
    commuteLabel = new QLabel(tr("Commute-distance:"));
    commuteSpinbox = new QSpinBox;
    commuteSpinbox->setSingleStep(25000);
    commuteSpinbox->setRange(0, 15000000);

    // adding the travel ui elements to a QHBoxLayout
    // that will represent one row of the calculator
    QHBoxLayout *commuteRowLayout = new QHBoxLayout;
    commuteRowLayout->addWidget(commuteLabel);
    commuteRowLayout->addStretch();
    commuteRowLayout->addWidget(commuteSpinbox);

    // ui elements for interest-paid row
    interestPaidLabel = new QLabel(tr("Interests paid:"));
    interestPaidSpinbox = new QSpinBox;
    interestPaidSpinbox->setSingleStep(25000);
    interestPaidSpinbox->setRange(0, 15000000);

    // adding the interest-paid ui elements to a QHBoxLayout
    // that will represent one row of the calculator
    QHBoxLayout *interestPaidRowLayout = new QHBoxLayout;
    interestPaidRowLayout->addWidget(interestPaidLabel);
    interestPaidRowLayout->addStretch();
    interestPaidRowLayout->addWidget(interestPaidSpinbox);

    // ui elements for bsu-savings row
    bsuSavingsLabel = new QLabel(tr("BSU savings:"));
    bsuSavingsSpinbox = new QSpinBox;
    bsuSavingsSpinbox->setSingleStep(25000);
    bsuSavingsSpinbox->setRange(0, 15000000);

    // adding the bsu-savings ui elements to a QHBoxLayout
    // that will represent one row of the calculator
    QHBoxLayout *bsuSavingsRowLayout = new QHBoxLayout;
    bsuSavingsRowLayout->addWidget(bsuSavingsLabel);
    bsuSavingsRowLayout->addStretch();
    bsuSavingsRowLayout->addWidget(bsuSavingsSpinbox);

    // ui elements for labor-union-fee row
    laborUnionFeeLabel = new QLabel(tr("Labor union fee:"));
    laborUnionFeeSpinbox = new QSpinBox;
    laborUnionFeeSpinbox->setSingleStep(25000);
    laborUnionFeeSpinbox->setRange(0, 15000000);

    // adding the labor-union-fee ui elements to a QHBoxLayout
    // that will represent one row of the calculator
    QHBoxLayout *laborUnionFeeRowLayout = new QHBoxLayout;
    laborUnionFeeRowLayout->addWidget(laborUnionFeeLabel);
    laborUnionFeeRowLayout->addStretch();
    laborUnionFeeRowLayout->addWidget(laborUnionFeeSpinbox);

    // ui elements for net-fortune row
    netFortuneLabel = new QLabel(tr("Net fortune:"));
    netFortuneSpinbox = new QSpinBox;
    netFortuneSpinbox->setSingleStep(25000);
    netFortuneSpinbox->setRange(0, 15000000);

    // adding the net-fortune ui elements to a QHBoxLayout
    // that will represent one row of the calculator
    QHBoxLayout *netFortuneRowLayout = new QHBoxLayout;
    netFortuneRowLayout->addWidget(netFortuneLabel);
    netFortuneRowLayout->addStretch();
    netFortuneRowLayout->addWidget(netFortuneSpinbox);

    // adding each of the row layouts to the cell layout
    QVBoxLayout *cellLayout = new QVBoxLayout;
    cellLayout->addLayout(incomeRowLayout);
    cellLayout->addLayout(capitalRowLayout);
    cellLayout->addLayout(commuteRowLayout);
    cellLayout->addLayout(interestPaidRowLayout);
    cellLayout->addLayout(bsuSavingsRowLayout);
    cellLayout->addLayout(laborUnionFeeRowLayout);
    cellLayout->addLayout(netFortuneRowLayout);

    // main layout
    QHBoxLayout *mainLayout = new QHBoxLayout;
    mainLayout->addLayout(cellLayout);
    setLayout(mainLayout);

    // knapp som setter igang utregning av skatt

    // data samles i en struct eller et objekt
    TaxInformation taxInformation;
    taxInformation.income = incomeSpinbox->value();
    taxInformation.bsuSavings = bsuSavingsSpinbox->value();
    taxInformation.capital = capitalSpinbox->value();
    taxInformation.commute = commuteSpinbox->value();
    taxInformation.income = incomeSpinbox->value();
    taxInformation.interestsPaid = interestPaidSpinbox->value();
    taxInformation.laborUnionFee = laborUnionFeeSpinbox->value();
    taxInformation.netFortune = netFortuneSpinbox->value();



    // data sendes som en referanse til et regneobjekt
    // regneobjektet brukes til å vise skatt


    setWindowTitle(tr("Personal Tax Calculator"));
}

TaxCalculator::~TaxCalculator()
{

}
