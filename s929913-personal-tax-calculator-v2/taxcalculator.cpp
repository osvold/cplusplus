/**
 * Written by Hans Petter Osvold, s929913@stud.hioa.no
 * Assignment 1 in C++ course
 *
 * This class is the glue together the UI of the calculator.
 * It utilize a TaxInformation struct to send data from UI to
 * the TaxCalculation class - which takes care of all the data
 * crunching.
 */

#include <iostream>
#include <QHBoxLayout>
#include <QSpacerItem>

#include "taxcalculator.h"
#include "ui_taxcalculator.h"
using namespace std;

TaxCalculator::TaxCalculator(QWidget *parent) :
    QWidget(parent)
{

    // ui elements for income row
    incomeLabel = new QLabel(tr("Din brutto årslønn"));
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
    capitalLabel = new QLabel(tr("Kapitalintekter"));
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
    commuteLabel = new QLabel(tr("Avstand til arbeidssted, en vei"));
    commuteSpinbox = new QSpinBox;
    commuteSpinbox->setSingleStep(10);
    commuteSpinbox->setRange(0, 1000);

    // adding the travel ui elements to a QHBoxLayout
    // that will represent one row of the calculator
    QHBoxLayout *commuteRowLayout = new QHBoxLayout;
    commuteRowLayout->addWidget(commuteLabel);
    commuteRowLayout->addStretch();
    commuteRowLayout->addWidget(commuteSpinbox);

    // ui elements for interest-paid row
    interestPaidLabel = new QLabel(tr("Renter/kapitalkostnader"));
    interestPaidSpinbox = new QSpinBox;
    interestPaidSpinbox->setSingleStep(2500);
    interestPaidSpinbox->setRange(0, 15000000);

    // adding the interest-paid ui elements to a QHBoxLayout
    // that will represent one row of the calculator
    QHBoxLayout *interestPaidRowLayout = new QHBoxLayout;
    interestPaidRowLayout->addWidget(interestPaidLabel);
    interestPaidRowLayout->addStretch();
    interestPaidRowLayout->addWidget(interestPaidSpinbox);

    // ui elements for bsu-savings row
    bsuSavingsLabel = new QLabel(tr("Sparing i BSU:"));
    bsuSavingsSpinbox = new QSpinBox;
    bsuSavingsSpinbox->setSingleStep(2500);
    bsuSavingsSpinbox->setRange(0, 15000000);

    // adding the bsu-savings ui elements to a QHBoxLayout
    // that will represent one row of the calculator
    QHBoxLayout *bsuSavingsRowLayout = new QHBoxLayout;
    bsuSavingsRowLayout->addWidget(bsuSavingsLabel);
    bsuSavingsRowLayout->addStretch();
    bsuSavingsRowLayout->addWidget(bsuSavingsSpinbox);

    // ui elements for labor-union-fee row
    laborUnionFeeLabel = new QLabel(tr("Fagforeningskontigent"));
    laborUnionFeeSpinbox = new QSpinBox;
    laborUnionFeeSpinbox->setSingleStep(1000);
    laborUnionFeeSpinbox->setRange(0, 15000000);

    // adding the labor-union-fee ui elements to a QHBoxLayout
    // that will represent one row of the calculator
    QHBoxLayout *laborUnionFeeRowLayout = new QHBoxLayout;
    laborUnionFeeRowLayout->addWidget(laborUnionFeeLabel);
    laborUnionFeeRowLayout->addStretch();
    laborUnionFeeRowLayout->addWidget(laborUnionFeeSpinbox);

    // ui elements for net-fortune row
    netFortuneLabel = new QLabel(tr("Samlet nettoformue"));
    netFortuneSpinbox = new QSpinBox;
    netFortuneSpinbox->setSingleStep(25000);
    netFortuneSpinbox->setRange(0, 150000000);

    // adding the net-fortune ui elements to a QHBoxLayout
    // that will represent one row of the calculator
    QHBoxLayout *netFortuneRowLayout = new QHBoxLayout;
    netFortuneRowLayout->addWidget(netFortuneLabel);
    netFortuneRowLayout->addStretch();
    netFortuneRowLayout->addWidget(netFortuneSpinbox);

    // button that will start the tax calculation
    QPushButton *submitBtn = new QPushButton("&Beregn!", this);
    QHBoxLayout *submitBtnRowLayout = new QHBoxLayout;
    submitBtnRowLayout->addWidget(submitBtn);

    connect(submitBtn, SIGNAL (clicked()), this, SLOT (handleButton()));

    topTaxLabel = new QLabel(tr("Toppskatt/trinnskatt"));
    topTaxLine = new QLineEdit();
    topTaxLine->setEnabled(false);
    topTaxLine->insert("-");
    QHBoxLayout *topTaxRowLayout = new QHBoxLayout;
    topTaxRowLayout->addWidget(topTaxLabel);
    topTaxRowLayout->addStretch();
    topTaxRowLayout->addWidget(topTaxLine);

    socialTaxLabel = new QLabel(tr("Trygdeavgift"));
    socialTaxLine = new QLineEdit();
    socialTaxLine->setEnabled(false);
    socialTaxLine->insert("-");
    QHBoxLayout *socialTaxRowLayout = new QHBoxLayout;
    socialTaxRowLayout->addWidget(socialTaxLabel);
    socialTaxRowLayout->addStretch();
    socialTaxRowLayout->addWidget(socialTaxLine);

    generalTaxLabel = new QLabel(tr("Fellesskatt"));
    generalTaxLine = new QLineEdit();
    generalTaxLine->setEnabled(false);
    generalTaxLine->insert("-");
    QHBoxLayout *generalTaxRowLayout = new QHBoxLayout;
    generalTaxRowLayout->addWidget(generalTaxLabel);
    generalTaxRowLayout->addStretch();
    generalTaxRowLayout->addWidget(generalTaxLine);

    fortuneTaxLabel = new QLabel(tr("Formueskatt"));
    fortuneTaxLine = new QLineEdit();
    fortuneTaxLine->setEnabled(false);
    fortuneTaxLine->insert("-");
    QHBoxLayout *fortuneTaxRowLayout = new QHBoxLayout;
    fortuneTaxRowLayout->addWidget(fortuneTaxLabel);
    fortuneTaxRowLayout->addStretch();
    fortuneTaxRowLayout->addWidget(fortuneTaxLine);

    sumTaxLabel = new QLabel(tr("Sum skatt"));
    sumTaxLine = new QLineEdit();
    sumTaxLine->setEnabled(false);
    sumTaxLine->insert("-");
    QHBoxLayout *sumTaxRowLayout = new QHBoxLayout;
    sumTaxRowLayout->addWidget(sumTaxLabel);
    sumTaxRowLayout->addStretch();
    sumTaxRowLayout->addWidget(sumTaxLine);

    // adding each of the row layouts to the cell layout
    QVBoxLayout *cellLayout = new QVBoxLayout;
    cellLayout->addLayout(incomeRowLayout);
    cellLayout->addLayout(capitalRowLayout);
    cellLayout->addLayout(commuteRowLayout);
    cellLayout->addLayout(interestPaidRowLayout);
    cellLayout->addLayout(bsuSavingsRowLayout);
    cellLayout->addLayout(laborUnionFeeRowLayout);
    cellLayout->addLayout(netFortuneRowLayout);
    cellLayout->addLayout(submitBtnRowLayout);
    cellLayout->addLayout(topTaxRowLayout);
    cellLayout->addLayout(socialTaxRowLayout);
    cellLayout->addLayout(generalTaxRowLayout);
    cellLayout->addLayout(fortuneTaxRowLayout);
    cellLayout->addLayout(sumTaxRowLayout);

    // main layout
    QHBoxLayout *mainLayout = new QHBoxLayout;
    mainLayout->addLayout(cellLayout);
    setLayout(mainLayout);

    setWindowTitle(tr("Skattekalkulator 2018"));
}

