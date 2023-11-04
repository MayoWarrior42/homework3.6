#pragma once
#ifndef EquilateralTriangle_H
#define EquilateralTriangle_H

class EquilateralTriangle {
public:
    EquilateralTriangle(double sideA, double sideB, double sideC, double angleA, double angleB, double angleC);
    void printSides();
    void printAngles();
private:
    double sideA;
    double sideB;
    double sideC;
    double angleA;
    double angleB;
    double angleC;
};

#endif