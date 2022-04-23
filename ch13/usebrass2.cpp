// usebrass2.cpp -- przykład wykorzystania polimorfizmu
// kompilować razem z brass.cpp
#include <iostream>
#include <string>
#include "brass.h"

const int CLIENTS = 4;
int main()
{
    using std::cin;
    using std::cout;
    using std::endl;
    Brass *p_clients[CLIENTS];
    std::string temp;
    long tempnum;
    double tempbal;
    int kind;
    for(int i = 0; i < CLIENTS; i++)
    {
        cout << "Podaj imie i nazwisko klienta: ";
        getline(cin, temp);
        cout << "Podaj numer rachunku klienta: ";
        cin >> tempnum;
        cout << "Podaj poczatkowy stan konta: ";
        cin >> tempbal;
        cout << "Wpisz 1 dla rachunku Brass lub "
            << "2 dla rachunku BrassPlus: ";
        while(cin >> kind && (kind != 1 && kind != 2))
            cout << "Wpisz 1 lub 2: ";
        if(kind == 1)
            p_clients[i] = new Brass(temp, tempnum, tempbal);
        else
        {
            double tmax, trate;
            cout << "Podaj limit debetu: ";
            cin >> tmax;
            cout << "Podaj stope oprocentowania jako ulamek dziesietny: ";
            cin >> trate;
            p_clients[i] = new BrassPlus(temp, tempnum, tempbal, tmax, trate);
        }
        while(cin.get() != '\n')
            continue;
    }
    cout << endl;
    
    for(int i = 0; i < CLIENTS; i++)
    {
        p_clients[i]->ViewAcct();
        cout << endl;
    }

    for(int i = 0; i < CLIENTS; i++)
    {
        delete p_clients[i];    // zwalnia pamięć
    }
    cout << "Gotowe.\n";

    return 0;
}