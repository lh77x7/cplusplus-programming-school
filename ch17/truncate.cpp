// truncate.cpp -- używanie funkcji get() do skracania w razie potrzeby wiersza wejściowego
#include <iostream>
const int LEN = 10;
inline void eatline() { while(std::cin.get() != '\n') continue; } 
int main()
{
    using std::cin;
    using std::cout;
    using std::endl;

    char name[LEN];
    char title[LEN];
    cout << "Podaj swoje imie i nazwisko: ";
    cin.get(name, LEN);
    if(cin.peek() != '\n')
        cout << "Przykro nam, miejsca wystarczy tylko na " << name << endl;
    eatline();
    cout << "Drogi(-a) " << name << ", podaj swoje stanowisko: \n";
    cin.get(title, LEN);
    if(cin.peek() != '\n')
        cout << "Bylismy zmuszeni skrocic nazwe Twojego stanowiska.\n";
    eatline();
    cout << "Imie i nazwisko: " << name
         << "\n   Stanowisko: " << title << endl;
    
    return 0;
}