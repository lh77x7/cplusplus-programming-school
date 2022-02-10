// or.cpp -- uzycie operatora logicznej alternatywy
#include <iostream>
int main()
{
    using namespace std;
    cout << "Program ten moze sformatowac twoj dysk\n"
    "czy mam kontynuowac <t/n>";

    char ch;
    cin >> ch;
    if(ch == 't' || ch == 'f') // t lub T
        cout << "ostrzegalem!\a\a\n";
    else if(ch == 'n' || ch == 'N') // n lub N
        cout << "Bardzo rozsadnie... do widzenia\n";
    else   
        cout << "Nie wybralem t ani n, najwyrazniej "
        " nie rozumiesz instrukcji, wiec "
        " i tak zniszcze cala zawartosc dysku.\a\a\a\n";
    return 0;
}