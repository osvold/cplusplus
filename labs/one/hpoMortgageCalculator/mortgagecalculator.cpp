#include "mortgagecalculator.h"

#include <QHBoxLayout>
#include <QSpacerItem>
#include "monthlycost.h"

/**
 * @brief MortgageCalculator::MortgageCalculator
 * @param parent
 */
MortgageCalculator::MortgageCalculator(QWidget *parent)
    : QWidget(parent)
{
    // ui elements for mortgage row
    mortgageLabel = new QLabel(tr("Required loan amount: "));
    mortgageSpinbox = new QSpinBox;
    mortgageSlider = new QSlider(Qt::Horizontal);
    mortgageSpinbox->setSingleStep(25000);
    mortgageSpinbox->setRange(0, 15000000);
    mortgageSlider->setRange(0, 15000000);

    // connecting together slider and spinbox
    QObject::connect(mortgageSpinbox, SIGNAL(valueChanged(int)),
                     mortgageSlider, SLOT(setValue(int)));
    QObject::connect(mortgageSlider, SIGNAL(valueChanged(int)),
                     mortgageSpinbox, SLOT(setValue(int)));
    mortgageSpinbox->setValue(2000000);

    // adding the mortgage ui elements to a QHBoxLayout
    // that will represent one row of the calculator
    QHBoxLayout *mortgageRowLayout = new QHBoxLayout;
    mortgageRowLayout->addWidget(mortgageLabel);
    mortgageRowLayout->addStretch();
    mortgageRowLayout->addWidget(mortgageSlider);
    mortgageRowLayout->addWidget(mortgageSpinbox);

    // ui elements for the years row
    yearsLabel = new QLabel(tr("Number of mortgage years:"));
    yearsSpinbox = new QSpinBox;
    yearsSlider = new QSlider(Qt::Horizontal);
    yearsSpinbox->setRange(1, 30);
    yearsSlider->setRange(1, 30);

    // connecting the ui elements together
    QObject::connect(yearsSpinbox, SIGNAL(valueChanged(int)),
                     yearsSlider, SLOT(setValue(int)));
    QObject::connect(yearsSlider, SIGNAL(valueChanged(int)),
                     yearsSpinbox, SLOT(setValue(int)));
    yearsSlider->setValue(20);

    QHBoxLayout *yearsRowLayout = new QHBoxLayout;
    yearsRowLayout->addWidget(yearsLabel);
    yearsRowLayout->addStretch();
    yearsRowLayout->addWidget(yearsSlider);
    yearsRowLayout->addWidget(yearsSpinbox);

    interestLabel = new QLabel(tr("Interest rate:"));
    interestSpinbox = new QDoubleSpinBox;
    interestSpinbox->setRange(0.0, 25.0);
    interestSpinbox->setValue(3.0);

    QHBoxLayout *interestRowLayout = new QHBoxLayout;
    interestRowLayout->addWidget(interestLabel);
    interestRowLayout->addStretch();
    interestRowLayout->addWidget(interestSpinbox);

    termAmountLabel = new QLabel(tr("Monthly Cost: "));

    termLine = new QLineEdit;
    termLine->setEnabled(false);
    termLine->insert(QString::number(monthtlycost(mortgageSpinbox->value(),
                                                 interestSpinbox->value() / (12*100),
                                                 yearsSpinbox->value() * 12)));

    // connecting the each actions to the on_Change class who will utilize the monthlycost.cpp
    // for calculating the amount to pay each term and then set the termAmount value equal this.
    QObject::connect(mortgageSpinbox, SIGNAL(valueChanged(int)),
                        this, SLOT(on_Change()));
    QObject::connect(yearsSpinbox, SIGNAL(valueChanged(int)),
                        this, SLOT(on_Change()));
    QObject::connect(interestSpinbox, SIGNAL(valueChanged(double)),
                        this, SLOT(on_Change()));

    QHBoxLayout *amountLayout = new QHBoxLayout;
    amountLayout->addWidget(termAmountLabel);
    amountLayout->addStretch();
    amountLayout->addWidget(termLine);

    QVBoxLayout *cellLayout = new QVBoxLayout;
    cellLayout->addLayout(mortgageRowLayout);
    cellLayout->addLayout(yearsRowLayout);
    cellLayout->addLayout(interestRowLayout);
    cellLayout->addLayout(amountLayout);

    // main layout
    QHBoxLayout *mainLayout = new QHBoxLayout;
    mainLayout->addLayout(cellLayout);
    setLayout(mainLayout);

    setWindowTitle(tr("My Mortgage Calculator"));
}

/**
 * @brief MortgageCalculator::on_Change
 */
void MortgageCalculator::on_Change(){
    // calculate monthly amount to pay
    double cost = monthtlycost(mortgageSpinbox->value(),
                              interestSpinbox->value() / (12*100), yearsSpinbox->value() * 12);
    const QString result = QString::number(cost);
    if(result != termLine->text())
        termLine->setText(result);
}

/**
 * @brief MortgageCalculator::~MortgageCalculator
 */
MortgageCalculator::~MortgageCalculator()
{

}
