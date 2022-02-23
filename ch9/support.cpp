// support.cpp -- stosowanie zmiennych zewnętrznych
// kompilować razem z external.cpp
#include <iostream>
extern double warming;  // deklaracja referencyjna zmiennej warming z innego pliku
// zmienna zewnetrzna:
//double warming = 0.3; // definicja zmiennej warming
// prototyp funkcji
void update(double dt);
void local();
using std::cout;

void update(double dt) // modyfikuje zmienną globalną
{
    extern double warming;  // opcjonalne powtórzenie deklaracji
    warming += dt;  // odwołanie do zmiennej globalnej warming
    cout << "Zwiekszam parametr ocieplenia do " << warming;
    cout << " stopni.\n";
}

void local()
{

    double warming = 0.8;   // nowa zmienna przesłania zmienną zewnętrzną

    cout << "Lokalne ocieplenie wynosi " << warming << " stopni.\n";
    // odwołanie do zmiennej globalnej za pomocą operatora zasięgu
    cout << "Ale globalnie ma wartosc " << ::warming;
    cout << " stopni.\n";
}