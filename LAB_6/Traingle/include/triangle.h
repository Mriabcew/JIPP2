//
// Created by thefo on 01.12.2021.
//

#ifndef JIPP2_TRIANGLE_H
#define JIPP2_TRIANGLE_H
#include <iostream>
#include "../../Node/include/node.h"
using namespace std;
class Triangle{
private:
    Node a,b,c;
    string nazwa;
public:
    Triangle();
    Triangle(Node,Node,Node,string);

   // friend ostream& operator<<(ostream &,const Triangle &);
    void display();
    double distance(int, int);
};

#endif //JIPP2_TRIANGLE_H
