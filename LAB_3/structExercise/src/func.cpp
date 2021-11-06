#include "../include/func.h"

void print_obj(samochod s)
{
   printf("| %15s | %15s | %15d | %15s | %15s |\n",s.marka,s.model,s.rok,s.kolor,s.N_rejstracyjny);
}

int sameBrand(struct samochod *s,int l,string szukany)
{
    int licznik=0;

    for(int i=0;i<l;i++)
    {
        if(s[i].marka == szukany)
            licznik++;
    }

    return licznik;
}

int Oldest(struct samochod* s,int l)
{
    int indeks=0,najstarszy=s[0].rok;
    for(int i=1;i<l;i++)
    {
        if(s[i].rok<najstarszy)
            indeks=i;
    }
    return indeks;
}