// assign.cpp -- konwersja typu przy inicjalizacji
#include <iostream>
int main(){
    using namespace std;
    cout.setf(ios_base::fixed, ios_base::floatfield);
    float tree = 3; // konwersja int na float
    int guess = 3.9832; // konwersja double na int
    int debt = 7.2e12;  // wynik nieokreslony
    cout << "tree = " << tree << endl;
    cout << "guess = " << guess << endl;
    cout << "debt = " << debt << endl;
    return 0;
}