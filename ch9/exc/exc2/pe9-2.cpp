// pe9-2.cpp -- zadanie 2 rozdzial 9
#include <iostream>
#include <string>
using namespace std;

// prototyp funkcji
void strcount(string lancuch);

int main()
{
    string input;

    getline(cin, input);
    while(input[0] !='\0')
    {
        strcount(input);
        cout << "Wprowadz nastepny wiersz (wiersz pusty konczy wprowadzanie):\n";
        getline(cin, input);
    }
    cout << "Koniec\n";

    return 0;
}

void strcount(string lancuch)
{
    using namespace std;
    int i = 0;
    int total = 0;

    while(lancuch[i++])
        total++;
    cout << total << " znakow\n";
}