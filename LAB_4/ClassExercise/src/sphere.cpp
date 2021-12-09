#include "../include/sphere.h"
Sphere::Sphere(double r)
        :r(r)
{

}
double Sphere::volume()
{
    double V=(4./3.)*(3.14)*(r*r*r);
    return V;
}

void Sphere::setR(double r) {
    Sphere::r = r;
}

double Sphere::getR() {
    return r;
}

