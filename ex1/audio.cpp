#include "headers/audio.h"

Audio::Audio(string* input_title, int input_price, float input_sales_last_3_months[3], float input_MB, int input_minutes) :Publication(input_title, input_price), Sales(input_sales_last_3_months) {
    MB = input_MB;
    minutes = input_minutes;
}

Audio::Audio(const Audio& audio) :Publication(audio), Sales(audio) {
    MB = audio.MB;
    minutes = audio.minutes;
}

Audio& Audio::operator=(const Audio& audio) {
    return *this;
}

ostream& operator<<(ostream& os, const Audio& audio) {
    os << *(audio.title) << " costs " << audio.price << " $ and weigth " << audio.MB << " MB for a duration of " << audio.minutes << " minutes. Here are the sales over the last 3 months ";
    for (int i = 0; i < 3; i++) {
        os << audio.sales_last_3_months[i] << ", ";
    }
    os << "\n";
    return os;
}
