// 5.1 - 5.10 - rozwiązania zadań z rodziału 5

/*

1 - DONE
2 - DONE
3 - DONE
4 - DONE
5 - NOT DONE
6 - NOT DONE
7 - NOT DONE
8 - NOT DONE
9 - NOT DONE
10 - NOT DONE

*/

#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <math.h>
using namespace std;
const int ArSize = 20;
const int MaxRozmiar = 100;
void zad1();
void zad2();
void zad3();
void zad4();
void zad5();
void zad6();
void zad7();
void zad8();
void zad9();
void zad10();
void showmenu();

int main(){

    showmenu();
    int choice;
    cin >> choice;

    while(choice != 1000)
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
        case 8:
            zad8();
            break;
        case 9:
            zad9();
            break;
        case 10:
            zad10();
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
    cout << "Wybierz od 1 do 10: \n";
}

void zad1() {
    getchar();
    int liczba1, liczba2;
    int suma = 0;
    cout << "Podaj 1 liczbe: "; cin >> liczba1;
    cout << "Podaj 2 liczbe: "; cin >> liczba2;
    for(int i = liczba1; i <= liczba2; i++){
        suma += i;
    }
    cout << "Suma liczb miedzy" << liczba1 << " i " << liczba2 << " wynosi " << suma << endl;
}

void zad2() {
    getchar();
    vector<long double>tablica(MaxRozmiar);
    tablica[0] = tablica[1] = 1L;
    for(int i = 2; i < MaxRozmiar; i++)
        tablica[i] = i * tablica[i - 1];
    for(int i = 0; i < MaxRozmiar; i++)
        std::cout << i << "! = " << tablica[i] << std::endl;
}

void zad3() {
    getchar();
    double liczba, suma = 0;
    cout << "Podaj liczbe (0 - konczy): "; cin >> liczba;
    while(liczba != 0)
    {
        suma += liczba;
        cout << "Podaj kolejna liczbe (0 - konczy): ";
        cin >> liczba; 
    }
    cout << "Suma liczb wynosi : " << suma << endl;
}

void zad4() {
    getchar();
    // inwestycja Dafne - procent prosty, inwestycja Cleo - procent składny
    float kwota = 100;
    float inwestycjaDafne, inwestycjaCleo;
    for(int i = 0; i <= 50; i++) // maksymalny czas inwestycji to 50 lat
    {
        inwestycjaDafne = kwota * (1 + 0.1 * i ); // procent prosty
        cout << "Dane ma kwote " << inwestycjaDafne << " w roku " << i << endl;

        inwestycjaCleo = kwota * pow(1.05, i); // procent skladany
        cout << "Cleo ma kwote " << inwestycjaCleo << " w roku " << i << endl;

        if(inwestycjaCleo > inwestycjaDafne)
        {
            cout << "Po " << i << " latach Cleo zyska wiecej od Dafne.\n";
            break;
        }
    }
}

void zad5() {
    getchar();
    int tablicaWynikow[12];
    const char *miesiace[12] =
    {
        "styczen",
        "luty",
        "marzec",
        "kwiecien",
        "maj",
        "czerwiec",
        "lipiec",
        "sierpien",
        "wrzesien",
        "pazdziernik",
        "listopad",
        "grudzien"
    };
    tablicaWynikow[0] = 0;
    for(int i = 1, miesiace = 1; i <= 12; i++, miesiace++){
        cout << "Podaj i od " << miesiace << endl;
        cin >> i;
        tablicaWynikow[i++] = i;
    }
    cout << endl;
}

void zad6() {
    getchar();
}

void zad7() {
    getchar(); 
}

void zad8(){
    getchar();
}

void zad9(){ 
    getchar();
}

void zad10(){
    getchar();
}