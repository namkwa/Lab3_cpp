#include "publication.h"

Publication::Publication(string* input_title, int input_price) {
    title = new string;
    *title = *input_title;
    price = input_price;
}

Publication::Publication(const Publication& publication) {
    title = new string;
    *title = *(publication.title);
    price = publication.price;
}

Publication& Publication::operator=(const Publication& publication) {
    return *this;
}

Publication::~Publication() {
    delete title;
}

ostream& operator<<(ostream& os, const Publication& publication) {
    os << *(publication.title) << " costs " << publication.price << " $\n";
    return os;
}