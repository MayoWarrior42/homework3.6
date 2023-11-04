#include "Rectangle.h"
#include <iostream>
#include <cmath>

Rectangle::Rectangle(double a, double b, double c, double d, double anglea, double angleb, double anglec, double angled) {
    sideA = a;
    sideB = b;
    sideC = c;
    sideD = d;
    angleA = anglea;
    angleB = angleb;
    angleC = anglec;
    angleD = angled;
}

void Rectangle::printSides() {
    std::cout << "Стороны: a=" << sideA << " b=" << sideB << " c=" << sideC << " d=" << sideD << std::endl;
}

void Rectangle::printAngles() {
    std::cout << "Углы: A=" << angleA << " B=" << angleB << " C=" << angleC << " D=" << angleD << std::endl;
}