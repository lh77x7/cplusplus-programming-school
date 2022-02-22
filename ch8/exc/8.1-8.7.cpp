// 8.1 - 8.7 - rozwiązania zadań z rodziału 8

/*

1 - NOT DONE
2 - DONE
3 - NOT DONE
4 - NOT DONE
5 - NOT DONE
6 - NOT DONE
7 - DONE

*/

#include <iostream>
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