// secref.cpp -- definiowanie i stosowanie funkcji
#include <iostream>
int main(){
    using namespace std;
    int rats = 101;
    int & rodents = rats; // rodents to referencja

    cout << "rats = " << rats;
    cout << ", rodents = " << rodents << endl;

    int bunnies = 50;
    rodents = bunnies;  // czy można zmienić referencję?
    cout << "bunnies = " << bunnies;
    cout << ", rats = " << rats;
    cout << ", rodents = " << rodents << endl;

    cout << "adres bunnies = " << &bunnies;
    cout << ", adres rodents = " << &rodents << endl;
    return 0;
}