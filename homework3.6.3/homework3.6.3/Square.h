#pragma once
#ifndef Square_H
#define Square_H

class Square {
public:
    Square(double sideA, double sideB, double sideC, double sideD, double angleA, double angleB, double angleC, double angleD);
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