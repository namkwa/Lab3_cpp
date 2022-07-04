#ifndef BOOK_H
#define BOOK_H
#include "publication.h"
#include "sales.h"

class Book :public Publication, public Sales {
public:
    int page_count;
    Book(string* input_title, int input_price, float input_sales_last_3_months[3], int input_page_count);
    Book(const Book& book);
    Book& operator=(const Book& book);
    ~Book() {};
    friend ostream& operator<<(ostream& os, const Book& book);
};

#endif