// twotemps.cpp -- użycie przeciążenia szablonów funkcji
#include <iostream>
template <typename T>   // szablon orginalny
void Swap(T &a, T &b);

template <typename T>   // nowy szablon
void Swap(T *a, T *b, int n);

void Show(int a[]);
const int Lim = 8;

int main(){
    using namespace std;
    int i = 10, j = 20;
    cout << "i, j = " << i << ", " << j << endl;
    cout << "Uzycie funkcji obslugujacej typ int, "
    "wygenerowanej przez kompilator:\n";
    Swap(i, j); // pasuje do szablonu oryginalnego
    cout << "Teraz i, j = " << i << ", " << j << endl;

    int d1[Lim] = {0, 7, 0, 4, 1, 7, 7, 6};
    int d2[Lim] = {0, 7, 2, 0, 1, 9, 6, 9};
    cout << "Tablica poczatkowo:\n";
    Show(d1);
    Show(d2);
    Swap(d1, d2, Lim);  // pasuje do nowego szablonu
    cout << "Tablica po zmianie:\n";
    Show(d1);
    Show(d2);
    return 0;
}

template <typename T>
void Swap(T &a, T &b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}

template <typename T>
void Swap(T a[], T b[], int n)
{
    T temp;
    for(int i = 0; i < n; i++)
    {
        temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
}

void Show(int a[])
{
    using namespace std;
    cout << a[0] << a[1] << "/";
    cout << a[2] << a[3] << "/";
    for(int i = 4; i < Lim; i++)
        cout << a[i];
    cout << endl;
} 