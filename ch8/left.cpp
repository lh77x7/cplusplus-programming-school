// left.cpp -- funkcja obsługi łańcuchów z parametrem domyślnym
#include <iostream>
const int ArSize = 80;
char * left(const char * str, int n = 1);
int main(){
    using namespace std;
    char sample[ArSize];
    cout << "Podaj lancuch znakowy:\n";
    cin.get(sample, ArSize);
    char * ps = left(sample, 4);
    cout << ps << endl;
    delete [] ps;   // zwolnienie starego łańcucha
    ps = left(sample);
    cout << ps << endl;
    delete [] ps;   // zwolnienie nowego łańcucha

    return 0;
}

// funkcja zwraca wskaźnik na nowy łańcuch składający się
// z pierwszych n znaków łańcucha str
char * left(const char * str, int n)
{
    if(n < 0)
        n = 0;
    char * p = new char[n + 1];
    int i;
    for(i = 0; i < n && str[i]; i++)
        p[i] = str[i];  // kopiowanie znaków
    while (i <= n)
        p[i++] = '\0';  // wyzerowanie reszty łańcuchów
    return p;
}