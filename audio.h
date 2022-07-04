#ifndef AUDIO_H
#define AUDIO_H 
#include "publication.h"

class Audio :public Publication {
public:
    float MB;
    int minutes;
    Audio(string* input_title, int input_price, float input_MB, int input_minutes);
    Audio(const Audio& audio);
    Audio& Audio::operator=(const Audio& audio);
    ~Audio() {};
    friend ostream& Audio::operator<<(ostream& os, const Audio& audio);
};

#endif