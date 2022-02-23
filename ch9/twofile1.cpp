// twofile.cpp -- zmienne z łączeniem zawnętrznym i wewnętrznym
#include <iostream>  // przeznaczony do kompilacji z plikiem twofile2.cpp
int tom = 3;    // definicja zmiennej zewnetrznej
int dick = 30;  // definicja zmiennej zewnetrznej
static int harry = 300; // zmienna statyczna, łączenie wewnętrzne

// prototyp funkcji
void remote_access();

int main()
{
    using namespace std;
    cout << "Funkcja main() zwraca nastepujace adresy: \n";
    cout << &tom << " = &tom, " << &dick << " = &dick, ";
    cout << &harry << " = &harry\n";
    remote_access();
    return 0;
}