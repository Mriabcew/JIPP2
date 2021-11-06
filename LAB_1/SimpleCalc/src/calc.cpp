#include "../include/calc.h"

using namespace std;

int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

double volume(int a, int b, int h)
{
    return ((a+b)/2.)*h;
}
void help()
{
    cout<<"Simple calculator"<<endl;
    cout<<"Available actions:"<<endl;
    cout<<"add [a] [b] - Add two integers"<<endl;
    cout<<"subtract [a] [b] - Subtract two integers"<<endl;
    cout<<"volume [a] [b] [h] - Volume of simple prism with trapeze as an base, [a] and [b] are the bases of trapeze and [h] is trapeze's height "<<endl;
    cout<<"help - show documentation"<<endl;

}


void error()
{
    cout<<"Wrong data, try again"<<endl;
    help();
}