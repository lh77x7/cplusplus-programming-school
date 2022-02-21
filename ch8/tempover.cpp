// tempover.cpp -- przeciążenie szablonów
#include <iostream>

template <typename T>   // szablon A
void ShowArray(T arr[], int n);

template <typename T>   // szablon B
void ShowArray(T * arr[], int n);

struct debts{
    char name[50];
    double amount;
};

int main()
{
    using namespace std;
    int things[6] = {13, 31, 103, 301, 310, 130};
    struct debts mr_E[3] = 
    {
        {"Ima Wolfe", 2400.0},
        {"Ura Foxe", 1300.0},
        {"Iby Stout", 1800.0}
    };
    double * pd[3];

    // ustawienie wskaźników na pola amount struktur z tablicy Mr_E
    for(int i = 0; i < 3; i++)
        pd[i] = &mr_E[i].amount;

    cout << "Wyliczenie rzeczy pana E.:\n";
    for(int i = 0; i < 3; i++)
        pd[i] = &mr_E[i].amount;
    cout << "Wyliczenie rzeczy pana E.:\n";
    // things to tablica int
    ShowArray(things, 6);   // używanie szablonu A
    cout << "Wyliczenie dlugow pana E.:\n";
    // pd to tablica wskaznikow na double
    ShowArray(pd, 3);   // używa szablonu B (bardziej wyspecjalizowanego)
    return 0; 
}

template <typename T>
void ShowArray(T arr[], int n)
{
    using namespace std;
    cout << "Szablon A\n";
    for(int i = 0; i < n; i++)
        cout << arr[i] << ' ';
    cout << endl;
}

template <typename T>
void ShowArray(T * arr[], int n)
{
    using namespace std;
    cout << "Szablon B\n";
    for(int i = 0; i < n; i++)
        cout << *arr[i] << ' ';
    cout << endl;
}