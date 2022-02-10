// more_and.cpp -- uzycie operatora logicznej koniunkcji
#include <iostream>
const char * qualify[4] = // tablica wskaznikow lancuchow
{
    "bieg na 10 km.\n",
    "przeciaganie liny w blocie.\n",
    "pojedynek mistrzow conoe.\n",
    "festiwal rzucania plackiem.\n"
};

int main()
{
    using namespace std;
    int age;
    cout << "Podaj swoj wiek: ";
    cin >> age;
    int index;
    if(age > 17 && age < 35)
        index = 0;
    else if(age >= 35 && age < 50)
        index = 1;
    else if(age >= 50 && age < 65)
        index = 2;
    else 
        index = 3;
    cout << "Kwalifikujesz sie do konkurencji " << qualify[index];
    return 0;
}