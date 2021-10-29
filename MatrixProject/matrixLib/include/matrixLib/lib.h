//
// Created by Mriabcew on 25.10.2021.
//
#ifndef JIPP2_LIB_H
#define JIPP2_LIB_H
#include <iostream>
#include <cstring>
using namespace std;
/**
 * createMatrix
 * @param int liczba_wierszy - liczba wierszy w macierzy
 * @param int liczba_kolumn - liczba kolumna w macierzy
 * tworzy macierz
 * return int** macierz - macierz o wymiarach(liczba_wierszy x liczba_kolumn
 * **/
int **createMatrix(int, int);//zrobione
/**
 * printMatrix
 * @param int ** macierz do wyswietlenia
 * @param int liczba_wierszy - liczba wierszy w macierzy
 * @param int liczba_kolumn - liczba kolumna w macierzy
 * wyswietla macierz
 * **/
void printMatrix(int **,int,int );//zrobione
/**
 * matrixComlement
 * @param int ** macierz do uzupelnienia
 * @param int liczba_wierszy - liczba wierszy w macierzy
 * @param int liczba_kolumn - liczba kolumna w macierzy
 * uzupelnia macierz liczbami
 * **/
void matrixComplement(int **,int,int);//zrobione
/**
 * addMatrix
 * @param int ** macierz_a
 * @param int ** macierz_b
 * @param int liczba_wierszy - liczba wierszy w macierzach
 * @param int liczba_kolumn - liczba kolumna w macierzach
 * dodaje macierze do siebie
 * @return zwraca macierz_c wynik dodawania
 * **/
int ** addMatrix(int **,int **,int,int);//zrobione
/**
 * substractMatrix
 * @param int ** macierz_a
 * @param int ** macierz_b
 * @param int liczba_wierszy - liczba wierszy w macierzach
 * @param int liczba_kolumn - liczba kolumna w macierzach
 * odejmuje macierze od siebie
 * @return zwraca macierz_c wynik odejmowania
 * **/
int **substractMatrix(int **, int **, int, int, int, int);//zrobione
/**
 * multiplyMatrix
 * @param int ** macierz_a
 * @param int ** macierz_b
 * @param int liczba_wierszy - liczba wierszy w macierzach
 * @param int liczba_kolumn - liczba kolumna w macierzach
 * mnozy macierze
 * @return zwraca macierz_c wynik mnozenia
 * **/
int **multiplyMatrix(int **, int **, int, int, int);//zrobione
/**
 * multiplyMatrixByScalar
 * @param int ** macierz_a - macierz do pomnozenia przez skalar
 * @param int skalar
 * @param int liczba_wierszy - liczba wierszy w macierzy
 * @param int liczba_kolumn - liczba kolumna w macierzy
 * mnozy macierz przez skalar
 * @return zwraca macierz_c wynik mnozenia macierzy_a przez skalar
 * **/
int ** multiplyByScalar(int**,int,int,int);//zrobione
/**
 * transpozeMatrix
 * @param int ** macierz_a - macierz do tranzpozycji
 * @param int liczba_wierszy - liczba wierszy w macierzy
 * @param int liczba_kolumn - liczba kolumna w macierzy
 * transponuje macierz
 * @return zwraca macierz_c po tranzpozycji macierzy_a
 * **/
int ** transpozeMatrix(int**,int,int);//zrobione
/**
 * powerMatrix
 * @param int ** macierz_a - macierz do spotegowania
 * @param int liczba_wierszy - liczba wierszy w macierzy
 * @param int liczba_kolumn - liczba kolumna w macierzy
 * @param unsigned wykĹ‚adnik potegi
 * podnosi macierz do potegi
 * @return zwraca macierz_c wynik potegowania
 * **/
