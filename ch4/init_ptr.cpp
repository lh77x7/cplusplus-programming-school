// init_ptr.cpp -- inicjalizacja wskaznika
#include <iostream>
int main(){
    using namespace std;
    int higgens = 5;
    int * pt = &higgens;

    cout << "Wartosc zmiennej higgens = " << higgens
         << "; adres zmiennej higgens = " << &higgens << endl;

    cout << "Wartosc *pt = " << *pt
         << "; wartosc pt = " << pt << endl;
    return 0;
}