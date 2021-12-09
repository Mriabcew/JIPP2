//
// Created by thefo on 02.12.2021.
//
#include "circle.h"
#include "rectangle.h"
int main() {
    Figure *circle = new Circle(5);
    Figure *rectangle = new Rectangle(5, 18);

    cout << "Circle area: " << circle->getArea() << endl;
    cout << "Rectangle area: " << rectangle->getArea() << endl;
}