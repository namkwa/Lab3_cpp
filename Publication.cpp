#include <string>
#include <iostream>
using namespace std;

class Publication {
public:
    string* title;
    int price;
    Publication(string* input_title, int input_price) {
        title = input_title;
        price = input_price;
    }
};


