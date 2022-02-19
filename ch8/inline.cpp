// inline.cpp -- uzycie funkcji inline
#include <iostream>

// definicja funkcji inline
inline double square (double x) { return x * x; }

int main(){
    using namespace std;
    double a, b;
    double c = 13.0;

    a = square(5.0);
    b = square(4.5 + 7.5);  // można przekazać wyrażenie
    cout << "a = " << a << ", b = " << b << "\n";
    cout << "c = " << c;
    cout << ", c kwadrat = " << square(c++) << "\n";
    cout << "Teraz c = " << c << endl;
    return 0;
}