#include "../include/quadratic_function.h"

 Quadric_fun::Quadric_fun(double a, double b, double c):a(a),b(b),c(c)
{

}
void Quadric_fun::printfun()
{
    cout<<"f(x)= "<<a<<"x^2 + "<<b<<"x "<<"+ "<<c<<endl;
}

double Quadric_fun::getA()  {
    return a;
}

double Quadric_fun::getB()  {
    return b;
}

double Quadric_fun::getC()  {
    return c;
}

void Quadric_fun::setA(double a) {
    Quadric_fun::a = a;
}

void Quadric_fun::setB(double b) {
    Quadric_fun::b = b;
}

void Quadric_fun::setC(double c) {
    Quadric_fun::c = c;
}