int ** powerMatrix(int**,int,int,unsigned );
/**
 * macierzPoWykresleniu
 * @param int ** macierz - macierz z ktorej ma zostac wykreslony wiersz oraz kolumna
 * @param int liczba_wierszy - liczba wierszy w macierzy
 * @param int liczba_kolumn - liczba kolumn w macierzy
 * @param int wykreslany_wiersz - wiersz ktory wykreslamy
 * @param int wykreslana_kolumna - kolumna ktora wykresalmy
 * wykresla wiersz oraz kolumne aby obliczyc rozwiniecie La placa
 * @return tmp2Macierz - macierz po wykresleniu wiersza oraz kolumny
 */
int** macierzPoWykresleniu(int**,int,int,int,int);
/**
 * determinantMatrix
 * @param int** macierz - macierz z ktorej ma zostac obliczony wyznacznik
 * @param int liczba_wierszy - liczba wierszy w macierzy z ktorej liczymy wyznacznik
 * @param int liczba_kolumn - liczba kolumn w macierzy z ktorej liczymy wyznacznik
 * wykresla wiersz i kolumne z macierzy glownej
 * @return int wynik - wyznacznik macierzy
 */
int determinantMatrix(int**,int,int);
/**
 *  matrixIsDiagonal
 * @param int** macierz - macierz do sprawdzenia czy jest diagonalna
 * @param int liczba_wierszy - liczba wierszy w macierzy
 * @param int liczba kolumn w macierzy
 * liczy wyznacznik z macierzy
 * @return true - macierz jest diagonalna, false - nie jest diagonalna
 */
bool matrixIsDiagonal(int **,int, int);//zrobione
/**
 * swap
 * @param int* liczba_a - pierwsza liczba
 * @param int* liczba_b - druga liczba
 * zamienia liczby miejscami
 */
void swap(int*,int*);//zrobione
/**
 *sortRow
 * @param int* tab - tablica do posortowania
 * @int liczba pozycji w tablicy
 * sortowanie tablicy
 */
void sortRow(int*,int);//zrobione
/**
 * sortRowInMatrix
 * @param int ** macierz - macierz do sortowania
 * @param int liczba_wierszy
 * @param int liczba_kolumn
 * sortuje macierz wierszami
 */
void sortRowInMatrix(int**,int,int );//zrobione
/**
 * help wyswietla pomoc, dokumentacje
 */
void help();

/**
 * createMatrix_D
 * @param int liczba_wierszy - liczba wierszy w macierzy
 * @param int liczba_kolumn - liczba kolumna w macierzy
 * tworzy macierz typu double
 * return double** macierz - macierz o wymiarach(liczba_wierszy x liczba_kolumn
 * **/
double ** createMatrix_D(int, int);//zrobione
/**
 * printMatrix
 * @param dobule ** macierz do uzupelnienia
 * @param int liczba_wierszy - liczba wierszy w macierzy
 * @param int liczba_kolumn - liczba kolumna w macierzy
 * wyswietla macierz
 * **/
void printMatrix(double **,int,int );//zrobione
/**
 * printMatrix
 * @param double ** macierz do uzupelnienia
 * @param int liczba_wierszy - liczba wierszy w macierzy
 * @param int liczba_kolumn - liczba kolumna w macierzy
 * uzupelnia macierz liczbami
 * **/
void matrixComplement(double **,int,int);//zrobione
/**
 * addMatrix
 * @param double ** macierz_a
 * @param double ** macierz_b
 * @param int liczba_wierszy - liczba wierszy w macierzach
 * @param int liczba_kolumn - liczba kolumna w macierzach
 * dodaje macierze do siebie
 * @return zwraca macierz_c wynik dodawania
 * **/
double ** addMatrix(double **,double **,int,int);//zrobione
/**
 * substractMatrix
 * @param double ** macierz_a
 * @param dobule ** macierz_b
 * @param int liczba_wierszy - liczba wierszy w macierzach
 * @param int liczba_kolumn - liczba kolumna w macierzach
 * odejmuje macierze od siebie
 * @return zwraca macierz_c wynik odejmowania
 * **/
