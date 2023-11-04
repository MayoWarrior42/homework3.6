#pragma once
#ifndef Parallelogram_H
#define Parallelogram_H

class Parallelogram {
public:
    Parallelogram(double sideA, double sideB, double sideC, double sideD, double angleA, double angleB, double angleC, double angleD);
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