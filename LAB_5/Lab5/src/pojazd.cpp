//
// Created by thefo on 28.11.2021.
//
#include "pojazd.h"

void Pojazd::pokazDane()  {
    cout<<"| numer rejstracyjny | nazwa | miejsca | marka | typ pojazdu | zainstalowane oprogramownie | najnowsze oprogramowanie |"<<endl;
    cout<< nr_rejstracyjny << " " << nazwa <<" " << liczba_miejsc ;
    for(int i=0;i<liczba_miejsc;i++)
    {
        cout<<dane_pasarzera[i]<<" ";
    }
    cout<<marka<<" "<<typ_pojazdu<<" ";//<<zainstalowania_wersja_oprogramowania<<" "<<najnowsza_wersja_oprogramowania;
}

void Pojazd::uzupenijDane(int i,string dane)
{
        dane_pasarzera[i]=dane;

}

Pojazd::Pojazd(string nr_rejstracyjny, string nazwa, unsigned int liczba_miejsc, string typ_pojazdu, string marka)
:nr_rejstracyjny(nr_rejstracyjny),nazwa(nazwa),liczba_miejsc(liczba_miejsc),marka(marka),typ_pojazdu(typ_pojazdu)
{
    dane_pasarzera = new string [liczba_miejsc];
    for(int i=0;i<liczba_miejsc;i++)
    {
        dane_pasarzera[i]="puste";
    }
}

Pojazd::Pojazd(Pojazd& Pojazd)
{
    nr_rejstracyjny=Pojazd.nr_rejstracyjny;
    nazwa=Pojazd.nazwa;
    liczba_miejsc=Pojazd.liczba_miejsc;
    marka=Pojazd.marka;
    typ_pojazdu=Pojazd.typ_pojazdu;
}

string Pojazd::getNrRejstracyjny() {
    return nr_rejstracyjny;
}

 string Pojazd::getNazwa()  {
    return nazwa;
}
 string Pojazd::getTypPojazdu() {
    return typ_pojazdu;
}

 string Pojazd::getMarka()  {
    return marka;
}

void Pojazd::setNrRejstracyjny(string nrRejstracyjny) {
    nr_rejstracyjny = nrRejstracyjny;
}

void Pojazd::setNazwa(string nazwa){
    Pojazd::nazwa = nazwa;
}
