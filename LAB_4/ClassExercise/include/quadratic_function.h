#ifndef JIPP2_QUADRATIC_FUNCTION_H
#define JIPP2_QUADRATIC_FUNCTION_H
#include <iostream>
using namespace std;
class Quadric_fun{
private:
    double a;
    double b;
    double c;

public:
    Quadric_fun(double, double, double);
    void printfun();

    double getA() ;

    double getB() ;

    double getC() ;

    void setA(double a);

    void setB(double b);

    void setC(double c);

};

#endif //JIPP2_QUADRATIC_FUNCTION_H
