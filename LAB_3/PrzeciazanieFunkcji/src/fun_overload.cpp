//
// Created by thefo on 02.12.2021.
//
#include "fun_overload.h"
double Area(double r){
    return r*r*PI;
}
double Area(double a,double b)
{
    return a*b;
}
double Area(double a,double b,double c)
{
    double p=(a+b+c)/2;
    return sqrt(p*(p-a)*(p-b)*(p-c));
}