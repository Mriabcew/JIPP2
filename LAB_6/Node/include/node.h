//
// Created by thefo on 01.12.2021.
//
#ifndef JIPP2_NODE_H
#define JIPP2_NODE_H
#include <iostream>
#include <math.h>
using namespace std;

class Node {
private:
    double x, y;

public:
    Node();
    Node(double x, double y);

    void display();

    void updateValue(double x, double y);

    friend double pointDistance(Node, Node);
};

double pointDistance(Node a, Node b);


#endif //JIPP2_NODE_H