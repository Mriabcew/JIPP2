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
};

#endif //JIPP2_QUADRATIC_FUNCTION_H
