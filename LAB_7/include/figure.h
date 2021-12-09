//
// Created by thefo on 02.12.2021.
//

#ifndef JIPP2_FIGURE_H
#define JIPP2_FIGURE_H
#include <iostream>
using namespace std;
class Figure{
protected:
    string name;
    string color;
public:
    virtual double getArea()=0;
};
#endif //JIPP2_FIGURE_H
