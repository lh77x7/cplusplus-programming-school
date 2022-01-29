// getinfo.cpp -- wejście i wyjście
#include <iostream>

int main(){

    using namespace std;

    int carrots;

    cout << "Ile masz marchewek?" << endl;
    cin >> carrots; // wczytywanie C++
    cout << "Prosze, oto jeszcze dwie. ";
    carrots = carrots + 2;
    // w nastepnym wierszu sklejam wyniki
    cout << "Teraz masz " << carrots << " marchewek." << endl;
    return 0;
}