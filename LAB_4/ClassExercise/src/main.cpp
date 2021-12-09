#include "../include/cuboid.h"
#include "../include/sphere.h"
#include "../include/quadratic_function.h"
#include "../include/student.h"
#include "../include/Point.h"
#include "../include/Figure.h"
#include <ctime>
using namespace std;

int main()
{
    srand(time(NULL));
    Cuboid c1(10,15,30);
    Sphere s1(10);
    Quadric_fun f1(1,2,3);
    Student stud1("Jan","Kowalski",123456,20,15);
    Point a(1,1);
    Point b(2,2);
    Figure fig(5);
    cout<<"Area of the cuboid: "<<c1.countArea()<<endl;
    cout<<"Volume of sphere: "<<s1.volume()<<endl;
    cout<<"\n"<<"Function " << endl;
    f1.printfun();
    cout<<endl;
    stud1.print_data();
    cout<<"\n";
    cout<<"Distance: "<<a.distance(b)<<endl;
    cout<<"X     Y"<<endl;
    for(int i=0;i<fig.number_of_vertices;i++) {
        cout<<"I:"<<i<<" "<<fig.tab[i].get_x()<<"   "<<fig.tab[i].get_y()<<endl;
    }
    return 0;
}

