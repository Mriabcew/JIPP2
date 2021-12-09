#include "../include/student.h"

Student::Student(string imie, string nazwisko,unsigned int nr_albumu, unsigned int liczba_pytan, unsigned int poprawne_odp)
:imie(imie),nazwisko(nazwisko),nr_albumu(nr_albumu),liczba_pytan(liczba_pytan),poprawne_odp(poprawne_odp)
{

}

void Student::print_data()
{
    cout<<"Number of questions: "<<liczba_pytan<<endl;
    cout<<"Number of correct: "<<poprawne_odp<<endl;
    cout<<"Procent of correct answers: "<<procent()<<"%"<<endl;
}

double Student::procent() {
     return (double) poprawne_odp/(double)liczba_pytan * 100;
}

const string &Student::getImie()  {
    return imie;
}

const string &Student::getNazwisko()  {
    return nazwisko;
}

unsigned int Student::getNrAlbumu()  {
    return nr_albumu;
}

unsigned int Student::getLiczbaPytan()  {
    return liczba_pytan;
}

unsigned int Student::getPoprawneOdp()  {
    return poprawne_odp;
}

void Student::setImie( string &imie) {
    Student::imie = imie;
}

void Student::setNazwisko( string &nazwisko) {
    Student::nazwisko = nazwisko;
}

void Student::setNrAlbumu(unsigned int nrAlbumu) {
    nr_albumu = nrAlbumu;
}

void Student::setLiczbaPytan(unsigned int liczbaPytan) {
    liczba_pytan = liczbaPytan;
}

void Student::setPoprawneOdp(unsigned int poprawneOdp) {
    poprawne_odp = poprawneOdp;
}
