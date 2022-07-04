#include "headers/book.h"

Book::Book(string* input_title, int input_price, float input_sales_last_3_months[3], int input_page_count) :Publication(input_title, input_price), Sales(input_sales_last_3_months) {
    page_count = input_page_count;
};

Book::Book(const Book& book) :Publication(book), Sales(book) {
    page_count = book.page_count;
}

Book& Book::operator=(const Book& book) {
    return *this;
}

ostream& operator<<(ostream& os, const Book& book) {
    os << *(book.title) << " costs " << book.price << " $ and has " << book.page_count << " pages. Here are the sales over the last 3 months ";
    for (int i = 0; i < 3; i++) {
        os << book.sales_last_3_months[i] << ", ";
    }
    os << "\n";
    return os;
}