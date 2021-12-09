#include "../include/func.h"

using namespace std;

int main()
{
    struct samochod samochod_1,samochod_2,samochod_3,samochod_4;
    samochod_1={"Audi","A3",2008,"Zielony","TK 67532"};
    samochod_2={"BMW","seria 3",2001,"Niebieski","TKI 5962"};
    samochod_3={"Honda","civic",2010,"Czarny","WW 532D2"};
    samochod_4={"Ford","mondeo",2015,"Bialy","KR 2648I"};
    printf("| %15s | %15s | %15s | %15s | %15s |\n___________________________________________________________________________________________\n","MARKA","MODEL","ROK PRODUKCJI","KOLOR","NR REJSTRACYJNY");
    print_obj(samochod_1);
    print_obj(samochod_2);
    print_obj(samochod_3);
    print_obj(samochod_4);
    struct samochod tablica[4]={samochod_1,samochod_2,samochod_3,samochod_4};
    cout<<"\n"<<"Suma aut o wskazanej marce: "<<sameBrand(tablica,4,"BMW")<<endl;
    cout<<"\n"<<"Indeks auta najstarszego: "<<Oldest(tablica,4);
    return 0;
}

