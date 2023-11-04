#pragma once
#ifndef IsoscelesTriangle_H
#define IsoscelesTriangle_H

class IsoscelesTriangle {
public:
    IsoscelesTriangle(double sideA, double sideB, double sideC, double angleA, double angleB, double angleC);
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