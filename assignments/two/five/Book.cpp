//
// Created by hans on 22/03/2018.
//

#include "Book.h"

Book::Book(string title, string isbn, string author, GenreEnum genre, Chrono::Date copy_right_date) {
    this->title = std::move(title);
    this->isbn = std::move(isbn);
    this->author = std::move(author);
    this->genre = genre;
    this->copy_right_date = copy_right_date;
}

Book::Book(const Book &copy_from) {
    title = copy_from.title;
    isbn = copy_from.isbn;
    author = copy_from.author;
    genre = copy_from.genre;
    copy_right_date = copy_from.copy_right_date;
}

bool Book::operator ==(const Book &bookB) const {
    return isbn == bookB.isbn;
}

bool Book::operator !=(const Book &bookB) const {
    return isbn != bookB.isbn;
}

Book::~Book() {
    title.clear();
    isbn.clear();
    author.clear();
}

const String Book::GetTitle() const {
    return title;
}

const String Book::GetISBN()const {
    return isbn;
}

const String Book::GetAuthor()const {
    return author;
}

const String Book::GetGenre() const {
    switch(genre) {
        case GenreEnum::Fiction: return "Fiction";
        case GenreEnum::NonFiction: return "Non Fiction";
        case GenreEnum::Periodical: return "Periodical";
        case GenreEnum::Biography: return "Biography";
        case GenreEnum::Children: return "Children";
    }
}

Chrono::Date Book::GetCopyRightDate()const {
    return copy_right_date;
}