#ifndef JIPP2_FUNC_H
#define JIPP2_FUNC_H
#include <string>
#include <iostream>
using namespace std;

struct samochod
        {
        char* marka;
        char* model;
        int rok;
        char* kolor;
        char* N_rejstracyjny;
};

void print_obj(struct samochod);

int sameBrand(struct samochod*,int,string);

int Oldest(struct samochod*,int );


#endif //JIPP2_FUNC_H
