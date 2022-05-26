// iomanip.cpp -- stosowanie manipulatorów z pliku iomanip
// niektóre systemy(kompilatory) mogą wymagać jawnego dołączenia biblioteki matematycznej
#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{
    using namespace std;
    // użyj manipulatorów standardowych
    cout << fixed << right;

    // użyj manipulatorów z pliku iomanip
    cout << setw(6) << "N" << setw(20) << "Pierw. kwadratowy"
         << setw(27) << "Pierw. czwartego stopnia\n";
    
    double root;
    for(int n = 10; n <= 100; n += 10)
    {
        root = sqrt(double(n));
        cout << setw(6) << setfill('.') << n << setfill(' ')
             << setw(14) << setprecision(3) << root  
             << setw(23) << setprecision(4) << sqrt(root)
             << endl;
    }

    return 0;
}