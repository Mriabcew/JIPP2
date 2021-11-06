#include "matrixLib/lib.h"
using namespace std;

int main(int argv,char** argc)
{
    if(argv==2 || argv==1 || strcmp(argc[1], "help")==0)
        help();
    else if (!(strcmp(argc[2], "int")))
        {
            int liczba_wierszy_a, liczba_kolumn_a, liczba_wierszy_b, liczba_kolumn_b;
            if (!(strcmp(argc[1], "addMatrix"))) {
                p1:
                cout << "\tMACIERZ I" << endl;
                cout << "Podaj liczbe wierszy" << endl;
                cin >> liczba_wierszy_a;
                cout << "Podaj liczbe kolumn" << endl;
                cin >> liczba_kolumn_a;
                cout << "\tMACIERZ II" << endl;
                cout << "Podaj liczbe wierszy" << endl;
                cin >> liczba_wierszy_b;
                cout << "Podaj liczbe kolumn" << endl;
                cin >> liczba_kolumn_b;
                if (liczba_wierszy_a < 1 || liczba_kolumn_a < 1 || liczba_wierszy_b < 1 || liczba_kolumn_b < 1) {
                    cout << "Dane nie poprawne" << endl;
                    goto p1;
                }
                if (liczba_wierszy_a == liczba_wierszy_b && liczba_kolumn_a == liczba_kolumn_b) {
                    int **macierz_a = createMatrix(liczba_wierszy_a, liczba_kolumn_a);
                    int **macierz_b = createMatrix(liczba_wierszy_b, liczba_kolumn_b);
                    matrixComplement(macierz_a, liczba_wierszy_a, liczba_kolumn_a);
                    matrixComplement(macierz_b, liczba_wierszy_b, liczba_kolumn_b);

                    cout << "\n\tmacierz A\n" << endl;
                    printMatrix(macierz_a, liczba_wierszy_a, liczba_kolumn_a);
                    cout << "\n\tmacierz B\n" << endl;
                    printMatrix(macierz_b, liczba_wierszy_b, liczba_kolumn_b);

                    int **macierz_c = createMatrix(liczba_wierszy_a, liczba_kolumn_a);
                    macierz_c = addMatrix(macierz_a, macierz_b, liczba_wierszy_a, liczba_kolumn_a);


                    cout << "\n\tPo dodaniu do siebie\n" << endl;
                    printMatrix(macierz_c, liczba_wierszy_a, liczba_kolumn_a);

                    for (int i = 0; i < liczba_wierszy_a; i++)
                        delete[] macierz_a[i];

                    for (int i = 0; i < liczba_wierszy_b; i++)
                        delete[] macierz_b[i];

                    delete[] macierz_a;
                    delete[] macierz_b;

                } else
                    cout << "\nNie mozna wykonac operacji" << endl;

            }//Jest OK
            else if (!(strcmp(argc[1], "subtractMatrix "))) {
                p2:
                cout << "\tMACIERZ I" << endl;
                cout << "Podaj liczbe wierszy" << endl;
                cin >> liczba_wierszy_a;
                cout << "Podaj liczbe kolumn" << endl;
                cin >> liczba_kolumn_a;
                cout << "\tMACIERZ II" << endl;
                cout << "Podaj liczbe wierszy" << endl;
                cin >> liczba_wierszy_b;
                cout << "Podaj liczbe kolumn" << endl;
                cin >> liczba_kolumn_b;
                if (liczba_wierszy_a < 1 || liczba_kolumn_a < 1 || liczba_wierszy_b < 1 || liczba_kolumn_b < 1) {
                    cout << "Dane nie poprawne" << endl;
                    goto p2;
                }
                if (liczba_wierszy_a == liczba_wierszy_b && liczba_kolumn_a == liczba_kolumn_b) {
                    int **macierz_a = createMatrix(liczba_wierszy_a, liczba_kolumn_a);
                    int **macierz_b = createMatrix(liczba_wierszy_b, liczba_kolumn_b);


                    matrixComplement(macierz_a, liczba_wierszy_a, liczba_kolumn_a);
                    matrixComplement(macierz_b, liczba_wierszy_b, liczba_kolumn_b);
                    cout << "\t Macierz A" << endl;
                    printMatrix(macierz_a, liczba_wierszy_a, liczba_kolumn_a);
                    cout << "\t Macierz B" << endl;
                    printMatrix(macierz_b, liczba_wierszy_b, liczba_kolumn_b);
                    int **macierz_c = createMatrix(liczba_wierszy_a, liczba_kolumn_a);
                    macierz_c = substractMatrix(macierz_a, macierz_b, liczba_wierszy_a, liczba_kolumn_a,
                                                liczba_wierszy_b,
                                                liczba_kolumn_b);
                    cout << "\n\tmacierz C odejmowanie\n" << endl;
                    printMatrix(macierz_c, liczba_wierszy_a, liczba_kolumn_a);
                    for (int i = 0; i < liczba_wierszy_a; i++)
                        delete[] macierz_a[i];

                    for (int i = 0; i < liczba_wierszy_b; i++)
                        delete[] macierz_b[i];

                    delete[] macierz_a;
                    delete[] macierz_b;
                } else {
                    cout << "nie mozna wykonac operacji" << endl;
                }

            }//Jest OK
            else if (!(strcmp(argc[1], "multiplyMatrix "))) {
                p3:
                cout << "\tMACIERZ I" << endl;
                cout << "Podaj liczbe wierszy" << endl;
                cin >> liczba_wierszy_a;
                cout << "Podaj liczbe kolumn" << endl;
                cin >> liczba_kolumn_a;
                cout << "\tMACIERZ II" << endl;
                cout << "Podaj liczbe wierszy" << endl;
                cin >> liczba_wierszy_b;
                cout << "Podaj liczbe kolumn" << endl;
                cin >> liczba_kolumn_b;
                if (liczba_wierszy_a < 1 || liczba_kolumn_a < 1 || liczba_wierszy_b < 1 || liczba_kolumn_b < 1) {
                    cout << "Dane nie poprawne" << endl;
                    goto p3;
                }
                if (liczba_kolumn_a == liczba_wierszy_b) {
                    int **macierz_a = createMatrix(liczba_wierszy_a, liczba_kolumn_a);
                    int **macierz_b = createMatrix(liczba_wierszy_b, liczba_kolumn_b);
                    matrixComplement(macierz_a, liczba_wierszy_a, liczba_kolumn_a);
                    matrixComplement(macierz_b, liczba_wierszy_b, liczba_kolumn_b);
                    printMatrix(macierz_a, liczba_wierszy_a, liczba_kolumn_a);
                    printMatrix(macierz_b, liczba_wierszy_b, liczba_kolumn_b);
                    int **macierz_c = createMatrix(liczba_wierszy_a, liczba_kolumn_b);
                    macierz_c = multiplyMatrix(macierz_a, macierz_b, liczba_wierszy_a, liczba_kolumn_a,
                                               liczba_kolumn_b);
                    cout << "po mnozeniu" << endl;
                    printMatrix(macierz_c, liczba_wierszy_a, liczba_kolumn_b);

                    for (int i = 0; i < liczba_wierszy_a; i++)
                        delete[] macierz_a[i];

                    for (int i = 0; i < liczba_wierszy_b; i++)
                        delete[] macierz_b[i];

                    delete[] macierz_a;
                    delete[] macierz_b;
                } else {
                    cout << "nie mozna wykonac operacji" << endl;
                }
            }//Jest ok
            else if (!(strcmp(argc[1], "multiplyByScalar"))) {
                p4:
                cout << "\tMACIERZ" << endl;
                cout << "Podaj liczbe wierszy" << endl;
                cin >> liczba_wierszy_a;
                cout << "Podaj liczbe kolumn" << endl;
                cin >> liczba_kolumn_a;
                if (liczba_wierszy_a < 1 || liczba_kolumn_a < 1) {
                    cout << "Dane nie poprawne" << endl;
                    goto p4;
                }
                int **macierz_a = createMatrix(liczba_wierszy_a, liczba_kolumn_a);
                matrixComplement(macierz_a, liczba_wierszy_a, liczba_kolumn_a);
                int skalar;
                cout << "podaj skalar" << endl;
                cin >> skalar;
                macierz_a = multiplyByScalar(macierz_a, liczba_wierszy_a, liczba_kolumn_a, skalar);
                cout << "\n\tmacierz A po mnozeniu\n" << endl;
                printMatrix(macierz_a, liczba_wierszy_a, liczba_kolumn_a);
                for (int i = 0; i < liczba_wierszy_a; i++)
                    delete[] macierz_a[i];
                delete[] macierz_a;
            }//JEST OK
            else if (!(strcmp(argc[1], "transpozeMatrix"))) {
                p5:
                cout << "\tMACIERZ" << endl;
                cout << "Podaj liczbe wierszy" << endl;
                cin >> liczba_wierszy_a;
                cout << "Podaj liczbe kolumn" << endl;
                cin >> liczba_kolumn_a;
                if (liczba_wierszy_a < 1 || liczba_kolumn_a < 1) {
                    cout << "Dane nie poprawne" << endl;
                    goto p5;
                }
                int **macierz_a = createMatrix(liczba_wierszy_a, liczba_kolumn_a);
                matrixComplement(macierz_a, liczba_wierszy_a, liczba_kolumn_a);
                printMatrix(macierz_a, liczba_wierszy_a, liczba_kolumn_a);
                int **macierz_b = createMatrix(liczba_kolumn_a, liczba_wierszy_a);
                macierz_b = transpozeMatrix(macierz_a, liczba_wierszy_a, liczba_kolumn_a);
                cout << "\n\tmacierz A po transpozycji\n" << endl;
                printMatrix(macierz_b, liczba_kolumn_a, liczba_wierszy_a);

                for (int i = 0; i < liczba_wierszy_a; i++)
                    delete[] macierz_a[i];
                delete[] macierz_a;

            }//JEST OK
            else if (!(strcmp(argc[1], "powerMatrix"))) {
                p6:
                unsigned int stopien_potegi;
                cout << "\tMACIERZ I" << endl;
                cout << "Podaj liczbe wierszy" << endl;
                cin >> liczba_wierszy_a;
                cout << "Podaj liczbe kolumn" << endl;
                cin >> liczba_kolumn_a;
                if (liczba_wierszy_a < 1 || liczba_kolumn_a < 1) {
                    cout << "Dane nie poprawne" << endl;
                    goto p6;
                }
                int **macierz_a = createMatrix(liczba_wierszy_a, liczba_kolumn_a);
                matrixComplement(macierz_a, liczba_wierszy_a, liczba_kolumn_a);
                cout << "podaj stopien potegi" << endl;
                cin >> stopien_potegi;
                printMatrix(macierz_a, liczba_wierszy_a, liczba_kolumn_a);
                int **macierz_wynik = createMatrix(liczba_wierszy_a, liczba_kolumn_a);
                macierz_wynik = powerMatrix(macierz_a, liczba_wierszy_a, liczba_kolumn_a, stopien_potegi);
                printMatrix(macierz_wynik, liczba_wierszy_a, liczba_kolumn_a);
                for (int i = 0; i < liczba_wierszy_a; i++)
                    delete[] macierz_a[i];
                delete[] macierz_a;
                for (int i = 0; i < liczba_wierszy_a; i++)
                    delete[] macierz_wynik[i];
                delete[] macierz_wynik;
            }//JEST OK
            else if (!(strcmp(argc[1], "determinantMatrix"))) {
                p7:
                cout << "\tMACIERZ I" << endl;
                cout << "Podaj liczbe wierszy" << endl;
                cin >> liczba_wierszy_a;
                cout << "Podaj liczbe kolumn" << endl;
                cin >> liczba_kolumn_a;
                if (liczba_wierszy_a < 1 || liczba_kolumn_a < 1) {
                    cout << "Dane nie poprawne" << endl;
                    goto p7;
                }
                int **macierz_a = createMatrix(liczba_wierszy_a, liczba_kolumn_a);
                matrixComplement(macierz_a, liczba_wierszy_a, liczba_kolumn_a);
                int det = determinantMatrix(macierz_a, liczba_wierszy_a, liczba_kolumn_a);
                cout << "det=" << det << endl;
            }//jest OK
            else if (!(strcmp(argc[1], "matrixIsDiagonal"))) {
                p8:
                cout << "\tMACIERZ I" << endl;
                cout << "Podaj liczbe wierszy" << endl;
                cin >> liczba_wierszy_a;
                cout << "Podaj liczbe kolumn" << endl;
                cin >> liczba_kolumn_a;
                if (liczba_wierszy_a < 1 || liczba_kolumn_a < 1) {
                    cout << "Dane nie poprawne" << endl;
                    goto p8;
                }
                if (liczba_wierszy_a == liczba_kolumn_a) {
                    int **macierz_a = createMatrix(liczba_wierszy_a, liczba_kolumn_a);
                    matrixComplement(macierz_a, liczba_wierszy_a, liczba_kolumn_a);
                    if (matrixIsDiagonal(macierz_a, liczba_wierszy_a, liczba_kolumn_a) == 1)
                        cout << "diagonalna" << endl;
                    else if (matrixIsDiagonal(macierz_a, liczba_wierszy_a, liczba_kolumn_a) == 0)
                        cout << "nie diagonalna" << endl;
                    for (int i = 0; i < liczba_wierszy_a; i++)
                        delete[] macierz_a[i];
                    delete[] macierz_a;
                } else
                    cout << "nie jest to macierz kwadrawtowa" << endl;
            }//JEST OK
            else if (!(strcmp(argc[1], "sortRowsInMatrix"))) {
                p9:
                cout << "\tMACIERZ I" << endl;
                cout << "Podaj liczbe wierszy" << endl;
                cin >> liczba_wierszy_a;
                cout << "Podaj liczbe kolumn" << endl;
                cin >> liczba_kolumn_a;
                if (liczba_wierszy_a < 1 || liczba_kolumn_a < 1) {
                    cout << "Dane nie poprawne" << endl;
                    goto p9;
                }
                int **macierz_a = createMatrix(liczba_wierszy_a, liczba_kolumn_a);
                matrixComplement(macierz_a, liczba_wierszy_a, liczba_kolumn_a);
                sortRowInMatrix(macierz_a, liczba_wierszy_a, liczba_kolumn_a);
                cout << "\n\tmacierz A po sortowaniu\n" << endl;
                printMatrix(macierz_a, liczba_wierszy_a, liczba_kolumn_a);
                for (int i = 0; i < liczba_wierszy_a; i++)
                    delete[] macierz_a[i];
                delete[] macierz_a;

            }//JEST OK
        } else if (!(strcmp(argc[2], "double"))) {
            int liczba_wierszy_a, liczba_kolumn_a, liczba_wierszy_b, liczba_kolumn_b;
            if (!(strcmp(argc[1], "addMatrix"))) {
                p10:
                cout << "\tMACIERZ I" << endl;
                cout << "Podaj liczbe wierszy" << endl;
                cin >> liczba_wierszy_a;
                cout << "Podaj liczbe kolumn" << endl;
                cin >> liczba_kolumn_a;
                cout << "\tMACIERZ II" << endl;
                cout << "Podaj liczbe wierszy" << endl;
                cin >> liczba_wierszy_b;
                cout << "Podaj liczbe kolumn" << endl;
                cin >> liczba_kolumn_b;
                if (liczba_wierszy_a < 1 || liczba_kolumn_a < 1 || liczba_wierszy_b < 1 || liczba_kolumn_b < 1) {
                    cout << "Dane nie poprawne" << endl;
                    goto p10;
                }
                if (liczba_wierszy_a == liczba_wierszy_b && liczba_kolumn_a == liczba_kolumn_b) {
                    double **macierz_a = createMatrix_D(liczba_wierszy_a, liczba_kolumn_a);
                    double **macierz_b = createMatrix_D(liczba_wierszy_b, liczba_kolumn_b);
                    matrixComplement(macierz_a, liczba_wierszy_a, liczba_kolumn_a);
                    matrixComplement(macierz_b, liczba_wierszy_b, liczba_kolumn_b);

                    cout << "\n\tmacierz A\n" << endl;
                    printMatrix(macierz_a, liczba_wierszy_a, liczba_kolumn_a);
                    cout << "\n\tmacierz B\n" << endl;
                    printMatrix(macierz_b, liczba_wierszy_b, liczba_kolumn_b);

                    double **macierz_c = createMatrix_D(liczba_wierszy_a, liczba_kolumn_a);
                    macierz_c = addMatrix(macierz_a, macierz_b, liczba_wierszy_a, liczba_kolumn_a);


                    cout << "\n\tPo dodaniu do siebie\n" << endl;
                    printMatrix(macierz_c, liczba_wierszy_a, liczba_kolumn_a);

                    for (int i = 0; i < liczba_wierszy_a; i++)
                        delete[] macierz_a[i];

                    for (int i = 0; i < liczba_wierszy_b; i++)
                        delete[] macierz_b[i];

                    delete[] macierz_a;
                    delete[] macierz_b;

                } else
                    cout << "\nNie mozna wykonac operacji" << endl;

            }//Jest OK
            else if (!(strcmp(argc[1], "subtractMatrix"))) {
                p11:
                cout << "\tMACIERZ I" << endl;
                cout << "Podaj liczbe wierszy" << endl;
                cin >> liczba_wierszy_a;
                cout << "Podaj liczbe kolumn" << endl;
                cin >> liczba_kolumn_a;
                cout << "\tMACIERZ II" << endl;
                cout << "Podaj liczbe wierszy" << endl;
                cin >> liczba_wierszy_b;
                cout << "Podaj liczbe kolumn" << endl;
                cin >> liczba_kolumn_b;
                if (liczba_wierszy_a < 1 || liczba_kolumn_a < 1 || liczba_wierszy_b < 1 || liczba_kolumn_b < 1) {
                    cout << "Dane nie poprawne" << endl;
                    goto p11;
                }
                if (liczba_wierszy_a == liczba_wierszy_b && liczba_kolumn_a == liczba_kolumn_b) {
                    double **macierz_a = createMatrix_D(liczba_wierszy_a, liczba_kolumn_a);
                    double **macierz_b = createMatrix_D(liczba_wierszy_b, liczba_kolumn_b);


                    matrixComplement(macierz_a, liczba_wierszy_a, liczba_kolumn_a);
                    matrixComplement(macierz_b, liczba_wierszy_b, liczba_kolumn_b);
                    cout << "\t Macierz A" << endl;
                    printMatrix(macierz_a, liczba_wierszy_a, liczba_kolumn_a);
                    cout << "\t Macierz B" << endl;
                    printMatrix(macierz_b, liczba_wierszy_b, liczba_kolumn_b);
                    double **macierz_c = createMatrix_D(liczba_wierszy_a, liczba_kolumn_a);
                    macierz_c = substractMatrix(macierz_a, macierz_b, liczba_wierszy_a, liczba_kolumn_a);
                    cout << "\n\tmacierz C odejmowanie\n" << endl;
                    printMatrix(macierz_c, liczba_wierszy_a, liczba_kolumn_a);
                    for (int i = 0; i < liczba_wierszy_a; i++)
                        delete[] macierz_a[i];

                    for (int i = 0; i < liczba_wierszy_b; i++)
                        delete[] macierz_b[i];

                    delete[] macierz_a;
                    delete[] macierz_b;
                } else {
                    cout << "nie mozna wykonac operacji" << endl;
                }

            }//Jest OK
            else if (!(strcmp(argc[1], "multiplyMatrix"))) {
                p12:
                cout << "\tMACIERZ I" << endl;
                cout << "Podaj liczbe wierszy" << endl;
                cin >> liczba_wierszy_a;
                cout << "Podaj liczbe kolumn" << endl;
                cin >> liczba_kolumn_a;
                cout << "\tMACIERZ II" << endl;
                cout << "Podaj liczbe wierszy" << endl;
                cin >> liczba_wierszy_b;
                cout << "Podaj liczbe kolumn" << endl;
                cin >> liczba_kolumn_b;
                if (liczba_wierszy_a < 1 || liczba_kolumn_a < 1 || liczba_wierszy_b < 1 || liczba_kolumn_b < 1) {
                    cout << "Dane nie poprawne" << endl;
                    goto p12;
                }
                if (liczba_kolumn_a == liczba_wierszy_b) {
                    double **macierz_a = createMatrix_D(liczba_wierszy_a, liczba_kolumn_a);
                    double **macierz_b = createMatrix_D(liczba_wierszy_b, liczba_kolumn_b);
                    matrixComplement(macierz_a, liczba_wierszy_a, liczba_kolumn_a);
                    matrixComplement(macierz_b, liczba_wierszy_b, liczba_kolumn_b);
                    printMatrix(macierz_a, liczba_wierszy_a, liczba_kolumn_a);
                    printMatrix(macierz_b, liczba_wierszy_b, liczba_kolumn_b);
                    double **macierz_c = createMatrix_D(liczba_wierszy_a, liczba_kolumn_b);
                    macierz_c = multiplyMatrix(macierz_a, macierz_b, liczba_wierszy_a, liczba_kolumn_a,
                                               liczba_kolumn_b);
                    cout << "po mnozeniu" << endl;
                    printMatrix(macierz_c, liczba_wierszy_a, liczba_kolumn_b);

                    for (int i = 0; i < liczba_wierszy_a; i++)
                        delete[] macierz_a[i];

                    for (int i = 0; i < liczba_wierszy_b; i++)
                        delete[] macierz_b[i];

                    delete[] macierz_a;
                    delete[] macierz_b;
                } else {
                    cout << "nie mozna wykonac operacji" << endl;
                }
            }//JEST OK
            else if (!(strcmp(argc[1], "multiplyByScalar"))) {
                p13:
                cout << "\tMACIERZ" << endl;
                cout << "Podaj liczbe wierszy" << endl;
                cin >> liczba_wierszy_a;
                cout << "Podaj liczbe kolumn" << endl;
                cin >> liczba_kolumn_a;
                if (liczba_wierszy_a < 1 || liczba_kolumn_a < 1) {
                    cout << "Dane nie poprawne" << endl;
                    goto p13;
                }
                double **macierz_a = createMatrix_D(liczba_wierszy_a, liczba_kolumn_a);
                matrixComplement(macierz_a, liczba_wierszy_a, liczba_kolumn_a);
                double skalar;
                cout << "podaj skalar" << endl;
                cin >> skalar;
                macierz_a = multiplyByScalar(macierz_a, liczba_wierszy_a, liczba_kolumn_a, skalar);
                cout << "\n\tmacierz A po mnozeniu\n" << endl;
                printMatrix(macierz_a, liczba_wierszy_a, liczba_kolumn_a);
                for (int i = 0; i < liczba_wierszy_a; i++)
                    delete[] macierz_a[i];
                delete[] macierz_a;
            }//JEST OK
            else if (!(strcmp(argc[1], "transpozeMatrix"))) {
                p14:
                cout << "\tMACIERZ" << endl;
                cout << "Podaj liczbe wierszy" << endl;
                cin >> liczba_wierszy_a;
                cout << "Podaj liczbe kolumn" << endl;
                cin >> liczba_kolumn_a;
                if (liczba_wierszy_a < 1 || liczba_kolumn_a < 1) {
                    cout << "Dane nie poprawne" << endl;
                    goto p14;
                }
                double **macierz_a = createMatrix_D(liczba_wierszy_a, liczba_kolumn_a);
                matrixComplement(macierz_a, liczba_wierszy_a, liczba_kolumn_a);
                printMatrix(macierz_a, liczba_wierszy_a, liczba_kolumn_a);
                double **macierz_b = createMatrix_D(liczba_kolumn_a, liczba_wierszy_a);
                macierz_b = transpozeMatrix(macierz_a, liczba_wierszy_a, liczba_kolumn_a);
                cout << "\n\tmacierz A po transpozycji\n" << endl;
                printMatrix(macierz_b, liczba_kolumn_a, liczba_wierszy_a);

                for (int i = 0; i < liczba_wierszy_a; i++)
                    delete[] macierz_a[i];
                delete[] macierz_a;


            }//JEST OK
            else if (!(strcmp(argc[1], "powerMatrix"))) {
                p15:
                unsigned int stopien_potegi;
                cout << "\tMACIERZ I" << endl;
                cout << "Podaj liczbe wierszy" << endl;
                cin >> liczba_wierszy_a;
                cout << "Podaj liczbe kolumn" << endl;
                cin >> liczba_kolumn_a;
                if (liczba_wierszy_a < 1 || liczba_kolumn_a < 1) {
                    cout << "Dane nie poprawne" << endl;
                    goto p15;
                }
                if (liczba_wierszy_a == liczba_kolumn_a) {
                    double **macierz_a = createMatrix_D(liczba_wierszy_a, liczba_kolumn_a);
                    matrixComplement(macierz_a, liczba_wierszy_a, liczba_kolumn_a);
                    cout << "podaj stopien potegi" << endl;
                    cin >> stopien_potegi;
                    printMatrix(macierz_a, liczba_wierszy_a, liczba_kolumn_a);
                    double **macierz_wynik = createMatrix_D(liczba_wierszy_a, liczba_kolumn_a);
                    macierz_wynik = powerMatrix(macierz_a, liczba_wierszy_a, liczba_kolumn_a, stopien_potegi);
                    printMatrix(macierz_wynik, liczba_wierszy_a, liczba_kolumn_a);

                    for (int i = 0; i < liczba_wierszy_a; i++)
                        delete[] macierz_a[i];
                    delete[] macierz_a;
                    for (int i = 0; i < liczba_wierszy_a; i++)
                        delete[] macierz_wynik[i];
                    delete[] macierz_wynik;
                } else {
                    cout << "nie jest to macierz kwadratowa" << endl;
                }
            }//JEST OK
            else if (!(strcmp(argc[1], "determinantMatrix"))) {
                p16:
                cout << "\tMACIERZ I" << endl;
                cout << "Podaj liczbe wierszy" << endl;
                cin >> liczba_wierszy_a;
                cout << "Podaj liczbe kolumn" << endl;
                cin >> liczba_kolumn_a;
                if (liczba_wierszy_a < 1 || liczba_kolumn_a < 1 || liczba_wierszy_b < 1 || liczba_kolumn_b < 1) {
                    cout << "Dane nie poprawne" << endl;
                    goto p16;
                }
                double **macierz_a = createMatrix_D(liczba_wierszy_a, liczba_kolumn_a);
                matrixComplement(macierz_a, liczba_wierszy_a, liczba_kolumn_a);
                double det = determinantMatrix(macierz_a, liczba_wierszy_a, liczba_kolumn_a);
                cout << "det=" << det << endl;
            }//jest OK
            else if (!(strcmp(argc[1], "matrixIsDiagonal"))) {
                p17:
                cout << "\tMACIERZ I" << endl;
                cout << "Podaj liczbe wierszy" << endl;
                cin >> liczba_wierszy_a;
                cout << "Podaj liczbe kolumn" << endl;
                cin >> liczba_kolumn_a;
                if (liczba_wierszy_a < 1 || liczba_kolumn_a < 1 || liczba_wierszy_b < 1 || liczba_kolumn_b < 1) {
                    cout << "Dane nie poprawne" << endl;
                    goto p17;
                }
                if (liczba_wierszy_a == liczba_kolumn_a) {
                    double **macierz_a = createMatrix_D(liczba_wierszy_a, liczba_kolumn_a);
                    matrixComplement(macierz_a, liczba_wierszy_a, liczba_kolumn_a);
                    if (matrixIsDiagonal(macierz_a, liczba_wierszy_a, liczba_kolumn_a) == 1)
                        cout << "diagonalna" << endl;
                    else if (matrixIsDiagonal(macierz_a, liczba_wierszy_a, liczba_kolumn_a) == 0)
                        cout << "nie diagonalna" << endl;
                    for (int i = 0; i < liczba_wierszy_a; i++)
                        delete[] macierz_a[i];
                    delete[] macierz_a;
                } else
                    cout << "nie jest to macierz kwadrawtowa" << endl;
            } else if (!(strcmp(argc[1], "SortRowsInMatrix"))) {
                p19:

                cout << "\tMACIERZ I" << endl;
                cout << "Podaj liczbe wierszy" << endl;
                cin >> liczba_wierszy_a;
                cout << "Podaj liczbe kolumn" << endl;
                cin >> liczba_kolumn_a;
                if (liczba_wierszy_a < 1 || liczba_kolumn_a < 1 || liczba_wierszy_b < 1 || liczba_kolumn_b < 1) {
                    cout << "Dane nie poprawne" << endl;
                    goto p19;
                }
                double **macierz_a = createMatrix_D(liczba_wierszy_a, liczba_kolumn_a);
                matrixComplement(macierz_a, liczba_wierszy_a, liczba_kolumn_a);
                sortRowInMatrix(macierz_a, liczba_wierszy_a, liczba_kolumn_a);
                cout << "\n\tmacierz A po sortowaniu\n" << endl;
                printMatrix(macierz_a, liczba_wierszy_a, liczba_kolumn_a);
                for (int i = 0; i < liczba_wierszy_a; i++)
                    delete[] macierz_a[i];
                delete[] macierz_a;

            }//JEST OK
        }
    else
        help();
    return 0;
}



