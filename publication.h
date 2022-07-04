#ifndef PUBLICATION_H
#define PUBLICATION_H

#include <string>
#include <iostream>
using namespace std;

class Publication {
public:
    string* title;
    int price;
    Publication(string* title, int price);
};

#endif