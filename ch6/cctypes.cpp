// cctypes.cpp -- użycie biblioteki cctypes.h
#include <iostream>
#include <cctype>   // prototypy funkcji obsługi znaków
int main(){
    using namespace std;
    cout << "Podaj tekst do analizy, zakoncz go,"
        " wpisujac znak @.\n";
    
    char ch;
    int whitespace = 0;
    int digits = 0;
    int chars = 0;
    int punct = 0;
    int others = 0;
    
    cin.get(ch); // pobierz pierszy znak
    while(ch != '@') // sprawdź czy nie "malpka"
    {
        if(isalpha(ch)) // czy litera?
            chars++;
        else if(isspace(ch)) // czy bialy znak?
            whitespace++;
        else if(isdigit(ch))    // czy to cyfra?
            digits++;
        else if(ispunct(ch))    // czy to znak przystankowy?
            punct++;
        else
            others++;
        cin.get(ch);        // pobierz nastepny znak
    }
    cout << chars << " liter, "
        << whitespace << " bialych znakow, "
        << digits << " cyfr, "
        << punct << " znakow przystankowych, "
        << others << " innych znakow.\n";
    return 0;
}