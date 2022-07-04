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
    Publication(const Publication& publication);
    Publication& Publication::operator=(const Publication& publication);
    ~Publication();
    friend ostream& Publication::operator<<(ostream& os, const Publication& publication);
};

#endif