// instr3.cpp -- wczytywanie wiecej niz jednego slowa za pomoca get().get()
#include <iostream>
int main(){
    using namespace std;
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    cout << "Podaj swoje imie:\n";
    cin.get(name, ArSize).get();    // wczytywanie wiersza i znaku nowego wiersza
    cout << "Podaj swoj ulubiony deser:\n";
    cin.get(dessert, ArSize).get();
    cout << "Mam dla ciebie " << dessert;
    cout << ", " << name << ".\n";
    return 0;
}