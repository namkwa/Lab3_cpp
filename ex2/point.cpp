#include "headers/point.h"

Point::Point(float input_x, float input_y) {
    x = input_x;
    y = input_y;
}

ostream& operator<<(ostream& os, const Point& point) {
    os << "x = " << point.x << ", y = " << point.y;
    return os;
}