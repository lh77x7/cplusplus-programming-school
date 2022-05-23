// precise.cpp -- ustawienie precyzji
#include <iostream>

int main()
{
    using std::cout;
    float price1 = 20.40;
    float price2 = 1.9 + 8.0 / 9.0;

    cout << "\"Futrzaki\" kosztuja " << price1 << " zl!\n";
    cout << "\"Smoki\" kosztuja " << price2 << " zl!\n";

    cout.precision(2);
    cout << "\"Futrzaki\" kosztuja " << price1 << " zl!\n";
    cout << "\"Smoki\" kosztuja " << price2 << " zl!\n";

    return 0;
}