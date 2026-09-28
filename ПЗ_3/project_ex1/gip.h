#ifndef TRIANGLE_H
#define TRIANGLE_H

class Triangle {
private:
    double a;
    double b;

public:
    Triangle(double sideA = 0.0, double sideB = 0.0);
    void setCathets(double sideA, double sideB);
    double calculateHypotenuse() const;
};

#endif // TRIANGLE_H
