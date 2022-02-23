// static.cpp -- stosowanie lokalnej zmiennej statycznej
#include <iostream>
const int ArSize = 10;

// prototypy funkcji
void strcount(const char *str);

int main(){
    using namespace std;
    char input[ArSize];
    char next;

    cout << "Wprowdz wiersz:\n";
    cin.get(input, ArSize);
    while(cin)
    {
        cin.get(next);
        while(next != '\n') // wiersz nie zmiści się w buforze
            cin.get(next);  // porzucenie reszty znaków z wejścia
        strcount(input);
        cout << "Wprowadz nastepny wiersz (wiersz pusty konczy wprowadzanie):\n";
        cin.get(input, ArSize);
    }
    cout << "Koniec\n";

    return 0;
}

void strcount(const char *str)
{
    using namespace std;
    static int total = 0;   // statyczna zmienna lokalna
    int count = 0;          // automatyczna zmienna lokalna

    cout << "\"" << str << "\" zawiera ";
    while(*str++)   // przejdz na koniec ciagu
        count++;
    total += count;
    cout << count << " znakow\n";
    cout << "Lacznie " << total << " znakow.\n";
}