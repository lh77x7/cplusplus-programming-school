// vegnews.cpp -- test działania operatorów new i delete w klasach
// kompilować ze strngbad.cpp
#include <iostream>
using std::cout;
#include "strngbad.h"

void callme1(StringBad &);  // obiekt przekazywany przez referencję
void callme2(StringBad);    // obiekt przekazywany przez wartość

int main()
{
    using std::endl;
    {
        cout << "Zaczynamy blok zewnetrzny.\n";
        StringBad headline1("Spiew skowronka - nowe zwrotki usypiaja?");
        StringBad headline2("Kogutom smierc");
        StringBad sports("Brzask wypada z ligi, skandal sedziowski");
        cout << headline1 << endl;
        cout << headline2 << endl;
        cout << sports << endl;
        callme1(headline1);
        cout << "Po funkcji callme1: " << headline1 << endl;
        callme2(headline2);
        cout << "Po funkcji callme2: " << headline2 << endl;
        cout << "Inicjalizacja obiektu ciagu innym obiektem:\n";
        StringBad sailor = sports;
        cout << "Z kraju: " << sailor << endl;
        cout << "Przypisanie obiektu do innego obiektu:\n";
        StringBad knot;
        knot = headline1;
        cout << "Ze swiata: " << knot << endl;
        cout << "Koniec bloku.\n"; 
    }
    cout << "Koniec main()\n";

    return 0;
}

void callme1(StringBad & rsb)
{
    cout << "Obiekt ciagu przekazany przez referencje:\n";
    cout << "   \"" << rsb << "\"\n";
}

void callme2(StringBad sb)
{
    cout << "Obiekt ciagu przekazany przez wartosc:\n";
    cout << "   \"" << sb << "\"\n"; 
}