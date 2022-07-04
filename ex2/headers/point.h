#ifndef POINT_H
#define POINT_H
#define _USE_MATH_DEFINES

#include <math.h>
#include <iostream>
using namespace std;

class Point {
public:
    float x, y;
    Point(float input_x, float input_y);
    friend ostream& operator<<(ostream& os, const Point& point);
};

#endif