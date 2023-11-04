#include "RightTriangle.h"
#include <iostream>
#include <cmath>

RightTriangle::RightTriangle(double a, double b, double c, double anglea, double angleb, double anglec) {
    sideA = a;
    sideB = b;
    sideC = c;
    angleA = anglea;
    angleB = angleb;
    angleC = anglec;
}

void RightTriangle::printSides() {
    std::cout << "Стороны: a=" << sideA << " b=" << sideB << " c=" << sideC << std::endl;
}

void RightTriangle::printAngles() {
    std::cout << "Углы: A=" << angleA << " B=" << angleB << " C=" << angleC << std::endl;
}