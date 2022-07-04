#include "audio.h"

Audio::Audio(string* input_title, int input_price, float input_MB, int input_minutes) :Publication(input_title, input_price) {
    MB = input_MB;
    minutes = input_minutes;
}

Audio::Audio(const Audio& audio) :Publication(audio) {
    MB = audio.MB;
    minutes = audio.minutes;
}

Audio& Audio::operator=(const Audio& audio) {
    return *this;
}

ostream& operator<<(ostream& os, const Audio& audio) {
    os << audio.title << " costs " << audio.price << " $ and weigth " << audio.MB << " MB for a duration of " << audio.minutes;
    return os;
}
