#include "headers/circle.h"

Circle::Circle(float input_x, float input_y, float input_radius) :Point(input_x, input_y) {
    radius = input_radius;
}

ostream& operator<<(ostream& os, const Circle& circle) {
    os << "x = " << circle.x << ", y = " << circle.y << ", radius = " << circle.radius;
    return os;
}