#ifndef AUDIO_H
#define AUDIO_H 
#include "publication.h"
#include "sales.h"

class Audio :public Publication, public Sales {
public:
    float MB;
    int minutes;
    Audio(string* input_title, int input_price, float* input_sales_last_3_months, float input_MB, int input_minutes);
    Audio(const Audio& audio);
    Audio& operator=(const Audio& audio);
    ~Audio() {};
    friend ostream& operator<<(ostream& os, const Audio& audio);
};

#endif