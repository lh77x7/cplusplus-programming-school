// instr2.cpp -- wczytywanie za pomoca getline nie tylko pojedynczych slow
#include <iostream>
int main(){
    using namespace std;
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    cout << "Podaj swoje imie:\n";
    cin.getline(name, ArSize);  // wczytuje dane do znaku nowego wiersza
    cout << "Podaj swoj ulubiony deser:\n";
    cin.getline(dessert, ArSize);
    cout << "Mam dla ciebie " << dessert;
    cout << ", " << name << ".\n";
    return 0;
}