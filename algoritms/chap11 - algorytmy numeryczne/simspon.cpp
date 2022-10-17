#include <iostream>

using std::endl;
using std::cout;

const int n = 4;    // ilość punktów = 2n + 1
// funkcja przykładowa x^2 - 3x + 1 w przedziale [-5, 3]
// postać tabelaryczna
double f[2 * n + 1] = {41, 29, 19, 11, 5, 1, -1, -1, 1};
double simpson(double f[2 * n + 1], double a, double b)
// funkcja zwaraca całkę funkcji f(x) w przedziale [a, b],
// której wartości są podane tabelarycznie w 2n + 1 punktach
{
    double s = 0, h = (b - a) / (2.0 * n);
    for(int i = 0; i < 2 * n; i += 2) // skok co 2 punkty!
        s += h*(f[i] + 4 * f[i + 1] + f[i + 2]) / 3.0;
    return s;
}

// postać analiczyna funkcji
double fun(double x)
{
    return x * x + 3 * x + 1;   // f(x) = x^2 + 3 * x + 1;
}

double simpson_f(double(*f)(double), // wskaźnik do f(x))
double a, double b, int N)
// funkcja zwaraca całkę znanej w postaci wzoru 
// funkcji f(x) w przedziale [a, b],
// N - ilość przedziałów
{
    double s = 0, h = (b - a) / (double) N;
    for(int i = 1; i < N; i++)
        s += h * (f(a+(i - 1) * h) + 4 * f(a - h/2.0 + i * h) + f(a + i * h)) / 6.0;
    return s;
}

int main()
{
    cout << "Wartosc calki = " << simpson(f, -5, 3) << endl;
    cout << "Wartosc calki = " << simpson_f(fun, -5, 3, 8) << endl; 
}