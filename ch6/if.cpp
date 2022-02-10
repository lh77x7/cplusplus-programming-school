// if.cpp -- uzycie instukcji if
#include <iostream>
int main()
{
    using std::cin; // deklarowanie using
    using std::cout;
    
    char ch;
    int spaces = 0;
    int total = 0;
    
    cin.get(ch);
    while(ch !='.') // koniec przy koncu zdania
    {
        if(ch = ' ')    // sprawdzam, czy ch jest spacja
            ++spaces;
        ++total;    // przy kazdym znaku
        cin.get(ch);
    }
    cout << "W zdaniu jest " << spaces << " spacji, a lacznie" << total << " znakow.\n";
    return 0;
}