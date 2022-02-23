// twofile2.cpp -- zmienne z łączeniem zewnętrznym i wewętrznym
#include <iostream>
extern int tom; // zmienna tom zdefiniowana gdzie indziej
static int dick = 10;   // definicja zmiennej zewnętrznej
int harry = 200;    // bez konfliktu z wersją z pliku twofile1

void remote_access()
{
    using namespace std;
    cout << "Funkcja remote_access() zwraca nastepujace adresy:\n";
    cout << &tom << " = &tom, " << &dick << " = &dick, ";
    cout << &harry << " = &harry\n";
}