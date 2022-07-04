#ifndef BOOK_H
#define BOOK_H
#include "publication.h"

class Book :public Publication {
public:
    int page_count;
    Book(string* input_title, int input_price, int input_page_count);
    Book(const Book& book);
    Book& Book::operator=(const Book& book);
    ~Book() {};
    friend ostream& Book::operator<<(ostream& os, const Book& book);
};

#endif