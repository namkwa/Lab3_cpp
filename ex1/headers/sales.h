#ifndef SALES_H
#define SALES_H
#include <iostream>
#include <string>
using namespace std;
class Sales {
public:
    float** sales_last_3_months;
    Sales(float* sales_last_3_months);
    Sales(const Sales& sales);
    Sales& operator=(const Sales& sales);
    ~Sales();
    friend ostream& operator<<(ostream& os, const Sales& sales);
};

#endif