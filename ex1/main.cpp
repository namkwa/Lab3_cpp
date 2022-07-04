#include "book.h"
#include "audio.h"

int main() {
    string book_title = "book title";
    string audio_title = "audio title";
    float sales_book[3] = { 15085.3,20000.5,45165.6 };
    float sales_audio[3] = { 18560.3,39423.5,45165.6 };
    Book book = Book(&book_title, 12, sales_book, 500);
    Audio audio = Audio(&audio_title, 12, sales_audio, 50.2, 5);
    Audio audio_copy = Audio(audio);
    cout << book;
    return 0;
}
