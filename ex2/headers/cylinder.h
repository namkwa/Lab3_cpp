#ifndef CYLINDER_H
#define CYLINDER_H
#include "circle.h"

class Cylinder :public Circle {
    float heigth;
public:
    Cylinder(float input_x, float input_y, float input_radius, float input_height);
    float GetVolume() const;
    float GetSurface() const;
    friend ostream& operator<<(ostream& os, const Cylinder& cylinder);
};

#endif