//
// Created by Mriabcew on 17.10.2021.
//
#include <iostream>
#include "../include/calc.h"

int add(int a,int b)
{
    return a+b;
}

int substract(int a,int b)
{
    return a-b;
}

double volume(double base_field ,double h)
{
    return base_field*h;
}

void help()
{
  std::cout<<"SimpleCalc [kind of operation] [parameter] [parameter]\n\tAvailable actions:\n 1.Adding (add [a] [b])\n 2.Subtraction (substract ([a] [b])\n 3.Prismatic V prism (volume ([base_field] [h])"<<std::endl;
}

void menu()
{
    std::cout<<"Simple Calculator \n 1.Adding (add [a] [b])\n 2.Subtraction (substract ([a] [b])\n 3.Prismatic V prism (volume ([base_field] [h])\n 4.help"<<std::endl;
}
void error1()
{
    std::cout<<"Wrong data try one more with good data"<<std::endl;
}