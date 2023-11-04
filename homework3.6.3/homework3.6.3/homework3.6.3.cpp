#include "Triangle.h"
#include "RightTriangle.h"
#include "IsoscelesTriangle.h"
#include "EquilateralTriangle.h"
#include "Quadrilateral.h"
#include "Rectangle.h"
#include "Square.h"
#include "Parallelogram.h"
#include "Rhombus.h"
#include <iostream>

int main() {
    system("chcp 1251");
    Triangle triangle(10, 20, 30, 50, 60, 70);
    RightTriangle rightTriangle(10, 20, 30, 50, 60, 90);
    IsoscelesTriangle isoscelesTriangle(10, 20, 10, 50, 60, 50);
    EquilateralTriangle equilateralTriangle(30, 30, 30, 60, 60, 60);
    Quadrilateral quadrilateral(10, 20, 30, 40, 50, 60, 70, 80);
    Rectangle rectangle(10, 20, 10, 20, 90, 90, 90, 90);
    Square square(20, 20, 20, 20, 90, 90, 90, 90);
    Parallelogram parallelogram(20, 30, 20, 30, 30, 40, 30, 40);
    Rhombus rhombus(30, 30, 30, 30, 30, 40, 30, 40);

    std::cout << "Треугольник:" << std::endl;
    triangle.printSides();
    triangle.printAngles();

    std::cout << std::endl << "Прямоугольный треугольник:" << std::endl;
    rightTriangle.printSides();
    rightTriangle.printAngles();

    std::cout << std::endl << "Равнобедренный треугольник:" << std::endl;
    isoscelesTriangle.printSides();
    isoscelesTriangle.printAngles();

    std::cout << std::endl << "Равносторонний треугольник:" << std::endl;
    equilateralTriangle.printSides();
    equilateralTriangle.printAngles();

    std::cout << std::endl << "Четырёхугольник:" << std::endl;
    quadrilateral.printSides();
    quadrilateral.printAngles();

    std::cout << std::endl << "Прямоугольник:" << std::endl;
    rectangle.printSides();
    rectangle.printAngles();

    std::cout << std::endl << "Квадрат:" << std::endl;
    square.printSides();
    square.printAngles();

    std::cout << std::endl << "Параллелограмм:" << std::endl;
    parallelogram.printSides();
    parallelogram.printAngles();

    std::cout << std::endl << "Ромб:" << std::endl;
    rhombus.printSides();
    rhombus.printAngles();

    return 0;
}