//
// Created by thefo on 02.12.2021.
//

#ifndef JIPP2_TRIANGLE_H
#define JIPP2_TRIANGLE_H
#include "figure.h"

class Triangle:Figure{
private:
    double a;
    double b;
    double c;
    double h_a;
    double h_b;
    double h_c;
public:
    Triangle();
    Triangle(string,string,double,double,double,double,double ,double );
    double field();
    double circuit();
};
#endif //JIPP2_TRIANGLE_H
