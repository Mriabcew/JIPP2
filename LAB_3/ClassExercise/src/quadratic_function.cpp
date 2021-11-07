#include "../include/quadratic_function.h"

 Quadric_fun::Quadric_fun(double a, double b, double c):a(a),b(b),c(c)
{

}
void Quadric_fun::printfun()
{
    cout<<"f(x)= "<<a<<"x^2 + "<<b<<"x "<<"+ "<<c<<endl;
}