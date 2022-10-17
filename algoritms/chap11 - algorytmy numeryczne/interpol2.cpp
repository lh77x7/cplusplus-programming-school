#include <iostream>

using std::endl;
using std::cout;

const int n = 5;    // rząd obliczanych różnic centralnych wynosi n-1
double t[n][n+1] =
{
    {0.8, 4.80},    // pary (x[i], y[i]) dla y = 5x^2 + 2x
    {0.9, 5.85},    // zwróć uwagę na sposób inicjacji
    {1, 7.00},      // tablicy: wpisane są dwie pierwsze
    {1.1, 8.25},    // kolumny, a nie wiersze!
    {1.2, 9,60}
};

struct POCHODNE {double f1, f2;};

POCHODNE striling(double t[n][n+1])
// funkcja zwraca wartości f'(z) i f''(z), gdzie z
// jest elementem centralnym: tutaj t[2][0], tablica
// 't' musi być uprzednio centralnie zainicjowana,
// poprawność tej konstrukcji nie jest sprawdzana!
{
    POCHODNE res;
    double h = (t[4][0] - t[0][0])/ (double)(n-1);  // krok 'x'
    for(int j = 2; j <= n; j++)
        for(int i = 0; i <= n - j; i++)
            t[i][j] = t[i + 1][j-1] - t[i][j-1];
    res.f1 = ((t[1][2] + t[2][2]) / 2.0 - (t[0][4] + t[1][4]) / 12.0) / h;
    res.f2 = (t[1][3] - t[0][5]/ 12.0) / (h * h);
    return res;
}

int main()
{
    POCHODNE res = striling(t);
    cout << "f' = " << res.f1 << ", f'' = " << res.f2 << endl;
    return 0;
}