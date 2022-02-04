// instr1.cpp -- odczyt wiecej niz jednego lancucha
#include <iostream>
int main(){
    using namespace std;
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    cout  << "Podaj swoje imie:\n";
    cin >> name;
    cout << "Podaj swoj ulubiony desser:\n";
    cin >> dessert;
    cout << "Mam dla ciebie " << dessert;
    cout << ", " << name << ".\n";
    return 0;
}