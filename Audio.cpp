#include "publication.h"
#include <string>
#include <iostream>
using namespace std;

class Audio :public Publication {
private:

public:
    float MB;
    int minutes;
    Audio(string* input_title, int input_price, float input_MB, int input_minutes) :Publication(input_title, input_price) {
        MB = input_MB;
        minutes = input_minutes;
    }
};

int main() {
    string title = (string)"oui";
    Audio audio = Audio(&title, 10, 1.2, 20);
    cout << audio.MB;
}