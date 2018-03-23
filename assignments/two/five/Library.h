//
// Created by hans on 22/03/2018.
//
#ifndef FIVE_LIBRARY_H
#define FIVE_LIBRARY_H

#include "Patron.h"
#include "Book.h"

struct Transaction {
    Book book;
    Patron patron;
    Chrono::Date date;
};

class Library {
public:
    Library();
    ~Library();
    void AddBook(Book book);
    void AddPatron(Patron patron);
    Transaction ApplyToLoanBook(int library_card_number, string isbn, Chrono::Date date);
    vector<string> GetNamesOfPatronsWithUnpaidFees();
private:
    vector<Patron> patrons;
    vector<Book> books;
    vector<Transaction> transactions;
    Transaction MakeTransaction(Patron patron, Book book, Chrono::Date date);
    bool HasBookWithISBN(string isbn);
    Book CheckoutBook(string isbn);
    bool HasPatronWithLibraryCardNumber(int library_card_number);
    Patron GetPatronByLibraryCardNumber(int library_card_number);
};


#endif //FIVE_LIBRARY_H
