// ourfunc.cpp -- definiuje własną funkcję
#include <iostream>
void simon(int);

int main(){
    using namespace std;
    simon(3); // wywolanie funkcji simon()
    cout << "Podaj liczbe calkowita: ";
    int count;
    cin >> count;
    simon(count);   // wywolanie ponowne
    cout << "Gotowe!" << endl;

    return 0;
}

void simon(int n){
    using namespace std;
    cout << "Simon prosi, aby dotknal palcow u stop " << n << " razy." << endl;
}