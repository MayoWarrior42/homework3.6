#pragma once
#ifndef Rectangle_H
#define Rectangle_H

class Rectangle {
public:
    Rectangle(double sideA, double sideB, double sideC, double sideD, double angleA, double angleB, double angleC, double angleD);
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