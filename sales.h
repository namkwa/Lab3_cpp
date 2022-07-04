#ifndef SALES_H
#define SALES_H
#include <iostream>
#include <string>
using namespace std;
class Sales {
public:
    float sales_last_3_months[3];
    Sales(float sales_last_3_months[3]);
    Sales(const Sales& sales);
    Sales& Sales::operator=(const Sales& sales);
    ~Sales() {};
    friend ostream& Sales::operator<<(ostream& os, const Sales& sales);
};

#endif