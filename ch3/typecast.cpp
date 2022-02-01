// typecast.cpp -- wymuszanie zmian typu
#include <iostream>
int main(){
    using namespace std;
    int auks, bats, coots;

    // poniższa instrukcja dodaje wartości jako double, 
    // następnie konwertuje wynik jako int
    auks = 19.99 + 11.99;

    // te instrukcje dodaja wartosci jako int
    bats = (int) 19.99 + (int) 11.99;   // stara skladnia C
    coots = int (19.99) + int (11.99);  // nowa skladnia C++
    cout << "auks = " << auks << ", bats = " << bats;
    cout << ", coots = " << coots << endl;

    char ch = 'Z';
    cout << "Kod odpowiadajacy znaki " << ch << " to "; // pokaz jako char
    cout << int(ch) << endl;
    cout << "Tak, ten kod to ";
    cout << static_cast<int>(ch) << endl;
    return 0;
}