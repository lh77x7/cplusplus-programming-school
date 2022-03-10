// stone.cpp -- konwertuje wartości typów liczbowych na obiekty własnego typu
// kompilować ze stonewt.cpp
#include <iostream>
using std::cout;
#include "stonewt.h"

void display(const Stonewt & st, int n);
int main()
{
    Stonewt incognito = 275;    // inicjalizacja konstruktorem
    Stonewt wolfe(285.7);       // równoważne instrukcji Stonewt wolfe = 285.7;
    Stonewt taft(21, 8);

    cout << "Celebryta wazyl ";
    incognito.show_stn();
    cout << "Detektyw wazyl ";
    wolfe.show_stn();
    cout << "Prezydent wazyl ";
    taft.show_stn();
    incognito = 276.8;  // konwersja konstruktorem
    taft = 325;         // równoważne instrukcji: taft = Stonewt(325);
    cout << "Po obiedzie celebryta wazyl ";
    incognito.show_stn();
    cout << "Po obiedzie prezydent wazyl ";
    taft.show_lbs();
    display(taft, 2);
    cout << "A zapasnik wazyl jeszcze wiecej.\n";
    display(427,2);
    cout << "Nie pozostal kamien na kamieniu\n";

    return 0;
}

void display(const Stonewt & st, int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << "Oho! ";
        st.show_stn();
    }
}