// arrfunc3.cpp -- slowo const i funkcje obslugujace tablice
#include <iostream>
const int Max = 5;

// prototypy funkcji
int fill_array(double ar[], int limit);
void show_array(const double ar[], int n);
void revalue(double r, double ar[], int n);

int main(){

    using namespace std;
    double properties[Max];

    int size = fill_array(properties, Max);
    show_array(properties, size);
    if(size > 0)
    {
        cout << "Podaj czynnik zmiany wartosci: ";
        double factor;
        while (!(cin >> factor))    // nieliczbowa wartosc na wejsciu
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Niepoprawna wartosc; podaj liczbe: ";
        }
        revalue(factor, properties, size);
        show_array(properties, size);
    }
    cout << "Gotowe.\n";
    cin.get();
    cin.get();
    return 0;
}

int fill_array(double ar[], int limit){

    using namespace std;
    double temp;
    int i;

    for(i = 0; i < limit; i++)
    {
        cout << "Podaj wartosc nr " << (i + 1) << ": ";
        cin >> temp;
        if(!cin)    // bledne dane
        {
            cin.clear();
            while(cin.get() != '\n')
                continue;
            cout << "Bledne dane, wprowadzanie danych przerwane.\n";
            break;
        }
        else if(temp < 0)   // nakaza zakonczenia
            break;
        ar[i] = temp;
    }
    return i;
}

void show_array(const double ar[], int n){

    using namespace std;

    for(int i = 0; i < n; i++)
    {
        cout << "Nieruchomosc nr " << (i + 1) << ": ";
        cout << ar[i] << endl;
    }
}

void revalue(double r, double ar[], int n){

    for(int i = 0; i < n; i++)
        ar[i] *= r;
}
