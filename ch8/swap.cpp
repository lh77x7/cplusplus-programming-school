// swap.cpp -- użycie referencji i wskaźników do zmiany wartości
#include <iostream>
void swapr(int & a, int & b);   // a, b to aliasy wartości int
void swapp(int * p, int * q);   // p, q to adresy wartości int
void swapv(int a, int b);   // a, b to nowe zmienne
int main(){
    using namespace std;
    int wallet1 = 300;
    int wallet2 = 350;

    cout << "wallet1 = $" << wallet1;
    cout << " wallet2 = $" << wallet2 << endl;

    cout << "Zmiana wartosci za pomoca refrencji:\n";
    swapr(wallet1, wallet2);  // przekaż adresy zmiennych
    cout << "wallet1 = $" << wallet1;
    cout << " wallet2 = $" << wallet2 << endl;

    cout << "Zmiana wartosci za pomoca wskaznikow:\n";
    swapp(&wallet1, &wallet2);  // przekaż adresy zmiennych
    cout << "wallet1 = $" << wallet1;
    cout << " wallet2 = $" << wallet2 << endl;

    cout << "Zmiana wartosci za pomoca przekazywania przez wartosc:\n";
    swapv(wallet1, wallet2);  // przekaż adresy zmiennych
    cout << "wallet1 = $" << wallet1;
    cout << " wallet2 = $" << wallet2 << endl;
    return 0;
}

void swapr(int & a, int & b){   // użycie referencji
    
    int temp;

    temp = a;   // użycie a, b jako wartości zmiennych
    a = b;
    b = temp;
}

void swapp(int * p, int * q){   // użycie wskaźników
    
    int temp;

    temp = *p;   // użycie *p, *q jako wartości zmiennych
    *p = *q;
    *q = temp;
}

void swapv(int a, int b){   // próba użycia wartości

    int temp;

    temp = a;   // użycie a, b jako wartości zmiennych
    a = b; 
    b = temp;
}