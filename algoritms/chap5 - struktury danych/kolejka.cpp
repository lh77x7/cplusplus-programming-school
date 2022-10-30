#include <iostream>
#include "kolejka.h"

using std::endl;
using std::cout;

char *tab[] = {"Kowalska", "Fronczak", "Becki", "Pigwa"};

int main()
{
    FIFO <char *> kolejka(5);   // kolejka 5-osobowa

    for(int i = 0; i < 4; i++)
        kolejka.wstaw(tab[i]);
    for(int i = 0; i < 5; i++)
    {
        char *s;
        int res = kolejka.obsluz(s);
        if(res == 1)
            cout << "Obsluzony zostal klient: " << s << endl;
        else 
            cout << "Kolejka pusta !\n";
    }
}

