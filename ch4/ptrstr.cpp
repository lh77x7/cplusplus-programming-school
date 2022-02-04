// ptrstr.cpp -- wskazniki i lancuchy znakowe
#include <iostream>
#include <cstring>
int main(){
    using namespace std;
    char animal[20] = "niedzwiedz"; // zmienna animal zawiera lancuch niedzwiedz
    const char * bird = "myszolow"; // stala bird zawiera adres lancuch 
    char * ps;  // niezainicjalizowane

    cout << animal << " oraz "; // wyswietl niedzwiedzia
    cout << bird << endl;   // wyswietl myszolowa
    cout << ps << endl; // moze pokazac smieci, moze zawiesic program

    cout << "Podaj rodzaj zwierzecia: ";
    cin >> animal;  // ok, o ile < 20 znakow

    ps = animal;    // ustawienie ps na łańcuch
    cout << ps << "i!\n";   // ok, to samo co uzycie animal
    cout << "Przed uzyciem strcpy():\n";
    cout << animal << " pod asresem " << (int *) animal << endl;
    cout << ps << " pod adresem " << (int *) ps << endl;

    ps = new char[strlen(animal) + 1];  // alokujemy nową pamięć
    strcpy(ps, animal); // kopiowanie łańcucha w nowe miejsce
    cout << "Po uzyciu strcpy():\n";
    cout << animal << " pod adresem " << (int *) animal << endl;
    cout << ps << " pod adresem " << (int *) ps << endl;
    delete [] ps;
    return 0;
}