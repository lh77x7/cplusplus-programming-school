// newstrct.cpp -- operator new i struktury
#include <iostream>
struct inflatable { // deklaracja struktury
    char name[20];
    float volume;
    double price;
};

int main(){
    using namespace std;
    inflatable * ps = new inflatable; // alokacja pamieci na strukture
    cout << "Podaj nazwe dmuchanej zabawki: ";
    cin.get(ps->name, 20);  // 1 metoda dostepu do pól
    cout << "Podaj objetosc w stopach szesciennych: ";
    cin >> (*ps).volume;    // 2 metoda dostepu do pól
    cout << "Podaj cene (zl): ";
    cin >> ps->price;
    cout << "Nazwa: " << (*ps).name << endl; // metoda 2
    cout << "Objetosc: " << ps->volume << " stop szesciennych\n";   // metoda 1
    cout << "Cena: " << ps->price << " zl" << endl; // metoda 1
    delete ps;  // zwolnienie pamieci
    return 0;
}