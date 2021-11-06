#include "matrixLib/lib.h"

int ** createMatrix(int liczba_wierszy,int liczba_kolumn)
{
    int **macierz=new int * [liczba_wierszy];

    for(int i=0;i<liczba_wierszy;i++)
    {
        macierz[i]= new int [liczba_kolumn];
    }
    return macierz;
}//jest OK
void printMatrix(int** macierz,int liczba_wierszy, int liczba_kolumn)
{
    for(int i=0;i<liczba_wierszy;i++)
    { cout <<"| ";
        for(int j=0;j<liczba_kolumn;j++)
        {
            cout<<macierz[i][j]<<" "; //wyswietlanie macierzy
        }

        cout<<"|"<<endl;
    }

}// jest OK
void matrixComplement(int** macierz,int liczba_wierszy, int liczba_kolumn)
{
    for (int i = 0; i < liczba_wierszy; i++)
        for (int j = 0; j < liczba_kolumn; j++)
        {
            cout << "Podaj liczbe o polozeniu " << i << j << " w macierzy" << endl;
            cin >> macierz[i][j];
        }

} //Jest OK
int ** addMatrix(int ** macierz_a,int ** macierz_b,int liczba_wierszy_a,int liczba_kolumn_a)
{
    int **macierz_c= createMatrix(liczba_wierszy_a,liczba_kolumn_a);//tworzenie macierzy wynikowej
    for(int i=0;i<liczba_wierszy_a;i++)
        for(int j=0;j<liczba_kolumn_a;j++)
            macierz_c[i][j]=macierz_a[i][j]+macierz_b[i][j];

    return macierz_c;
}//jest OK
int ** substractMatrix(int ** macierz_a,int ** macierz_b,int liczba_wierszy_a,int liczba_kolumn_a,int liczba_wierszy_b,int liczba_kolumn_b){//jest OK

    int **macierz_c= createMatrix(liczba_wierszy_a,liczba_kolumn_a);//tworzenie macierzy wynikowej
    for(int i=0;i<liczba_wierszy_a;i++)
        for(int j=0;j<liczba_kolumn_a;j++)
            macierz_c[i][j]=macierz_a[i][j]-macierz_b[i][j];

    return macierz_c;
}//jest OK
int ** multiplyMatrix(int ** macierz_a,int ** macierz_b,int liczba_wierszy_a,int liczba_kolumn_a,int liczba_kolumn_b)
{
    int **macierz_wynik= createMatrix(liczba_wierszy_a,liczba_kolumn_b);
    for(int i=0;i<liczba_wierszy_a;i++)
        for(int j=0;j<liczba_kolumn_b;j++)
            macierz_wynik[i][j]=0;//zerwoanie macierzy
    for(int i=0;i<liczba_wierszy_a;i++) {
        for (int j = 0; j < liczba_kolumn_b; j++) {
            int wynik = 0;
            for (int k = 0; k < liczba_kolumn_a; k++)
                wynik = wynik + macierz_a[i][k] * macierz_b[k][j];
            macierz_wynik[i][j] = wynik;
        }
    }return macierz_wynik;
}//jest OK
int ** multiplyByScalar(int **macierz,int liczba_wierszy_a,int liczba_kolumn_a,int skalar)
{
    for(int i=0;i<liczba_wierszy_a;i++)
        for(int j=0;j<liczba_kolumn_a;j++)
        {
            macierz[i][j]=skalar*macierz[i][j];
        }
    return macierz;
}//jest OK
int ** transpozeMatrix(int **macierz,int liczba_wierszy_a,int liczba_kolumn_a)
{
    int **macierz_b=createMatrix(liczba_kolumn_a,liczba_wierszy_a);
    for(int i=0;i<liczba_wierszy_a;i++)
        for (int j = 0; j < liczba_kolumn_a; j++)
            macierz_b[j][i]=macierz[i][j];
    return macierz_b;
}//jest OK
int** powerMatrix(int **macierz,int liczba_wierszy,int liczba_kolumn,unsigned int stopien_potegi)
{
    int**tmp=createMatrix(liczba_wierszy,liczba_kolumn);
    tmp=macierz;
    for(int i=1;i<stopien_potegi;i++)
        macierz = multiplyMatrix(macierz,tmp,liczba_wierszy,liczba_kolumn,liczba_kolumn);
    return macierz;
}
int ** macierzPoWykresleniu(int** macierz,int liczba_wierszy,int liczba_kolumn,int wykreslany_wierszy,int wykreslana_kolumna){
    int a=0;
    int b=0;
    int **tmp2Macierz = createMatrix(liczba_wierszy-1,liczba_kolumn-1);
    for(int i=0;i<liczba_wierszy;i++){
        if(i!=wykreslany_wierszy){
            for(int j=0;j<liczba_kolumn;j++)
                if(j!=wykreslana_kolumna){
                    {
                        tmp2Macierz[a][b] = macierz[i][j];
                        //cout << tmp2Macierz[a][b]<< endl;      <-- do testĂłw
                        b++;
                        if(b==liczba_kolumn-1){
                            b=0;
                            a++;
                        }
                    }

                }
        }
    }
    return tmp2Macierz;
}//JEST OK
int determinantMatrix(int** macierz,int liczba_wierszy,int liczba_kolumn){
    if((liczba_wierszy<1)||(liczba_kolumn<1)){
        return -1;
    }
    if(liczba_wierszy!=liczba_kolumn)
    {
        cout<<"Macierz nie jest kwadratowa"<<endl;
        return -1;
    }
    int wynik=0;
    if((liczba_wierszy==1)&&(liczba_kolumn==1))
    {
        return wynik+macierz[0][0];
    }
    int** tmpMacierz = macierz;
    for(int j=0;j<liczba_kolumn;j++){
        int** tmp2Macierz = macierzPoWykresleniu(macierz,liczba_wierszy,liczba_kolumn,0,j);
        if(j%2==0){
            wynik = wynik + tmpMacierz[0][j] * determinantMatrix(tmp2Macierz,liczba_wierszy-1,liczba_kolumn-1);
        }
        else{
            wynik = wynik - tmpMacierz[0][j] * determinantMatrix(tmp2Macierz,liczba_wierszy-1,liczba_kolumn-1);
        }
    }
    return wynik;
}//JEST OK
bool matrixIsDiagonal(int **macierz,int liczba_wierszy, int liczba_kolumn)
{
    if(liczba_kolumn == liczba_wierszy)
        for(int i=0;i<liczba_wierszy;i++)
            for(int j=0;j<liczba_kolumn;j++)
                if(j!=i && macierz[i][j]!=0)
                    return false;
    return true;
}//jest OK
void swap(int *a,int *b)
{
    int tmp = *b;
    *b = *a;
    *a = tmp;
}//jest OK
void sortRow(int*tab,int n)
{
    for(int i=0;i<n;i++)
        for(int j=1;j<n-i;j++)
            if(tab[j-1]>tab[j])
                swap(tab[j-1], tab[j]);
}//jest OK
void sortRowInMatrix(int**macierz,int liczba_wierszy,int liczba_kolumn)
{
    int * tmp = new int[liczba_kolumn];
    for(int i=0;i<liczba_wierszy;i++)
    {
        for (int j = 0; j < liczba_kolumn; j++)
            tmp[j] = macierz[i][j];
        sortRow(tmp,liczba_kolumn);
        for (int j=0; j<liczba_kolumn;j++)
            macierz[i][j]=tmp[j];
    }
    delete [] tmp;
}//jest OK
void help()
{
    cout<<"\t\nProsty kalkulator dla macierzy o nastepujacych funkcjach\n"<<
        "[parametr okresla dzialanie] [typ danych int/double]\n\n"<<
        "1. addMatrix - dodawanie dwoch macierzy\n"<<
        "2. substractMatrix - odejmowanie dwoch macierzy\n"<<
        "3. multiplyMatrix - mnozenie macierzy przez macierz\n"<<
        "4. multiplyByScalar - mnozenie macierzy przez skalar\n"<<
        "5. transpozeMatrix - tranzspozycja macierzy\n"<<
        "6. powerMatrix - podnoszenie macierzy do potegi"
        "7. determinantMatrix  - obliczenie wyznacznika macierzy\n"<<
        "8. matrixIsDiagonal  - sprawdzenie czy macierz jest diagonalna\n"<<
        "9. sortRowsInMatrix - sortowanie macierzy wzgledem wierszy"<<endl;
}//JEST OK

