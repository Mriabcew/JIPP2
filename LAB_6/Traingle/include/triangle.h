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
    string nazwa;
    Node c;
    Node b;
    Node a;
public:
    Triangle();
    Triangle(Node,Node,Node,string);
    void display();
    //friend ostream & operator<<(ostream&,Triangle& );
   // double distance(int,int);

};
#endif //JIPP2_TRIANGLE_H
