// pointer.cpp -- nasza pierwsza zmienna wskaznikowa
#include <iostream>
int main(){
    using namespace std;
    int updates = 6;    // deklaracja zmiennej
    int *p_updates; // deklaracja wskaznika na int
    
    p_updates = &updates;   // przypisanie wskaznikowi adresu int
    // pokazanie wartosc na 2 sposoby
    cout << "wartosci: updates = " << updates;
    cout << ", *p_updates = " << *p_updates << endl;

    // pokazanie adresu na 2 sposoby
    cout << "adres = &updates" << &updates;
    cout << ", p_updates = " << p_updates << endl;
    return 0;
}