#include "Parallelogram.h"
#include <iostream>
#include <cmath>

Parallelogram::Parallelogram(double a, double b, double c, double d, double anglea, double angleb, double anglec, double angled) {
    sideA = a;
    sideB = b;
    sideC = c;
    sideD = d;
    angleA = anglea;
    angleB = angleb;
    angleC = anglec;
    angleD = angled;
}

void Parallelogram::printSides() {
    std::cout << "Стороны: a=" << sideA << " b=" << sideB << " c=" << sideC << " d=" << sideD << std::endl;
}

void Parallelogram::printAngles() {
    std::cout << "Углы: A=" << angleA << " B=" << angleB << " C=" << angleC << " D=" << angleD << std::endl;
}