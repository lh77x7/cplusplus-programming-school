// usedma.cpp -- dziedzicenie, funkcje zaprzyjaźnione i dynamiczny przydział pamięci
// kompilować z plikiem dma.cpp
#include <iostream>
#include "dma.h"
int main()
{
    using std::cout;
    using std::endl;

    baseDMA shirt("Portabelly", 8);
    lacksDMA balloon("czerwony", "Blimpo", 4);
    hasDMA map("Merkator", "Buffalo Keys", 5);
    cout << "Wypisanie obiektu baseDMA:\n";
    cout << shirt << endl;
    cout << "Wypisanie obiektu lacksDMA:\n";
    cout << balloon << endl;
    cout << "Wypisanie obiektu hasDMA:\n";
    cout << map << endl;
    lacksDMA balloon2(balloon);
    cout << "Wynik kopiowania lacksDMA:\n";
    cout << balloon2 << endl;
    hasDMA map2;
    map2 = map;
    cout << "Wynik przypisania hasDMA:\n";
    cout << map2 << endl;

    return 0;
}