TaxCalculator::~TaxCalculator()
{

}

void TaxCalculator::handleButton() {
    // data samles i en struct eller et objekt
    TaxInformation taxInformation;
    taxInformation.income = incomeSpinbox->value();
    taxInformation.bsuSavings = bsuSavingsSpinbox->value();
    taxInformation.capital = capitalSpinbox->value();
    taxInformation.commute = commuteSpinbox->value();
    taxInformation.interestsPaid = interestPaidSpinbox->value();
    taxInformation.laborUnionFee = laborUnionFeeSpinbox->value();
    taxInformation.netFortune = netFortuneSpinbox->value();

    cout << "Income: " << taxInformation.income << endl;
    cout << "Capital: " << taxInformation.capital << endl;
    cout << "BSU: " << taxInformation.bsuSavings << endl;
    cout << "Commute: " << taxInformation.commute << endl;
    cout << "Interests paid: " << taxInformation.interestsPaid << endl;
    cout << "Labor Union fee: " << taxInformation.laborUnionFee << endl;
    cout << "Net fortune: " << taxInformation.netFortune << endl;

    // data sendes som en referanse til et regneobjekt
    // regneobjektet brukes til å vise skatt

    TaxCalculation *calculation = new TaxCalculation(taxInformation);
    cout << "Toptax: " << calculation->top_tax() << endl;
    cout << "Fortune tax: " << calculation->fortune_tax() << endl;
    cout << "General tax: " << calculation->general_tax() << endl;
    cout << "Social tax: " << calculation->social_tax() << endl;
    cout << "Sum taxes: " << calculation->sum_taxes() << endl;

    topTaxLine->setText(QString::number(calculation->top_tax()));
    fortuneTaxLine->setText(QString::number(calculation->fortune_tax()));
    generalTaxLine->setText(QString::number(calculation->general_tax()));
    socialTaxLine->setText(QString::number(calculation->social_tax()));
    sumTaxLine->setText(QString::number(calculation->sum_taxes()));
}
