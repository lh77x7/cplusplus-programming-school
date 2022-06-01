// callable.cpp -- typy funkcyjne a szablony
#include "somedefs.h"
#include <iostream>

double dub(double x) {return 2.0*x;}
double square(double x) {return x*x;}

int main()
{
    using std::cout;
    using std::endl;

    double y = 1.21;
    cout << "Wskaznik do funkcji dub:\n";
    cout << " " << use_f(y, dub) << endl;
    cout << "Wskaznik do funkcji square:\n";
    cout << " " << use_f(y, square) << endl;
    cout << "Obiekt funkcyjny Fp:\n";
    cout << " " << use_f(y, Fp(5.0)) << endl;
    cout << "Obiekt funkcyjny Fq:\n";
    cout << " " << use_f(y, Fq(5.0)) << endl;
    cout << "Wyrazenie lambda 1:\n";
    cout << " " << use_f(y, [](double u) {return u*u;}) << endl;
    cout << "Wyrazenie lambda 2:\n";
    cout << " " << use_f(y, [](double u) {return u+u/2.0;}) << endl;

    return 0;
}