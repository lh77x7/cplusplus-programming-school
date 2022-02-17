// 7.1 - 7.10 - rozwiązania zadań z rodziału 7

/*

1 - DONE
2 - DONE
3 - DONE
4 - DONE
5 - DONE
6 - DONE
7 - NOT DONE
8 - DONE
9 - NOT DONE
10 - NOT DONE

*/

#include <iostream>
using namespace std;

struct pudlo
{
    char producent[40];
    float wysokosc;
    float szerokosc;
    float dlugosc;
    float objetosc;
} dane = 
{
    "Liderando.de",
    3,
    10,
    10,
    300
};

struct wydatki{
    double wydatkiMiesieczne;
};

const char *Snames[4] = 
{"Wiosna", "Lato", "Jesien", "Zima"};
const int MAX = 10;
const int Seasons = 4;

void zad1();
void zad2();
void zad3();
void zad4();
void zad5();
void zad6();
void zad7();
void zad8();
void zad9();
void zad10();
void showmenu();
double funHarmoniczna(double, double);
int wprowadzWyniki(double [], double);
void wyswietlWyniki(double [], double);
void sredniaWyniki(double [], double);
int fill_array(double [], double);
void show_array(double [], double);
void reverse_array(double [], double);
void wartosciStruktury(struct pudlo);
void ustawObjetosc(struct pudlo *);
long double probability1(unsigned, unsigned);
long double probability2(unsigned);
long long silnia(int);
double *fill_array2(double *, double *);
void show_array2(double *, double *);
void revalue2(double, double *, double *);
void fill1(double []);
void show1(double []);
void fill2(wydatki daneMies[]);
void show2(wydatki daneMies[]);

int main(){

    showmenu();
    int choice;
    cin >> choice;

    while(choice != 100)
    {
        switch (choice)
        {
        case 1:
            zad1();
            break;
        case 2:
            zad2();
            break;
        case 3:
            zad3();
            break;
        case 4:
            zad4();
            break;
        case 5:
            zad5();
            break;
        case 6:
            zad6();
            break;
        case 7:
            zad7();
            break;
        case 8:
            zad8();
            break;
        case 9:
            zad9();
            break;
        case 10:
            zad10();
            break; 
        case 100: 
            break;     
        default:
            cout << "Nie ma takiej opcji.\n";
            break;
        }
        showmenu();
        cin >> choice;
    }
    cout << "Koniec programu.\n";

    return 0;
}

void showmenu(){
    
    cout << "Wybierz od 1 do 10: \n";

}

void zad1() {

    double liczba1, liczba2, wynik;
    
    cout << "Podaj liczbe 1: "; cin >> liczba1;
    cout << "Podaj liczba 2: "; cin >> liczba2;
    while(liczba1 != 0 && liczba2 != 0) {
        wynik = funHarmoniczna(liczba1, liczba2);
        cout << "Srednia harmoniczna wynosi: " << wynik << endl;
        cout << "Podaj liczba1 i liczba2 <0 konczy>" << endl;
        cout << "Liczba 1: "; cin >> liczba1;
        cout << "Liczba 2: "; cin >> liczba2;
    }
    cout << "Koniec.\n";
}

void zad2() {
    
    double tablicaWynikow[MAX];
    int rozmiar = wprowadzWyniki(tablicaWynikow, MAX);
    
    wyswietlWyniki(tablicaWynikow, rozmiar);
    sredniaWyniki(tablicaWynikow, rozmiar);
}

void zad3() {
    
    pudlo adresStruktry; 
    
    wartosciStruktury(dane);
    ustawObjetosc(&adresStruktry);
}

/*

mnożenie  (5 z 47) * (1 z 27) wykracza poza zakres long long!

*/
void zad4() {

    double najwiekszaPuli, megaliczba, skreslenia;
    
    cout << "Podaj najwieksza liczbe, jak mozna wybrac, megaliczbe oraz\n"
        "liczbe skreslen:\n";
    while((cin >> najwiekszaPuli >> megaliczba >> skreslenia) && skreslenia <= najwiekszaPuli)
    {
        cout << "Szanse wygranej do jeden do ";
        long long int wynik = (long long)(probability1(najwiekszaPuli, skreslenia) * probability2(megaliczba));
        cout << wynik << endl;
        cout << "Chce sprawdzic wyniki do osobnych funkcji:\n";
        cout << "Prawdo. najwiekszej z puli do skreslen: " << probability1(najwiekszaPuli, skreslenia) << endl;
        cout << "Prawdo. megaliczby: " << probability2(megaliczba) << endl;
        long long sprawdzenie = (long long)(probability1(najwiekszaPuli, skreslenia) * probability2(megaliczba));
        cout << "Razem: " << sprawdzenie << endl;
        cout << "Podaj nastepne 3 liczby (q, aby zakonczyc): ";
    }
    cout << "Koniec!\n";
}

void zad5() {

    int liczba;
    
    cout << "Podaj liczbe: ";
    cin >> liczba;
    while(liczba > 0)
    {
        cout << "n! = " << silnia(liczba) << endl;
        cout << "Nastepna liczba: ";
        cin >> liczba;
    }
    cout << "Koniec.\n";
}

void zad6() {
    
    double tablicaWynikow[MAX];

    int rozmiar = fill_array(tablicaWynikow, MAX);
    show_array(tablicaWynikow, rozmiar);
    reverse_array(tablicaWynikow, rozmiar);

}

