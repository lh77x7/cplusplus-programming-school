#include <iostream>
#include "sterta.h"

using std::cout;
using std::endl;

int tab[14] = {12, 3, -12, 9, 34, 23, 1, 81, 45, 17, 9, 23, 11, 4};
int main()
{
    Sterta s(14);
    for(int i = 0; i < 14; i++)
        s.wstaw(tab[i]);
    for(int i = 14; i > 0; i--)
        tab[i - 1] = s.obsluz();
    cout << "Tablica posortowana:\n";
    for(int i = 0; i < 14; i++)
        cout << tab[i] << "  ";
}