#include "Square.h"
#include <iostream>


Square::Square(double a, double b, double c, double d, double anglea, double angleb, double anglec, double angled) {
    sideA = a;
    sideB = b;
    sideC = c;
    sideD = d;
    angleA = anglea;
    angleB = angleb;
    angleC = anglec;
    angleD = angled;
}

void Square::printSides() {
    std::cout << "Стороны: a=" << sideA << " b=" << sideB << " c=" << sideC << " d=" << sideD << std::endl;
}

void Square::printAngles() {
    std::cout << "Углы: A=" << angleA << " B=" << angleB << " C=" << angleC << " D=" << angleD << std::endl;
}