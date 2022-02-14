// lotto.cpp -- prawdopodobienstwo wygranej
#include <iostream>
long double probability(unsigned numbers, unsigned picks);
int main(){
    using namespace std;
    double total, choices;
    cout << "Podaj najwieksza liczbe, jaka mozna wybrac, oraz\n"
        "liczbe skreslen:\n";
    while((cin >> total >> choices) && choices <= total)
    {
        cout << "Szansa wygranej to jeden do ";
        cout << probability(total, choices);    // wyliczenie wyniku
        cout << endl;
        cout << "Nastepne dwie liczby (q, aby zakonczyc): ";
    }
    cout << "Do widzenia\n";
    return 0;
}

// funkcja wylicza prawdopodobienstwo trafnego wybrania picks
// liczb sposrod numbers mozliwych
long double probability(unsigned numbers, unsigned picks)
{
    long double result = 1.0;   // kilka zmiennych lokalnych
    long double n;
    unsigned p;

    for(n = numbers, p = picks; p > 0; n--, p--)
        result = result * n / p;
    return result;
}