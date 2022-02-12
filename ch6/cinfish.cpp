// cinfish.cpp -- dane nieliczbowe koncza wprowadzanie
#include <iostream>
const int Max = 5;
int main(){

    using namespace std;
    // pobierz dane
    double fish[Max];
    cout << "Prosze podac wage swoich ryb.\n";
    cout << "Maksymalnie mozna podac " << Max
    << " ryb <q konczy>.\n";
    cout << "ryba 1.: ";
    int i = 0;
    while(i < Max && cin >> fish[i])
    {
        if(++i < Max)
           cout << "ryba " << i + 1 << ".: ";
    }
    // wylicz srednio
    double total = 0.0;
    for(int j = 0; j < i; j++)
        total += fish[j];
    // pokaz wyniki
    if(i == 0)
        cout << "Nie ma zadnych ryb\n";
    else
        cout << total / i << " = srednia waga " << i << " ryb\n";
    cout << "Gotowe.\n";
    return 0;
}