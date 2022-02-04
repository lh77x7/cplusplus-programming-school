// use_new.cpp -- uzycie operatora new
#include <iostream>
int main(){
    using namespace std;
    int nights = 100;
    int * pt = new int; // alokacja pamieci na int
    *pt = 1001; // zapis wartosci

    cout << "wartosc nights = ";
    cout << nights << ": polozenie " << &nights << endl;
    cout << "int ";
    cout << "wartosc = " << *pt << ": polozenie = " << pt << endl;

    double *pd = new double;    // alokacja pamiecie na double
    *pd = 10000001.0;   // zapisanie wartosci

    cout << "double: ";
    cout << "wartosc = " << *pd << ": polozenie = " << pd << endl;
    cout << "polozenie wskaznika pd: " << &pd << endl;
    cout << "wielkosc pt = " << sizeof(pt);
    cout << "wielkosc *pt = " << sizeof(*pt) << endl;
    cout << "wielkosc pd = " << sizeof pd;
    cout << ": wielkosc * pd = " << sizeof(*pd) << endl;
    return 0;
}