// recur.cpp -- użycie rekurencji
#include <iostream>
void countdown(int n);

int main(){
    countdown(4);   // wywołanie funkcji rekurencyjnej
    return 0;
}

void countdown(int n){
    using namespace std;
    cout << "Odliczanie ..." << n << endl;
    if(n > 0)
        countdown(n - 1);   // funkcja wywolujaca sama siebie
    cout << n << ". BUM!\n";
}