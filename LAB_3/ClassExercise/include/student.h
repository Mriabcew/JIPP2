#ifndef JIPP2_STUDENT_H
#define JIPP2_STUDENT_H
#include <iostream>
#include <string>

using namespace std;


class Student {
private:
        string imie;
        string nazwisko;
        unsigned int nr_albumu;
        unsigned int liczba_pytan;
        unsigned int poprawne_odp;
public:
       Student(string,string,unsigned int,unsigned int,unsigned int);
       void print_data();
       double procent();

};


#endif //JIPP2_STUDENT_H
