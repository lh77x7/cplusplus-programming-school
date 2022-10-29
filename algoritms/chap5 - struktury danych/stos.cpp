#include "stos.h"
#include <iostream>

using std::cout;
using std::endl;

char* tab1[3] = {"Ala", "ma", "kota"};
float tab2[3] = {3.14, 2.12, 100};

int main()
{
    // deklarujemy pierwszy stos do przechowywania tekstów
    STOS <char*> s1;
    // deklarujemy drugi stos do przechowywania liczb
    STOS <float> s2;
    cout << "Odkladamy na pierwszy stos: ";
    for(int i = 0; i < 3; i++)
    {
        cout << tab1[i] << "  ";
        s1.push(tab1[i]);
    }
    cout << "\nOdkladam na drugi stos: ";
    for(int i = 0; i < 3; i++)
    {
        cout << tab2[i] << "  ";
        s2.push(tab2[i]);
    }
    for(int i = 0; i < 3; i++)
    {
        char *z;
        float f;
        s1.pop(z);
        s2.pop(f);
        cout << "\nZdejmuje parami dane ze stosow: (" << z << ", " << f << ")\n";        
    }
}