void zad7() {
    
    double tablica[MAX];

    double *ptr = fill_array2(tablica, tablica + MAX);
    show_array2(tablica, ptr);
    if(tablica)
    {
        cout << "Podaj czynnik zmiany wartosci: ";
        double factor;
        while(!(cin >> factor)) // nieliczbowa wartosc na wejsciu
        {
            cin.clear();
            while(cin.get() != '\n')
                continue;
            cout << "Niepoprawna wartosc; podaj liczbe: ";
        }
        revalue2(factor, tablica, ptr);
        show_array2(tablica, ptr);
    } 
    cout << "Gotowe.\n";
    cin.get();
    cin.get();
}

void zad8(){
    
    double wydatki1[4];
    struct wydatki wydatki2[4];

    // a)
    fill1(wydatki1);
    show1(wydatki1);

    cin.get();
    cin.get();

    cout << "Pora na wprowadzenie danych struktury: " << endl;
    // b)
    fill2(wydatki2);
    show2(wydatki2);

}

void zad9(){ 
    
}

void zad10(){
    
}

double funHarmoniczna(double x, double y){

    return (2.0 * x * y )/(x + y);

}

int wprowadzWyniki(double tablica[], double MAX){

    double temp;
    int i;

    for(i = 0; i < MAX; i++)
    {
        cout << "Podaj wynik numer "<< i + 1 << ": ";
        cin >> temp;
        if(!cin)    // bledne dane
        {
            cin.clear();
            while(cin.get() != '\n')
                continue;
            cout << "Bledne dane, wprowadzanie danych przerwane.\n";
            break;
        } else if (temp < 0)    // nakaz zakonczenia
            break;
        tablica[i] = temp;
    }
    return i; 
}

void wyswietlWyniki(double tablica[], double MAX){
    
    for(int i = 0; i < MAX; i++)
    {
        cout << tablica[i] << " ";
    }
    cout << endl;
}

void sredniaWyniki(double tablica[], double MAX){

    double suma = 0;
    
    for(int i = 0; i < MAX; i++)
    {
        suma += tablica[i];       
    }
    cout << "Srednia wynosi " << suma / MAX << endl;
}

void wartosciStruktury(struct pudlo dane){
    cout << "Wyswietlanie danych:\n";
    cout << "Producent: " << dane.producent << endl;
    cout << "Dlugosc: " << dane.dlugosc << endl;
    cout << "Szerokosc: " << dane.szerokosc << endl;
    cout << "Wysokosc: " << dane.wysokosc << endl;
    cout << "Objetosc: " << dane.objetosc << endl;
}

void ustawObjetosc(struct pudlo *pxyz){
    
    pxyz->objetosc = pxyz->dlugosc * pxyz->szerokosc * pxyz->wysokosc;

}

// x numberów z y wyborów
long double probability1(unsigned numery, unsigned wybor){
    
    long double wynik = 1.0;
    long double n;
    unsigned p;

    for(n = numery, p = wybor; p > 0; n--, p--)
        wynik = wynik * n / p;
    
    return wynik;
}

// 1 numer z x wyborów
long double probability2(unsigned numery){

    long double wynik;
    long double n = 1.0;
    unsigned p = 0.0;
    while(p++ < numery){
        wynik = wynik * n / p;
    }    
    
    return wynik; 
}

long long silnia(int numer){
    
    if(numer < 2){
        return 1;
    }
    
    return numer * silnia(numer - 1);
}

int fill_array(double tablica[], double MAX){
    
    double temp;
    int i;

    for(i = 0; i < MAX; i++)
    {
        cout << "Podaj wynik numer "<< i + 1 << ": ";
        cin >> temp;
        if(!cin)    // bledne dane
        {
            cin.clear();
            while(cin.get() != '\n')
                continue;
            cout << "Bledne dane, wprowadzanie danych przerwane.\n";
            break;
        } else if (temp < 0)    // nakaz zakonczenia
            break;
        tablica[i] = temp;
    }
    
    return i;

}

void show_array(double tablica[], double MAX){
    
    for(int i = 0; i < MAX; i++)
    {
        cout << tablica[i] << " ";
    }
    cout << endl;
}

void reverse_array(double tablica[], double MAX){

    for(int i = MAX; i > 0; i--)
    {
        cout << tablica[i-1] << " ";
    }
    cout << endl;

}

double *fill_array2(double *poczatek, double *koniec){
    
    double *adres;

    for(adres = poczatek; adres != koniec; adres++)
    {
        adres++;
    }

    return adres;

}

void show_array2(double *poczatek, double *wsk){
    
    const double *pt;
    
    for(pt = poczatek; pt != wsk; pt++)
        cout << pt << " " << endl;
}

void revalue2(double r, double *poczatek, double *wsk){
    
    double *pt;
    
    for(pt = poczatek; pt != wsk; pt++)
    {

    }
        //pt = pt * r;
}

void fill1(double tablica[]){
    
    for(int i = 0; i < Seasons; i++){
        cout << "Podaj wydatki za okres >> " << Snames[i] << "<< : ";
        cin >> tablica[i];
    }
}

void show1(double tablica[]){

    double total = 0.0;
    
    cout << "\nWYDATKI\n";
    for(int i = 0; i < Seasons; i++)
    {
        cout << Snames[i] << ": " << tablica[i] << " zl" << endl;
        total += tablica[i];
    }
    cout << "Laczne wydatki to: " << total << " zl" << endl;
}

void fill2(struct wydatki daneMies[]){

    for(int i = 0; i < Seasons; i++)
    {
        cout << Snames[i] << ": ";
        cin >> daneMies[i].wydatkiMiesieczne;    
    }
}

void show2(struct wydatki daneMies[]){

    double total = 0.0;

    cout << "\nWYDATKI\n";
    for(int i = 0; i < Seasons; i++)
    {
        cout << Snames[i] << ": " << daneMies[i].wydatkiMiesieczne << endl;
        total += daneMies[i].wydatkiMiesieczne;
    }
    cout << "Laczne wydatki miesieczne to: " << total << endl;
}
