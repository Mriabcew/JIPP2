//
// Created by thefo on 02.12.2021.
//

#ifndef JIPP2_CIRCLE_H
#define JIPP2_CIRCLE_H

#include "figure.h"
#include <math.h>
#define _USE_MATH_DEFINES
const double PI = M_PI;

class Circle:public Figure{
private:
    double R;
public:
    Circle();
    Circle(double );
    Circle(string,string,double);
    double field();
    double circuit();
    double getArea() override;



};
#endif //JIPP2_CIRCLE_H
