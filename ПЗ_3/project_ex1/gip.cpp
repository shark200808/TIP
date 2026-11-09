#include "Triangle.h"
#include <cmath>

Triangle::Triangle(double sideA, double sideB) : a(sideA), b(sideB) {}

void Triangle::setCathets(double sideA, double sideB) {
    a = sideA;
    b = sideB;
}

double Triangle::calculateHypotenuse() const {
    return std::sqrt(a * a + b * b);
}
