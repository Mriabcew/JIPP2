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