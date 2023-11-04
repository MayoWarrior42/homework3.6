#include "IsoscelesTriangle.h"
#include <iostream>
#include <cmath>

IsoscelesTriangle::IsoscelesTriangle(double a, double b, double c, double anglea, double angleb, double anglec) {
    sideA = a;
    sideB = b;
    sideC = c;
    angleA = anglea;
    angleB = angleb;
    angleC = anglec;
}

void IsoscelesTriangle::printSides() {
    std::cout << "Стороны: a=" << sideA << " b=" << sideB << " c=" << sideC << std::endl;
}

void IsoscelesTriangle::printAngles() {
    std::cout << "Углы: A=" << angleA << " B=" << angleB << " C=" << angleC << std::endl;
}