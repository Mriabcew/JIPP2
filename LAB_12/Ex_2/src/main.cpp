//
// Created by student on 17.01.22.
//

#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

void function() {
    cout << "I'm very slow function" << endl;
    this_thread::sleep_for(chrono::seconds(10));
    cout << "Ohhh, this is very hard work" << endl;
}

int main()
{
    //Funkcja wywolana bez wielowątkowości
    function();
    cout << "I try do this in the same time!" << endl;

    cout << endl << endl << endl;

    //funkcja wywołana w wnowym atku
    thread th(function);
    cout << "I try do this in the same time!" << endl;
    th.join();

    cout << "end" <<endl;

    return 0;
}