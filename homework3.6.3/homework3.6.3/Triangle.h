#pragma once
#ifndef TRIANGLE_H
#define TRIANGLE_H

class Triangle {
public:
    Triangle(double sideA, double sideB, double sideC, double angleA, double angleB, double angleC);
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