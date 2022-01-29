// carrots.cpp -- program przetwarzajacy jedzenie
#include <iostream>
int main(){

    using namespace std;

    int carrots;    // deklaracja zmiennej int

    carrots = 25;   // przypisanie wartosci do zmiennej
    cout << "Mam ";
    cout << carrots;
    cout << " marchewek.";
    cout << endl;
    carrots = carrots - 1; // modyfikacja zmiennej
    cout << "Chrum, chrum, chrum. Teraz mam " << carrots << " marchewki." << endl;

    return 0;

}