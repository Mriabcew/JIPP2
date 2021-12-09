
#ifndef JIPP2_SPHERE_H
#define JIPP2_SPHERE_H
#include <iostream>

class Sphere {
private:
    double r;
public:
    Sphere(double);
    double volume();
    void setR(double r);
    double getR() ;
};


#endif //JIPP2_SPHERE_H
