#include "../include/cuboid.h"
#include "../include/sphere.h"
#include "../include/quadratic_function.h"
#include "../include/student.h"
using namespace std;

int main()
{
    Cuboid c1(10,15,30);
    Sphere s1(10);
    Quadric_fun f1(1,2,3);
    Student stud1("Jan","Kowalski",123456,20,15);
    cout<<"Area of the cuboid: "<<c1.countArea()<<endl;
    cout<<"Volume of sphere: "<<s1.volume()<<endl;
    cout<<"\n"<<"Function " << endl;
    f1.printfun();
    cout<<endl;
    stud1.print_data();
    return 0;
}

