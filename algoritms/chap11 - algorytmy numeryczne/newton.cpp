#include <iostream>

using std::cout;
using std::endl;

const double epsilon = 0.0001;

double f(double x)
{
    return 3 * x * x - 2;   // funkcja f(x) = 3x^2 - 2
}

double fp(double x) // pochodna f'(x) = (3x^2 - 2) = 6 * x
{
    return 6 * x;
}

double zero(double x0, double (*f)(double), double(*fp)(double))
{
    if(f(x0)< epsilon)
        return x0;
    else
        return zero(x0 - f(x0)/fp(x0), f, fp);
}

int main()
{
    cout << zero(1, f, fp) << endl; // wynik = 0,816497
}
