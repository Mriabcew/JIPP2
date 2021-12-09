//
// Created by thefo on 02.12.2021.
//

#ifndef JIPP2_RECTANGLE_H
#define JIPP2_RECTANGLE_H
#include "figure.h"

class Rectangle:public Figure{
private:
    double a;
    double b;
public:
    Rectangle();
    Rectangle(double,double);
    Rectangle(string,string,double,double);
    double field();
    double circuit();
    double getArea() override;
};
#endif //JIPP2_RECTANGLE_H
