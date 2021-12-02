//
// Created by thefo on 02.12.2021.
//

#ifndef JIPP2_RECTANGLE_H
#define JIPP2_RECTANGLE_H
#include "figure.h"

class Rectangle:Figure{
private:
    double a;
    double b;
public:
    Rectangle();
    Rectangle(string,string,double,double);
    double field();
    double circuit();
};
#endif //JIPP2_RECTANGLE_H
