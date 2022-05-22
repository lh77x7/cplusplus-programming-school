// write.cpp -- użycie funkcji cout.write()
#include <iostream>
#include <cstring> // lub też string.h

int main()
{
    using std::cout;
    using std::endl;
    const char * state1 = "Floryda";
    const char * state2 = "Kansas";
    const char * state3 = "Euforia";
    int len = std::strlen(state2);
    cout << "Inkrementacja indeksu petli:\n";
    int i;
    for(i = 1; i <= len; i++)
    {
        cout.write(state2, i);
        cout << endl;
    }
    // skrajne dane wyjściowe
    cout << "Dekrementacja indeksu:\n";
    for(i = len; i > 0; i --)
        cout.write(state2, i) << endl;
    
    // przekroczenie długości łańcucha
    cout << "Przekroczenie dlugosci lancucha:\n";
    cout.write(state2, len + 5) << endl;

    return 0;
}