// strin.cpp -- odczyt formatowania z obiektu typu string
#include <iostream>
#include <sstream>
#include <string>
int main()
{
    using namespace std;
    string lit = "Dzien byl ciemny i burzowy, lecz "
            " ksiezyc w pelni swieci zywym blaskiem.";
    istringstream instr(lit);   // użyj bufora do operacji wejścia
    string word;
    while(instr >> word)    // odczytanie po jednym słowie naraz
        cout << word << endl;
    
    return 0;
}