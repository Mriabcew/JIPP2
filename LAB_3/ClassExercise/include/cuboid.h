#ifndef JIPP2_CUBOID_H
#define JIPP2_CUBOID_H
#include <iostream>

class Cuboid {
private:
    double width;
    double length;
    double height;
public:
    Cuboid(double, double, double);
    double countArea();

};


#endif //JIPP2_CUBOID_H