//drugie funkcje dla double
double ** createMatrix_D(int liczba_wierszy,int liczba_kolumn)
{
    double **macierz= new double * [liczba_wierszy];

    for(int i=0;i<liczba_wierszy;i++)
    {
        macierz[i]= new double [liczba_kolumn];
    }
    return macierz;
}//jest OK
void printMatrix(double** macierz,int liczba_wierszy, int liczba_kolumn)
{
    for(int i=0;i<liczba_wierszy;i++)
    { cout <<"| ";
        for(int j=0;j<liczba_kolumn;j++)
        {
            cout<<macierz[i][j]<<" "; //wyswietlanie macierzy
        }

        cout<<"|"<<endl;
    }

}// jest OK
void matrixComplement(double** macierz,int liczba_wierszy, int liczba_kolumn)
{
    for (int i = 0; i < liczba_wierszy; i++)
        for (int j = 0; j < liczba_kolumn; j++)
        {
            cout << "Podaj liczbe o polozeniu " << i << j << " w macierzy" << endl;
            cin >> macierz[i][j];
        }

} //Jest OK
double ** addMatrix(double ** macierz_a,double ** macierz_b,int liczba_wierszy_a,int liczba_kolumn_a)
{
    double ** macierz_c= createMatrix_D(liczba_wierszy_a,liczba_kolumn_a);//tworzenie macierzy wynikowej
    for(int i=0;i<liczba_wierszy_a;i++)
        for(int j=0;j<liczba_kolumn_a;j++)
            macierz_c[i][j]=macierz_a[i][j]+macierz_b[i][j];

    return macierz_c;
}//jest OK
double ** substractMatrix(double ** macierz_a,double ** macierz_b,int liczba_wierszy_a,int liczba_kolumn_a){//jest OK

    double **macierz_c= createMatrix_D(liczba_wierszy_a,liczba_kolumn_a);//tworzenie macierzy wynikowej
    for(int i=0;i<liczba_wierszy_a;i++)
        for(int j=0;j<liczba_kolumn_a;j++)
            macierz_c[i][j]=macierz_a[i][j]-macierz_b[i][j];

    return macierz_c;
}//jest OK
double ** multiplyMatrix(double ** macierz_a,double ** macierz_b,int liczba_wierszy_a,int liczba_kolumn_a,int liczba_kolumn_b)
{
    double ** macierz_wynik= createMatrix_D(liczba_wierszy_a,liczba_kolumn_b);
    for(int i=0;i<liczba_wierszy_a;i++)
        for(int j=0;j<liczba_kolumn_b;j++)
            macierz_wynik[i][j]=0;//zerwoanie macierzy
    for(int i=0;i<liczba_wierszy_a;i++) {
        for (int j = 0; j < liczba_kolumn_b; j++) {
            for (int j = 0; j < liczba_kolumn_b; j++) {
                double wynik = 0;
                for (int k = 0; k < liczba_kolumn_a; k++)
                    wynik = wynik + macierz_a[i][k] * macierz_b[k][j];
                macierz_wynik[i][j] = wynik;
            }
        }
    }return macierz_wynik;
}//jest OK
double ** multiplyByScalar(double **macierz,int liczba_wierszy_a,int liczba_kolumn_a,double skalar)
{
    for(int i=0;i<liczba_wierszy_a;i++)
        for(int j=0;j<liczba_kolumn_a;j++)
        {
            macierz[i][j]=skalar*macierz[i][j];
        }
    return macierz;
}//jest OK
double ** transpozeMatrix(double **macierz,int liczba_wierszy_a,int liczba_kolumn_a)
{

    double **macierz_b=createMatrix_D(liczba_kolumn_a,liczba_wierszy_a);
    for(int i=0;i<liczba_wierszy_a;i++)
        for (int j = 0; j < liczba_kolumn_a; j++)
            macierz_b[j][i]=macierz[i][j];
    return macierz_b;
}//jest OK
double ** powerMatrix(double **macierz,int liczba_wierszy,int liczba_kolumn,unsigned stopien_potegi)
{
    double**tmp=createMatrix_D(liczba_wierszy,liczba_kolumn);
    tmp=macierz;
    for(int i=1;i<stopien_potegi;i++)
        macierz = multiplyMatrix(macierz,tmp,liczba_wierszy,liczba_kolumn,liczba_kolumn);
    return macierz;
}
double ** macierzPoWykresleniu(double** macierz,int liczba_wierszy,int liczba_kolumn,int wykreslany_wierszy,int wykreslana_kolumna)
{
    int a=0;
    int b=0;
    double **tmp2Macierz = createMatrix_D(liczba_wierszy-1,liczba_kolumn-1);
    for(int i=0;i<liczba_wierszy;i++){
        if(i!=wykreslany_wierszy){
            for(int j=0;j<liczba_kolumn;j++)
                if(j!=wykreslana_kolumna){
                    {
                        tmp2Macierz[a][b] = macierz[i][j];
                        //cout << tmp2Macierz[a][b]<< endl;      <-- do testĂłw
                        b++;
                        if(b==liczba_kolumn-1){
                            b=0;
                            a++;
                        }
                    }

                }
        }
    }
    return tmp2Macierz;
}//JEST OK
double determinantMatrix(double** macierz,int liczba_wierszy,int liczba_kolumn){
    if((liczba_wierszy<1)||(liczba_kolumn<1)){
        return -1;
    }
    if(liczba_wierszy!=liczba_kolumn)
    {
        cout<<"Macierz nie jest kwadratowa"<<endl;
        return -1;
    }
    double wynik=0;
    if((liczba_wierszy==1)&&(liczba_kolumn==1))
    {
        return wynik+macierz[0][0];
    }
    double** tmpMacierz = macierz;
    for(int j=0;j<liczba_kolumn;j++){
        double** tmp2Macierz = macierzPoWykresleniu(macierz,liczba_wierszy,liczba_kolumn,0,j);
        if(j%2==0){
            wynik = wynik + tmpMacierz[0][j] * determinantMatrix(tmp2Macierz,liczba_wierszy-1,liczba_kolumn-1);
        }
        else{
            wynik = wynik - tmpMacierz[0][j] * determinantMatrix(tmp2Macierz,liczba_wierszy-1,liczba_kolumn-1);
        }
    }
    return wynik;
}//JEST OK
bool matrixIsDiagonal(double **macierz,int liczba_wierszy, int liczba_kolumn)
{
    if(liczba_kolumn == liczba_wierszy)
        for(int i=0;i<liczba_wierszy;i++)
            for(int j=0;j<liczba_kolumn;j++)
                if(j!=i && macierz[i][j]!=0)
                    return false;
    return true;
}//jest OK
void swap(double *a,double *b)
{
    double tmp = *b;
    *b = *a;
    *a = tmp;
}//jest OK
void sortRow(double*tab,int n)
{
    for(int i=0;i<n;i++)
        for(int j=1;j<n-i;j++)
            if(tab[j-1]>tab[j])
                swap(tab[j-1], tab[j]);
}//jest OK
void sortRowInMatrix(double**macierz,int liczba_wierszy,int liczba_kolumn)
{
    double * tmp = new double[liczba_kolumn];
    for(int i=0;i<liczba_wierszy;i++)
    {
        for (int j = 0; j < liczba_kolumn; j++)
            tmp[j] = macierz[i][j];
        sortRow(tmp,liczba_kolumn);
        for (int j=0; j<liczba_kolumn;j++)
            macierz[i][j]=tmp[j];
    }
    delete [] tmp;
}//jest OK