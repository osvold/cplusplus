//
// Created by hans on 22/03/2018.
//

#include "Library.h"

Library::Library() = default;
Library::~Library() = default;

void Library::AddBook(Book book) {
    this->books.push_back(book);
}

void Library::AddPatron(Patron patron) {
    this->patrons.push_back(patron);
}

Book Library::CheckoutBook(string isbn) {

    auto it = find_if(
            this->books.begin(),
            this->books.end(),
            [&isbn] (const Book& obj) { return obj.GetISBN() == isbn; }
    );

    auto index = std::distance(this->books.begin(), it);
    Book book = this->books.at(index);
    this->books.erase(it);
    return book;
}

bool Library::HasBookWithISBN(string isbn) {

    auto it = find_if(
            this->books.begin(),
            this->books.end(),
            [&isbn] (const Book& obj) { return obj.GetISBN() == isbn; }
    );

    return it != this->books.end();
}

Transaction Library::ApplyToLoanBook(int library_card_number, string isbn, Chrono::Date date) {
    if(!HasPatronWithLibraryCardNumber(library_card_number)) {
        throw runtime_error("Did not find Patron with Library Card Number = " + library_card_number);
    }

    Patron patron = GetPatronByLibraryCardNumber(library_card_number);

    if(patron.HasUnpaidLibraryFee()) {
        throw runtime_error("Patron has unpaid library fees!");
    }

    if(!HasBookWithISBN(isbn)) {
        throw runtime_error("Did not find Book with ISBN=" + isbn);
    }

    return MakeTransaction(patron, CheckoutBook(isbn), date);
}

bool Library::HasPatronWithLibraryCardNumber(int library_card_number) {
    auto it = find_if(
            this->patrons.begin(),
            this->patrons.end(),
            [&library_card_number] (const Patron& obj) { return obj.GetLibraryCardNumber() == library_card_number; }
    );

    return it != this->patrons.end();
}

Patron Library::GetPatronByLibraryCardNumber(int library_card_number) {
        auto it = find_if(
                this->patrons.begin(),
                this->patrons.end(),
                [&library_card_number] (const Patron& obj) { return obj.GetLibraryCardNumber() == library_card_number; }
        );

        auto index = std::distance(this->patrons.begin(), it);

        return this->patrons.at(index);
}

Transaction Library::MakeTransaction(Patron patron, Book book, Chrono::Date date) {
    Transaction transaction = { book, patron, date};
    this->transactions.push_back(transaction);
    return transaction;
}

vector<string> Library::GetNamesOfPatronsWithUnpaidFees() {
    vector<string> patrons_with_unpaid_fees;
    for(auto const& patron: this->patrons) {
        if(patron.HasUnpaidLibraryFee()) {
            patrons_with_unpaid_fees.push_back(patron.GetName());
        }
    }

    return patrons_with_unpaid_fees;
}