#include "book.h"

Book::Book(string* input_title, int input_price, int input_page_count) :Publication(input_title, input_price) {
    page_count = input_page_count;
};

Book::Book(const Book& book) :Publication(book) {
    page_count = book.page_count;
}

Book& Book::operator=(const Book& book) {
    return *this;
}

ostream& operator<<(ostream& os, const Book& book) {
    os << book.title << " costs " << book.price << " $ and has " << book.page_count << "pages";
    return os;
}