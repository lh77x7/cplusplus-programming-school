// strings.cpp -- zapis lancuchow w tablicy
#include <iostream>
#include <cstring> // zawiera deklaracje funkcji strlen()
int main(){
    using namespace std;
    const int Size = 15;
    char name1[Size];    // pusta tablica
    char name2[Size] = "C++owboy";  // tablica zainicjalizowana

    cout << "Jak sie masz! jestem " << name2;
    cout << "! A jak ty sie nazywasz?\n";
    cin >> name1;
    cout << "No tak, " << name1 << ", twoje imie ma ";
    cout << strlen(name1) << " liter i jest zapisane\n";
    cout << "w tablicy majacej " << sizeof(name1) << " bajtow.\n";
    cout << "Twoj inicjal to " << name1[0] << ".\n";
    name2[3] = '\0';
    cout << "Pierwsze trzy litery mojego imienia to: ";
    cout << name2 << endl;
    return 0;
}