// firstref.cpp -- definiowanie i użycie referencji
#include <iostream>
int main(){
    using namespace std;
    int rats = 101;
    int & rodents = rats; // rodents to referencja

    cout << "rats = " << rats;
    cout << ", rodents = " << rodents << endl;
    rodents++;
    cout << "rats = " << rats;
    cout << ", rodents = " << rodents << endl;

    // w niektórych implementacjach C++ wymagane jest rzutowanie 
    // typu adresów na typ unsigned
    cout << "adres rats = " << &rats;
    cout << ", adres rodents = " << &rodents << endl;
    return 0;
}