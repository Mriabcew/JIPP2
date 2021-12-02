//
// Created by thefo on 28.11.2021.
//

#ifndef JIPP2_POJAZD_H
#define JIPP2_POJAZD_H

#include <iostream>

using namespace std;

class Pojazd{
private:
    string nr_rejstracyjny;
    string nazwa;
    unsigned int liczba_miejsc;
    string *dane_pasarzera;
    string typ_pojazdu;
    string marka;
    static string najnowsza_wersja_oprogramowania;
    string zainstalowania_wersja_oprogramowania;
public:
    Pojazd();
    void pokazDane();
    /**
     * nr_rejstracyjny
     * nazwa
     * liczba miejsc
     * typ pojazdu
     * marka
     */
    Pojazd(string,string,unsigned int,string,string);
    Pojazd(Pojazd &Pojazd);
    void uzupenijDane(int,string);
    string getNrRejstracyjny();
    string getNazwa();
    string getTypPojazdu();
    string getMarka();
    void setNrRejstracyjny(string nrRejstracyjny);
    void setNazwa(string nazwa);
};

#endif //JIPP2_POJAZD_H
