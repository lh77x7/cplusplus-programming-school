// vslice.cpp -- użycie wycinków obiektu valarray
#include <iostream>
#include <valarray>
#include <cstdlib>

const int SIZE = 12;
typedef std::valarray<int> vint;    // upraszcza deklarację
void show(const vint & v, int cols);

int main()
{
    using std::slice;   // z pliku <valarray>
    using std::cout;
    vint valint(SIZE);  // można sobie wyobrażać jako 4 rzędy po 3 elementy

    int i;
    for(i = 0; i < SIZE; i++)
        valint[i] = std::rand() % 10;
    cout << "Oryginalna tablica:\n";
    show(valint, 3);    // wyświetla w 3 kolumnach
    vint vcol(valint[slice(1, 4, 3)]);  // wyciąga drugą kolumnę
    cout << "Druga kolumna:\n";
    show(vcol, 1);  // wyświetla w 1 kolumnie
    vint vrow(valint[slice(3, 3, 1)]);  // wyciąga drugi wiersz
    cout << "Drugi wiersz:\n";
    show(vrow, 3);
    valint[slice(2, 4, 3)] = 10;    // przypisuje 10 do elementów drugiej kolumny
    cout << "Przypisuje 10 do ostatniej kolumny:\n";
    show(valint, 3);
    cout << "Przypisuje do pierwszej kolumny sume dwoch kolejnych:\n";
    // + nie jest zdefiniowane dla wycieków, potrzebna konwersja na valarray<int>
    valint[slice(0, 4, 3)] = vint(valint[slice(1, 4, 3)]) + vint(valint[slice(2, 4, 3)]);

    show(valint, 3);

    return 0;
}

void show(const vint & v, int cols)
{
    using std::cout;
    using std::endl;

    int lim = v.size();
    for(int i = 0; i < lim; i++)
    {
        cout.width(3);
        cout << v[i];
        if(i % cols == cols -1)
            cout << endl;
        else
            cout << " ";
    }
    if(lim % cols != 0)
        cout << endl;
}