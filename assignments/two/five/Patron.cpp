//
// Created by hans on 22/03/2018.
//

#include "Patron.h"

Patron::Patron(string name, int library_card_number, double library_fees) {
    this->name = std::move(name);
    this->library_card_number = library_card_number;
    this->library_fees = library_fees;
}

Patron::~Patron() {
    this->name.clear();
}
string Patron::GetName() const {
    return this->name;
}
int Patron::GetLibraryCardNumber() const {
    return this->library_card_number;
}

double Patron::GetLibraryFees() const {
    return this->library_fees;
}

void Patron::SetLibraryFee(double library_fee) {
    this->library_fees = library_fee;
}

bool Patron::HasUnpaidLibraryFee()const {
    return this->library_fees != 0;
}