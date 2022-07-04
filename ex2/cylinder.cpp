#include "headers/cylinder.h"

Cylinder::Cylinder(float input_x, float input_y, float input_radius, float input_height) :Circle(input_x, input_y, input_radius) {
    heigth = input_height;
}

float Cylinder::GetVolume() const {
    return M_PI * pow(radius, 2) * heigth;
}
float Cylinder::GetSurface() const {
    return M_PI * radius * heigth;
}

ostream& operator<<(ostream& os, const Cylinder& cylinder) {
    os << "x = " << cylinder.x << ", y = " << cylinder.y << ", radius = " << cylinder.radius << ", heigth = " << cylinder.heigth << ", volume = " << cylinder.GetVolume() << ", surface = " << cylinder.GetSurface() << "\n";
    return os;
}