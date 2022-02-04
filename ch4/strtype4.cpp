// strtype4.cpp -- wprowdzenie danych wierszami
#include <iostream>
#include <string>   // udostępnianie klasy string
#include <cstring>  // biblioteka lancuchow w stylu C
int main(){
    using namespace std;
    char charr1[20];
    string str;

    cout << "Dlugosc lancucha w zmiennej charr przed wprowadzeniem danych: " << strlen(charr1) << endl;
    cout << "Dlugosc lancucha w zmiennej str przed wprowadzenie danych: " << str.size() << endl;
    cout << "Wprowadzenie wiersza tekstu:\n";
    cin.getline(charr1, 20); // okreslenie maksymalnej dlugosci
    cout << "Wprowadzono: " << charr1 << endl;
    cout << "Podaj kolejny wiersz tekstu:\n";
    getline(cin, str);  // cin jest parametrem, nie podano dlugosci
    cout << "Wprowadzono: " << str << endl;
    cout << "Dlugosc lancucha w zmiennej charr po wprowadzeniu danych: " << strlen(charr1) << endl;
    cout << "Dlugosc lancucha w zmiennej str po wprowadzeniu danych: " << str.size() << endl;
    return 0;
}