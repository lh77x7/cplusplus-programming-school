// and.cpp -- uzycie operatora koniunkcji logicznej
#include <iostream>
const int ArSize = 5;
int main()
{
    using namespace std;
    float naaq[ArSize];
    cout << "Podaj wartosci NPNW (Wspolczynnik Podatnosci Na Wplywy) "
    << "\nswoich sasiadow. Dzialanie programu zakonczy sie "
    << "po podaniu\n" << ArSize << " wartosci "
    << "lub po podaniu wartosci ujemnej.\n";

    int i = 0;
    float temp;
    cout << "Wartosc pierwsza: ";
    cin >> temp;
    while(i < ArSize && temp >= 0) // 2 warianty przerwania
    {
        naaq[i] = temp;
        ++i;
        if(i < ArSize)  // w tablicy jest jeszcze miejsce
        {
            cout << "Nastepna wartosc: ";
            cin >> temp;    // wiec pobieram nastepna wartosc
        }
    }
    if(i == 0)
        cout << "Brak danych - pa pa.\n";
    else 
    {
        cout << "Podaj swoj NPNW: ";
        float you;
        cin >> you;
        int count = 0;
        for(int j = 0; j < i; j++)
            if(naaq[j] > you)
                ++count;
        cout << count;
        cout << " twoi sasiedzi sa bardziej podatni na wplywy\n"
        <<" niz ty.\n";       
    }
    return 0;   
}