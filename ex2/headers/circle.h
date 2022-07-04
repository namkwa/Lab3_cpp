#ifndef CIRCLE_H
#define CIRCLE_H
#include "point.h"
class Circle :public Point {
public:
    float radius;
    Circle(float input_x, float input_y, float input_radius);
    friend ostream& operator<<(ostream& os, const Circle& circle);
};

#endif