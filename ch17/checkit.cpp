// checkit.cpp -- kontrola poprawności danych wejściowych
#include <iostream>

int main()
{
    using namespace std;
    cout << "Podaj liczby: ";
    int sum = 0;
    int input;
    while(cin >> input)
    {
        sum += input;
    }

    cout << "Ostatnia wprowadzana wartosc = " << input << endl;
    cout << "Suma = " << sum << endl;

    return 0;
}