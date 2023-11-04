#include "Triangle.h"
#include <iostream>
#include <cmath>

Triangle::Triangle(double a, double b, double c, double anglea, double angleb, double anglec) {
    sideA = a;
    sideB = b;
    sideC = c;
    angleA = anglea;
    angleB = angleb;
    angleC = anglec;
}

void Triangle::printSides() {
    std::cout << "Стороны: a=" << sideA << " b=" << sideB << " c=" << sideC << std::endl;
}

void Triangle::printAngles() {
    std::cout << "Углы: A=" << angleA << " B=" << angleB << " C=" << angleC << std::endl;
}