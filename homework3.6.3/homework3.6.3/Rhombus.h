#pragma once
#ifndef Rhombus_H
#define Rhombus_H

class Rhombus {
public:
    Rhombus(double sideA, double sideB, double sideC, double sideD, double angleA, double angleB, double angleC, double angleD);
    void printSides();
    void printAngles();
private:
    double sideA;
    double sideB;
    double sideC;
    double sideD;
    double angleA;
    double angleB;
    double angleC;
    double angleD;
};

#endif