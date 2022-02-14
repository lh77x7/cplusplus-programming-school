// strgback.cpp -- funkcja zwracajaca wskaznik char
#include <iostream>
char *buildstr(char c, int n);  // prototyp
int main(){
    
    using namespace std;
    int times;
    char ch;

    cout << "Podaj znak: ";
    cin >> ch;
    cout << "Podaj liczbe calkowita: ";
    cin >> times;
    char *ps = buildstr(ch, times);
    cout << ps << endl;
    delete [] ps;   // zwolnij pamiec
    ps = buildstr('+', 19); // ponowne uzycie wskaznika
    cout << ps << "-GOTOWE-" << ps << endl;
    delete [] ps;
    return 0;
}

// tworzenie lancucha z n wystapien znaku c
char *buildstr(char c, int n)
{
    char *pstr = new char[n + 1];
    pstr[n] = '\0'; // zakoncz lancuch
    while (n-- > 0)
        pstr[n] = c;    // dopelnienie lancucha
    return pstr;
}