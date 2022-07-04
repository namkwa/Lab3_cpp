#include "book.h"
#include "audio.h"

int main() {
    string title = "spiderwick";
    float sales_spiderwick[3] = { 15006.3,20000.5,45165.6 };
    Book book = Book(&title, 12, sales_spiderwick, 500);
    cout << book;
    book.~Book();
    return 0;
}
