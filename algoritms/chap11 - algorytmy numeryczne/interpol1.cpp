#include <iostream>

using std::cout;
using std::endl;

const int n = 3;    // stopień wielomianu interpolującego

// wartość funkcji (y[i] = f(x[i]))
double x[n+1] = {3.0, 5.0, 6.0, 7.0};
double y[n+1] = {1.732, 2.236, 2.449, 2.646};

// jest to w istocie funkcja y = pierw.(x)

double interpol(double z, double x[n], double y[n])
// zwraca wartość funkcji w punkcie 'z' (czyli F[z])
{
    double wnz = 0, om = 1, w;
    for(int i = 0; i <= n; i++)
    {
        om = om * (z - x[i]);
        w = 1.0;
        for(int j = 0; j <= n; j++)
            if(i != j) w = w * (x[i] - x[j]);
        wnz = wnz + y[i] / (w * (z - x[i]));
    }
    return wnz = wnz * om;
}

int main()
{
    double z = 4.5;
    cout << "Wartosc funkcji pierwiastek(x) w punkcjie " << z << " wynosi " << interpol(z, x, y) << endl;
}