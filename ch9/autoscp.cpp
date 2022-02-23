// autoscp.cpp -- instrukcja zasięgu zmiennych automatycznych
#include <iostream>
void oil(int x);
int main()
{
    using namespace std;

    int texas = 31;
    int year = 2011;
    cout << "W funkcji main() texas = " << texas << ", &texas = ";
    cout << &texas << endl;
    cout << "W funkcji main() year = " << year << ", &year = ";
    cout << &year << endl;
    oil(texas);
    cout << "W funkcji main() texas = " << texas << ", &texas = ";
    cout << &texas << endl;
    cout << "W funkcji main() year = " << year << ", &year = ";
    cout << &year << endl;
    return 0;
}

void oil(int x)
{
    using namespace std;
    int texas = 5;
    cout << "W funkcji oil() texas = " << texas << ", &texas = ";
    cout << &texas << endl;
    cout << "W funkcji oil() x = " << x << ", &x = ";
    cout << &x << endl;
    {   // poczatek bloku
        int texas = 113;    
        cout << "Wewnatrz bloku texas = " << texas;
        cout << ", &texas = " << &texas << endl;
        cout << "Wewnatrz bloku x = " << x << ", &x = ";
        cout << &x << endl;
    }
    cout << "Za blokiem texas = " << texas;
    cout << ", &texas = " << &texas << endl;
}