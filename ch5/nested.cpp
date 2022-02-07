// nested.cpp -- petle zagniezdzone i tablica dwuwymiarowa
#include <iostream>
const int Cities = 5;
const int Years = 4;
int main(){

    using namespace std;
    const char *cities[Cities] = // ulica wskaznikow
    {       // 5 lancuchow
        "Jelenia Gora",
        "Zielona Gora",
        "Stara Gora",
        "Gorki",
        "Wilga Gora"
    };

    int maxtemps[Years][Cities] =  // tablica dwuwymiarowa
    {
        {32, 31, 32, 34, 29},   // wartosci maxtemps[0]
        {28, 31, 31, 32, 30},   // wartosci maxtemps[1]
        {31, 27, 29, 30, 33},   // wartosci maxtemps[2]
        {30, 31, 29, 33, 32}    // wartosci maxtemps[3]
    };

    cout << "Temperatury maksymalne (C) w latach 2008-2012\n\n";
    for(int city = 0; city < Cities; ++city)
    {
        cout << cities[city] << ":\t";
        for(int year = 0; year < Years; ++year)
            cout << maxtemps[year][city] << "\t";
        cout << endl;
    }
    // cin.get();
    return 0;
}