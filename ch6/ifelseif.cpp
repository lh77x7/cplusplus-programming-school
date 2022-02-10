// ifelseif.cpp -- użycie if else if else
#include <iostream>
const int Fave = 27;
int main()
{
    using namespace std;
    int n;

    cout << "Szukaj mojej ulubionej liczby - miesci sie ";
    cout << "w zakresie 1 - 100: ";
    do
    {
        cin >> n;
        if(n < Fave)
            cout << "Za malo -- probuj dalej: ";
        else if (n > Fave)
            cout << "Za duzo -- probuj dalej: ";
        else
            cout << Fave << " to jest to!\n";
    } while (n != Fave);
    return 0;
}