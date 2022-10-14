#include <iostream>

using std::cout;
using std::endl;

int oblicz_wielomian1(int b, int w[], int rozm)
{
    int res = 0, pot = 1;
    for(int j = rozm - 1; j >= 0; j--)
    {
        res += pot * w[j];        // sumy czastkowe
        pot *= b;               // następna potęga b
    }
    return res;
}

int oblicz_wielomian2(int a, int w[], int rozm)
{
    int res = w[0];
    for(int j = 1; j < rozm; res = res * a + w[j++]);
    return res;
}

const int n = 5;                    // stopień wielomianu

int main()
{
    int w[n] = {1, 4, -2, 0, 7};    // współczynniki wielomianu
    cout << oblicz_wielomian1(2, w, n) << endl;
    cout << oblicz_wielomian2(2, w, n) << endl;
}