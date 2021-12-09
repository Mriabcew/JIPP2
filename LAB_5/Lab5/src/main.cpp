//
// Created by thefo on 28.11.2021.
//

#include <iostream>
#include "pojazd.h"
#include "vector.h"
#include "complex.h"

int main()
{
        char k;
        Pojazd *samochod=new Pojazd("TK2162W","BMW",5,"samochod","BMW");
        samochod->pokazDane();
        Pojazd *samochod_c=samochod;
        cout<<"\nUzupelnic dane?"<<endl;
        cin>>k;
        if(k=='t')
        {
            samochod->uzupenijDane(0,"Jan");
            samochod->pokazDane();
        }
        cout<<"\n\nKopia"<<endl;
        samochod_c->pokazDane();
        return 0;
}

