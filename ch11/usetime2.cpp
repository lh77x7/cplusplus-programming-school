// usetime2.cpp -- test trzeciej wersji klasy Time
// kompilować z plikiem mytime2.cpp 
#include <iostream>
#include "mytime2.h"

int main()
{
    using std::cout;
    using std::endl;
    Time wedding(4, 35);
    Time waxing(2, 47);
    Time total;
    Time diff;
    Time adjusted;

    cout << "czas pielenia = ";
    wedding.Show();
    cout << endl;

    cout << "czas woskowania = ";
    waxing.Show();
    cout << endl;

    cout << "laczny czas pracy = ";
    total = wedding + waxing;
    total.Show();
    cout << endl;

    diff = wedding - waxing;
    cout << "czas pielenia - czas woskowania = ";
    diff.Show();
    cout << endl;

    adjusted = total * 1.5;
    cout << "czas z poprawka na przerwy = ";
    adjusted.Show();
    cout << endl;

    return 0;
}