double **substractMatrix(double **, double **, int, int);//zrobione
/**
 * multiplyMatrix
 * @param double ** macierz_a
 * @param double ** macierz_b
 * @param int liczba_wierszy - liczba wierszy w macierzach
 * @param int liczba_kolumn - liczba kolumna w macierzach
 * mnozy macierze
 * @return zwraca macierz_c wynik mnozenia
 * **/
double ** multiplyMatrix(double **, double **, int, int, int);//zrobione
/**
 * multiplyMatrixByScalar
 * @param double ** macierz_a - macierz do pomnozenia przez skalar
 * @param double skalar
 * @param int liczba_wierszy - liczba wierszy w macierzy
 * @param int liczba_kolumn - liczba kolumna w macierzy
 * mnozy macierz przez skalar
 * @return zwraca macierz_c wynik mnozenia macierzy_a przez skalar
 * **/
double ** multiplyByScalar(double**, int, int, double);//zrobione
/**
 * transpozeMatrix
 * @param double ** macierz_a - macierz do tranzpozycji
 * @param int liczba_wierszy - liczba wierszy w macierzy
 * @param int liczba_kolumn - liczba kolumna w macierzy
 * transponuje macierz
 * @return zwraca macierz_c po tranzpozycji macierzy_a
 * **/
double ** transpozeMatrix(double**,int,int);//zrobione
/**
 * powerMatrix
 * @param double ** macierz_a - macierz do spotegowania
 * @param int liczba_wierszy - liczba wierszy w macierzy
 * @param int liczba_kolumn - liczba kolumna w macierzy
 * @param unsigned wykĹ‚adnik potegi
 * podnosi macierz do potegi
 * @return zwraca macierz_c wynik potegowania
 * **/
double ** powerMatrix(double**, int, int, unsigned int);
/**
 * macierzPoWykresleniu
 * @param double ** macierz - macierz z ktorej ma zostac wykreslony wiersz oraz kolumna
 * @param int liczba_wierszy - liczba wierszy w macierzy
 * @param int liczba_kolumn - liczba kolumn w macierzy
 * @param int wykreslany_wiersz - wiersz ktory wykreslamy
 * @param int wykreslana_kolumna - kolumna ktora wykresalmy
 * wykresla wiersz oraz kolumne aby obliczyc rozwiniecie La placa
 * @return tmp2Macierz - macierz po wykresleniu wiersza oraz kolumny
 */
double ** macierzPoWykresleniu(double**,int,int,int,int);
/**
 * determinantMatrix
 * @param double** macierz - macierz z ktorej ma zostac obliczony wyznacznik
 * @param int liczba_wierszy - liczba wierszy w macierzy z ktorej liczymy wyznacznik
 * @param int liczba_kolumn - liczba kolumn w macierzy z ktorej liczymy wyznacznik
 * oblicza wyznacznik macierzy
 * @return int wynik - wyznacznik macierzy
 */
double determinantMatrix(double**, int, int);
/**
 *  matrixIsDiagonal
 * @param dobule** macierz - macierz do sprawdzenia czy jest diagonalna
 * @param int liczba_wierszy - liczba wierszy w macierzy
 * @param int liczba kolumn w macierzy
 * sprawdza czy macierz jest diagonalna
 * @return true - macierz jest diagonalna, false - nie jest diagonalna
 */
bool matrixIsDiagonal(double **,int, int);//zrobione
/**
 * swap
 * @param double* liczba_a - pierwsza liczba
 * @param double* liczba_b - druga liczba
 * zamienia liczby miejscami
 */
void swap(double*,double*);//zrobione
/**
 *sortRow
 * @param dobule* tab - tablica do posortowania
 * @int liczba pozycji w tablicy
 * sortowanie tablicy
 */
void sortRow(double*,int);//zrobione
/**
 * sortRowInMatrix
 * @param double ** macierz - macierz do sortowania
 * @param int liczba_wierszy
 * @param int liczba_kolumn
 * sortuje macierz wierszami
 */
void sortRowInMatrix(double**,int,int );//zrobione

#endif //JIPP2_LIB_H