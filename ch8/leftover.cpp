// leftover.cpp -- przeciążenie funkcji left()
#include <iostream>
unsigned long left(unsigned long num, unsigned ct);
char * left(const char * str, int n = 1);

int main(){

    using namespace std;
    const char * trip = "Hawaii!!";   // wartosc testowa
    unsigned long n = 12345678; // wartosc testowa
    char * temp;
    int i;

    for(i = 1; i < 10; i++)
    {
        cout << left(n, i) << endl;
        temp = left(trip, i);
        cout << temp << endl;
        delete [] temp; // wskazuje tymczasowy obszar pamięci
    }

    return 0;
}

// funkcja ta zwraca pierwszych ct cyfr liczb num
unsigned long left(unsigned long num, unsigned ct)
{
    unsigned digits = 1;
    unsigned long n = num;

    if(ct == 0 || num == 0)
        return 0;   // jesli brak cyfr, zwraca 0
    while (n /= 10)
        digits++;
    if(digits > ct)
    {
        ct = digits - ct;
        while (ct --)
            num /= 10;
    return num;     // zwraca ct skrajnych lewych cyfr
    }
    else            // jesli ct >= liczby cyfr,
        return num; // zwraca całą liczbę
}

// funkcja zwraca wskaźnik nowego łańcucha zawierającego
// pierwszych n znaków łańcucha str
char * left(const char * str, int n)
{
    if(n < 0)
        n = 0;
    char * p = new char[n + 1];
    int i;
    for(i = 0; i < n && str[i]; i++)
        p[i] = str[i];  // kopiowanie znaków
    while(i <= n)
        p[i++] = '\0';  // ustawienie reszty znaków na zera
    return p;
}