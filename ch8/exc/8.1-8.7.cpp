// 8.1 - 8.7 - rozwiązania zadań z rodziału 8

/*

1 - NOT DONE
2 - DONE
3 - NOT DONE
4 - NOT DONE
5 - NOT DONE
6 - DONE
7 - DONE

*/

#include <iostream>
#include <cstring>
using namespace std;

// deklaracja struktur
struct Batonik{
    char name[40];
    double price;
    int length;
};

struct debts{
    char name[50];
    double amount;
};

// deklaracje szablonów
template <typename T> // szablon A
void SumArray(T arr[], int n);

template <typename T> // szablon B
void SumArray(T * arr[], int n);

template <typename T> // szablon C
T maxn(T arr[], int n);

template <> const char* maxn(const char* arr[], int);

// deklaracje funkcji
void zad1();
void zad2();
void zad3();
void zad4();
void zad5();
void zad6();
void zad7();
void showmenu();
void displayBatonik(Batonik &);

int main(){

    showmenu();
    int choice;
    cin >> choice;

    while(choice != 100)
    {
        switch (choice)
        {
        case 1:
            zad1();
            break;
        case 2:
            zad2();
            break;
        case 3:
            zad3();
            break;
        case 4:
            zad4();
            break;
        case 5:
            zad5();
            break;
        case 6:
            zad6();
            break;
        case 7:
            zad7();
            break; 
        case 100: 
            break;     
        default:
            cout << "Nie ma takiej opcji.\n";
            break;
        }
        showmenu();
        cin >> choice;
    }
    cout << "Koniec programu.\n";

    return 0;
}

void showmenu(){
    
    cout << "Wybierz od 1 do 7: \n";

}

void zad1() {

}

void zad2() {
    
    Batonik one = {"Millennium Munch", 2.85, 350};
    displayBatonik(one);
}

void zad3() {
    
}

void zad4() {

}

void zad5() {

}

void zad6() {

    int tab1[5] = {1, 4, 4, 5, 8};
    double tab2[4] = {1.2, 3.4, 9.2, 5.3};
    const char* tab3[5] = {"Fiat", "Honda", "Ferrari", "Volvo", "Bugatti"};
    
    cout << "Najwieksza z int: " << maxn(tab1, 5) << endl;
    cout << "-----------------\n";
    cout << "Najwieksza z double: " << maxn(tab2, 4) << endl;
    cout << "-----------------\n";
    cout << "Najdluzszy lancuch: " << maxn(tab3, 5) << endl;

}

void zad7() {
    
int things[6] = {13, 31, 103, 301, 310, 130};

struct debts mr_E[3] =
{
    {"Ima Wolfe", 2400.0},
    {"Ura Foxe", 1300.0 },
    {"Iby Stout", 1800.0 }
};

double * pd[3];

for(int i = 0; i < 3; i++)
    pd[i] = &mr_E[i].amount;

cout<< "-------------" << endl;
SumArray(things, 6);
cout << "------------" << endl;
SumArray(pd, 3);
cout << "------------" << endl;

}

void displayBatonik(Batonik &a){
    cout << "Nazwa: "<< a.name << endl;
    cout << "Cena: " << a.price << endl;
    cout << "Dlugosc: " << a.length << endl;
}

template <typename T> // szablon A - definicja
void SumArray(T arr[], int n)
{
    int suma = 0;
    int i;
    
    for(i = 0; i < n; i++)
        suma += arr[i];
    cout << endl;
    cout << "Liczba elementow: " << i << endl;
    cout << "Suma zadluzenia: " << suma << endl;
}

template <typename T> // szablon B - definicja
void SumArray(T * arr[], int n)
{
    int suma = 0;
    int i;
    
    for(i = 0; i < n; i++)
        suma += *arr[i];
    cout << endl;
    cout << "Liczba elementow: " << i << endl;
    cout << "Suma zadluzenia: " << suma << endl;
}

template <typename T> // szablon C - definicja
T maxn(T arr[], int n)
{
    T max = arr[0];
    
    for(int i = 0; i < n; i++)
        if(max < arr[i])
            max = arr[i];

    return max;
}

template <> const char* maxn(const char* arr[], int n)
{
    const char* str = arr[0];
    
    for(int i = 0; i < n; i++)
        if(strlen(str) < strlen(arr[i])) str = arr[i];

    return str;
}