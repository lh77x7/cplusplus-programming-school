// external.cpp -- zmienne zewnętrzne
// kompilowanie lacznie z support.cpp
#include <iostream>
using namespace std;
// zmienna zewnętrzna:
double warming = 0.3;   // definicja zmiennej warming
// prototypy funkcji:
void update(double dt);
void local();

int main()  // korzysta ze zmiennej globalnej
{
    cout << "Globalne ocieplenie wynosi " << warming << " stopni.\n";
    update(0.1);    // wywołanie funkcji modyfikujacej zmienną globalną
    cout << "Globalne ocieplenie wynosi " << warming << " stopni.\n";
    local();    // wywołanie funkcji korzystającej ze zmiennej lokalnej
    cout << "Globalne ocieplenie wynosi " << warming << " stopni.\n";
    return 0;
}