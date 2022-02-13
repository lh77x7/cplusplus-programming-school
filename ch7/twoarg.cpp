// twoarg.cpp -- funkcja dwuparametrowa
#include <iostream>
using namespace std;
void n_chars(char, int);
int main(){

    int times;
    char ch;

    cout << "Podaj znak: ";
    cin >> ch;
    while (ch != 'q')   // q, aby zakonczyc
    {
        cout << "Podaj liczbe calkowita: ";
        cin >> times;
        n_chars(ch, times); // funkcja dwuparametrowa
        cout << "\nPodaj nastepny znak; litera q konczy: ";
        cin >> ch;
    }
    cout << "Wartosc zmiennej times to " << times << ".\n";
    cout << "Do widzenia.\n";
    return 0;
}

void n_chars(char c, int n){  // pokazuje c n razy
    while(n-- > 0)  // kontynuuje az dojdzie do 0
        cout << c;
}       