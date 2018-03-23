#include <iostream>
#include "Book.h"
#include "Patron.h"
#include "Library.h"

vector<Book> test_books();
vector<Patron> test_patrons();
void test_library();

int main() {
    test_library();
    return 0;
}

void test_library() {
    vector<Book> books = test_books();
    vector<Patron> patrons = test_patrons();

    Library library;

    for(auto const& book: books) {
        library.AddBook(book);
    }

    Patron patron1 = patrons.at(0);
    Patron patron2 = patrons.at(1);

    cout << "Patron1: " << patron1.GetName() << endl;
    cout << "Patron2: " << patron2.GetName() << endl;

    for(auto const& patron: patrons) {
        library.AddPatron(patron);
    }

    vector<string> bookISBNS;
    bookISBNS.push_back("0-13-235088-2");
    bookISBNS.push_back("0-13-708107-3");
    bookISBNS.push_back("0-13-449416-4");

    for(auto const& patron: patrons) {
        for(auto const& book: bookISBNS) {
            try {
                auto transaction = library.ApplyToLoanBook(patron.GetLibraryCardNumber(), book, Chrono::Date(2018, Chrono::Date::mar, 23));

                std::cout << "Transaction=["
                          << "Book.ISBN="
                          << transaction.book.GetISBN()
                          << ", Patron.LibraryCardNumber="
                          << transaction.patron.GetLibraryCardNumber()
                          << ", Date="
                          << transaction.date
                          << endl;

            }
            catch (runtime_error e) {
                cout << "Error: " << e.what() << endl;
            }
        }
    }

    vector<string> namesOfPatronsWithUnpaidFees = library.GetNamesOfPatronsWithUnpaidFees();
    cout << "Names of Patrons with Unpaid Fees: ";
    for(auto const& name : namesOfPatronsWithUnpaidFees) {
        cout << name << ' ';
    }
    cout << endl;

}

vector<Book> test_books() {
    Book book1("Clean Code", "0-13-235088-2", "Robert C. Martin", GenreEnum::NonFiction, Chrono::Date(2014, Chrono::Date::jan, 01));
    Book book2("Clean Coder", "0-13-708107-3", "Robert C. Martin", GenreEnum::Children, Chrono::Date(2016, Chrono::Date::jan, 01));
    Book book3("Clean Architecture", "0-13-449416-4", "Robert C. Martin", GenreEnum::Fiction, Chrono::Date(2018, Chrono::Date::jan, 01));
    Book book4("Clean Architecture", "0-13-449416-4", "Robert C. Martin", GenreEnum::Fiction, Chrono::Date(2018, Chrono::Date::jan, 01));

    vector<Book> books;
    books.push_back(book1);
    books.push_back(book2);
    books.push_back(book3);
    books.push_back(book4);

    for(auto const& book: books) {
        cout << "Book=["
             << "Title= "
             << book.GetTitle()
             << ", ISBN="
             << book.GetISBN()
             << ", Author="
             << book.GetAuthor()
             << ", Genre="
             << book.GetGenre()
             << ", CopyRightDate="
             << book.GetCopyRightDate()
             << "]"
             << endl;
    }

    if(book1 == book2) {
        cout << book1.GetISBN() << " == " << book2.GetISBN() << endl;
    } else {
        cout << book1.GetISBN() << " != " << book2.GetISBN() << endl;
    }

    Book book5("Clean Code", "0-13-235088-2", "Robert C. Martin", GenreEnum::NonFiction, Chrono::Date(2014, Chrono::Date::jan, 01));

    if(book1 == book5) {
        cout << book1.GetISBN() << " == " << book5.GetISBN() << endl;
    } else {
        cout << book1.GetISBN() << " != " << book5.GetISBN() << endl;
    }


    if(book1 != book2) {
        cout << book1.GetISBN() << " != " << book2.GetISBN() << endl;
    } else {
        cout << book1.GetISBN() << " == " << book2.GetISBN() << endl;
    }

    if(book1 != book5) {
        cout << book1.GetISBN() << " != " << book5.GetISBN() << endl;
    } else {
        cout << book1.GetISBN() << " == " << book5.GetISBN() << endl;
    }

    return books;
}

vector<Patron> test_patrons() {
    Patron patron1("Ola Nordmann", 0101010101, 0.0);
    Patron patron2("Kari Nordmann", 0101010102, 8.0);
    Patron patron3("Petter Nortug", 0101010103, 100.0);
    Patron patron4("Kari Traa", 0101010104, 0.0);

    vector<Patron> patrons;
    patrons.push_back(patron1);
    patrons.push_back(patron2);
    patrons.push_back(patron3);
    patrons.push_back(patron4);

    for(auto const& patron: patrons) {
        cout << "Patron= ["
             << "Name="
             << patron.GetName()
             << ", Library Card Number="
             << patron.GetLibraryCardNumber();

        if(patron.HasUnpaidLibraryFee()) {
            cout << ", Unpaid Library Fee="
                 << patron.GetLibraryFees();
        }

        cout << "]" << endl;
    }

    return patrons;
}