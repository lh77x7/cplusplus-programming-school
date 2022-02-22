// file1.cpp -- przykładowy program trzyplikowy
#include <iostream>
#include "coordin.h" // deklaracje struktur i prototypy funkcji
using namespace std;
int main()
{
    rect rplace;
    polar pplace;

    cout << "Podaj wartosci x i y: ";
    while(cin >> rplace.x >> rplace.y)  // sprytne wykorzystanie cin
    {
        pplace = rect_to_polar(rplace);
        show_polar(pplace);
        cout << "Nastepne wspolrzedne (q konczy program): ";
    }
    cout << "Juz!\n";
    return 0;
}