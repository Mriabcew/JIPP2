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
    double getWidth();
    double getLength();
    double getHeight();
    void setWidth(double );
    void setLength(double );
    void setHeight(double );
};


#endif //JIPP2_CUBOID_H
