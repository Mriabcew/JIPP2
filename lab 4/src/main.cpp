#include <iostream>
#include <cstdlib>

using namespace std;

struct samochod{
    string marka;
    string model;
    int rok;
    string kolor;
    int moc;

};




int main()
{
    int ilosc=4;
    samochod tab[]={{"audi","a3",1999,"czerwony",105},{"bmw","sera 4",2018,"czarny",265},
                    {"mercedes","klasa E", 2004, "granatowy",183},{"kia","picanto",2006,"biały",65}};
    for(int i=0;i<ilosc;i++)
    {
        cout<<tab[i].marka<<"\t "<<tab[i].model<<"\t "<< tab[i].rok<< "\t "<<tab[i].kolor << "\t "<<tab[i].moc << "\t " <<endl;
    }



    return 0;
}