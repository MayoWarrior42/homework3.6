#include "EquilateralTriangle.h"
#include <iostream>
#include <cmath>

EquilateralTriangle::EquilateralTriangle(double a, double b, double c, double anglea, double angleb, double anglec) {
    sideA = a;
    sideB = b;
    sideC = c;
    angleA = anglea;
    angleB = angleb;
    angleC = anglec;
}

void EquilateralTriangle::printSides() {
    std::cout << "Стороны: a=" << sideA << " b=" << sideB << " c=" << sideC << std::endl;
}

void EquilateralTriangle::printAngles() {
    std::cout << "Углы: A=" << angleA << " B=" << angleB << " C=" << angleC << std::endl;
}