// cingolf.cpp -- pomijanie danych niebedacych liczbami
#include <iostream>
const int Max = 5;
int main(){
    using namespace std;
    // pobierz dane
    int golf[Max];
    cout << "Prosze podac swoje wyniki w golfie.\n";
    cout << "Musisz podac wynik " << Max << " gier.\n";
    int i;
    for(i = 0; i < Max; i++)
    {
        cout << "tura " << i + 1 << ".: ";
        while (!(cin >> golf[i])){
            cin.clear();    // zerowanie obiektu cin
            while(cin.get() != '\n')    // pozbycie sie blednych danych
                continue;
            cout << "Prosze podac liczbe: ";    
        } 
    }
    // wyliczenie sredniej
    double total = 0.0;
    for(i = 0; i < Max; i++)
        total += golf[i];
    // podanie wynikow
    cout << total / Max << " = sredni wynik z " << Max << " tur\n";
    return 0;
}