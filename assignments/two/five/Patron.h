//
// Created by hans on 22/03/2018.
//
#ifndef FIVE_PATRON_H
#define FIVE_PATRON_H

#include "std_lib_facilities.h"

class Patron {
public:
    Patron(string name, int library_card_number, double library_fees);
    ~Patron();

    string GetName() const;
    int GetLibraryCardNumber() const;
    double GetLibraryFees() const;
    void SetLibraryFee(double library_fee);
    bool HasUnpaidLibraryFee()const;

private:
    string name;
    int library_card_number;
    double library_fees;
};


#endif //FIVE_PATRON_H
