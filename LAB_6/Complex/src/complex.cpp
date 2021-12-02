//
// Created by thefo on 01.12.2021.
//

#include "../include/complex.h"

Complex::Complex() {
    double x=0;
    double y=0;
}
Complex::Complex(double x,double y) {
   this->x=x;
   this->y=y;
}

void Complex::printC() {
    if(y>=0)
        cout<<x<<"+"<<y<<"i";
    if(y<0)
        cout<<x<<"-"<<abs(y)<<"i";
}