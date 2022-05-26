// setf2.cpp -- sterowanie formatowaniem za pomocą funkcji setf() z 2 argumentami
#include <iostream>
#include <cmath>

int main()
{
    using namespace std;
    // zastosuj wyróżnienie z lewej, pokaż znak plus, pokaż końcowe zera, użyj precyzji 3
    cout.setf(ios::left, ios_base::adjustfield);
    cout.setf(ios_base::showpoint);
    cout.precision(3);
    // użyj notacji naukowej i zapamiętaj dotychczasowe ustawienie formatu
    ios_base::fmtflags old = cout.setf(ios_base::scientific, ios_base::floatfield);

    cout << "Wyrownanie do lewej:\n";
    long n;
    for(n = 1; n <= 41; n+= 10)
    {
        cout.width(4);
        cout << n << "|";
        cout.width(12);
        cout << sqrt(double(n)) << "|\n";
    }

    // zmień na wyrównanie wewnętrzne
    cout.setf(ios_base::internal, ios_base::adjustfield);
    // przywróć domyślny styl wyświetlania liczb zmiennoprzecinkowych
    cout.setf(old, ios_base::floatfield);

    cout << "Wyrownanie wewnetrzne:\n";
    for(n = 1; n <= 41; n++)
    {
        cout.width(4);
        cout << n << "|";
        cout.width(12);
        cout << sqrt(double(n)) << "|\n";
    }

    // zastosuj wyrówanie do prawej, użyj notacji stałoprzecinkowej
    cout.setf(ios_base::right, ios_base::adjustfield);
    cout.setf(ios_base::fixed, ios_base::floatfield);
    cout << "Wyrownanie do prawej:\n";
    for(n = 1; n <= 41; n++)
    {
        cout.width(4);
        cout << n << "|";
        cout.width(12);
        cout << sqrt(double(n)) << "|\n";
    }

    return 0;
}