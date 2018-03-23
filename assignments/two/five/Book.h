//
// Created by hans on 22/03/2018.
//
#pragma once

#include <string>
#include "GenreEnum.cpp"
#include "Chrono.h"

#ifndef FIVE_BOOK_H
#define FIVE_BOOK_H
using namespace std;

class Book {
public:
    Book(string title, string isbn, string author, GenreEnum genre, Chrono::Date copy_right_date);
    Book(const Book& copy_from);
    bool operator==(const Book &bookB) const;
    bool operator!=(const Book &bookB) const;
    ~Book();

    const string GetISBN()const;
    const string GetTitle()const;
    const string GetAuthor()const;
    const string GetGenre()const;
    Chrono::Date GetCopyRightDate()const;

private:
    string isbn;
    string title;
    string author;
    GenreEnum genre;
    Chrono::Date copy_right_date;
};


#endif //FIVE_BOOK_H
