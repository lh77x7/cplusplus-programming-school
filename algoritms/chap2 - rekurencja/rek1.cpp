#include <iostream>

using namespace std;

/* deklaracja */
const int n = 10;
int tab[n] = {1,2,3,2,-7, 44, 5,1,0, -3};

/* left, right - lewa i prawa granica obszaru poszukiwań
tab - tablica, x - wartość do odnalezienia
*/
void szukaj(int tab[n], int left, int right, int x)
{
    if(left > right)
        cout << "Element " << x << " nie został znaleziony\n";
    else
        szukaj(tab, left + 1, right, x);
}