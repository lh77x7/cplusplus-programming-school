// bondini.cpp -- uzycie znaków specjalnych
#include <iostream>
int main(){
    using namespace std;
    cout << "\aOperacja\"HyperHype\" zostala uruchomiona!\n";
    cout << "Podaj swoj kod agenta:_______________\b\b\b\b\b\b\b\b";
    long code;
    cin >> code;
    cout << "\aPodales " << code << "...\n";
    cout << "\aKod poprawny! Prosze realizowac plan Z3!";
    return 0;
}