#include <iostream>
#include <string.h>
#include "../include/calc.h"

using namespace std;
int main(int argc, char *argv[])
{
    menu();
    if(argc ==1)
        error1();
    else if (strcmp(argv[1], "add")==0 && argc == 4)
     cout << "resoult: " << add(stoi(argv[2]), stoi(argv[3])) << endl;
    else if (strcmp(argv[1],"substract")==0 && argc == 4)
        cout << "resoult: " << substract(stoi(argv[2]), stoi(argv[3])) << endl;

    else if(strcmp(argv[1],"volume")==0 && argc == 4)
        cout << "resoult: " << volume(stoi(argv[2]), stoi(argv[3])) << endl;

    else if (argc == 2 && strcmp(argv[1], "help") == 0)
        help();


    return 0;
}
