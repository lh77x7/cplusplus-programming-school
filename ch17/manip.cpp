// manip.cpp -- stosowanie manipulatorów formatu
#include <iostream>

int main()
{
    using namespace std;
    cout << "Podaj liczbe calkowita: ";
    int n;
    cin >> n;

    cout << "n       n*n\n";
    cout << n << "      " << n * n << "(dziesietnie)\n";
    // ustaw tryb szesnastkowy
    cout << hex;
    cout << n << "      ";
    cout << n * n << "(szesnastkowo)\n";

    // ustaw tryb osemkowy
    cout << oct << n << "      " << n * n << "(osemkowo)\n";

    // alternatywny sposob wywolania manipulatora
    dec(cout);
    cout << n << "      " << n * n << "(dziesietnie)"; 

    return 0;
}