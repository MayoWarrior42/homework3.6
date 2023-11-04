#pragma once
#ifndef Quadrilateral_H
#define Quadrilateral_H

class Quadrilateral {
public:
    Quadrilateral(double sideA, double sideB, double sideC, double sideD, double angleA, double angleB, double angleC, double angleD);
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