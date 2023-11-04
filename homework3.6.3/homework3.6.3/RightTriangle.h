#pragma once
#ifndef RightTriangle_H
#define RightTriangle_H

class RightTriangle {
public:
    RightTriangle(double sideA, double sideB, double sideC, double angleA, double angleB, double angleC);
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