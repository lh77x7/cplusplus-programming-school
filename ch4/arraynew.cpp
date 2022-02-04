// arraynew.cpp -- uzycie operatora new do tablicy
#include <iostream>
int main(){
    using namespace std;
    double *p3 = new double [3];    // miejsce na 3 wartości double
    p3[0] = 0.2;
    p3[1] = 0.5;
    p3[2] = 0.8;
    cout << "p3[0] jest pod adresem " << p3 << endl;
    cout << "*p3[1] to " << p3[1] << endl;
    p3 = p3 + 1; // zwiekszenie wskaznika
    cout << "Teraz p3[0] to " << p3[0] << endl;
    cout << "p3[1] to " << p3[1] << endl;
    p3 = p3 - 1;    // znowu wskazuje poczatek tablicy
    // chce sie upewnic
    cout << "Obecny adres p3: " << p3 << "(powinnien wskazac poczatek tablicy)" <<  endl;
    delete []p3;    // zwalniamy pamiec
    return 0;
}