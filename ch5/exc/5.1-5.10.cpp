// 5.1 - 5.10 - rozwiązania zadań z rodziału 5

/*

1 - DONE
2 - DONE
3 - DONE
4 - DONE
5 - DONE
6 - DONE
7 - DONE
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
    int wynik, tablicaWynikow[12];
    for(int i = 0; i < 12; i++)
    {
        cout << "Podaj wynik: ";
        cin >> wynik;
        cout << "Twoj wynik to "<< wynik << endl;
        tablicaWynikow[i] = wynik;
    }
    cout << "-----------------" << endl;
    cout << "Tablica wynikow: " << endl;
    int suma = 0;
    for(int i = 0; i < 12; i++)
    {
        cout << miesiace[i] << ", wynik: " << tablicaWynikow[i] << endl;
        suma += tablicaWynikow[i];
        
    }
    cout << "\nSuma wynosi " << suma << endl;
}

void zad6() {
    getchar();
    const char *miesiace[12] = // tablica wskaznikow 12 lańcuchów
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
    int i, j;
    int wynik, tablicaWynikow[3][12];
    int sumaWszystkich = 0, pierwszyRok = 0, drugiRok = 0, trzeciRok = 0;
    for(i = 0; i < 3; i++) // lata
    {
        for(j = 0; j < 12; j++){ // miesiace
            cout << "Podaj wynik: ";
            cin >> wynik;
            cout << "Twoj wynik to "<< wynik << " w roku " << i + 1 << endl;
            tablicaWynikow[i][j] = wynik;
        }
    }
    cout << "---------------------------------" << endl;
    cout << "Tablica wynikow: " << endl;
    
    // sprawdz czy wyswietla wszystkie wyniki przez 3 lata, jesli tak
    // to sumuj pierwszy rok, drugi rok, trzeci rok i calosc
    for(i = 0; i < 3; i++)
    {
        cout << "rok " << i + 1 << ":\n";
        pierwszyRok = 0, drugiRok = 0, trzeciRok = 0;
        for(j = 0; j < 12; j++)
        {
            cout << miesiace[j] << ":" << tablicaWynikow[i][j] << " ";    // wyswietl wszystkie
            sumaWszystkich += tablicaWynikow[i][j]; // suma wszystkich wynikow
            pierwszyRok += tablicaWynikow[0][j];    // suma pierwszego roku
            drugiRok += tablicaWynikow[1][j];       // suma drugiego roku
            trzeciRok += tablicaWynikow[2][j];      // suma trzeciego roku
        }
        cout << endl << endl;
    }
    cout << "---------------------------------" << endl;
    cout << "Suma pierwszy rok " << pierwszyRok << endl;
    cout << "Suma drugi rok " << drugiRok << endl;
    cout << "Suma trzeci rok " << trzeciRok << endl;
    cout << "Suma wszystkich lat " << sumaWszystkich << endl;
    cout << "Suma trzech lat rowna jest sumie kazdego roku!" << endl;
    cout << "Sprawdzam: " << endl;
    cout << pierwszyRok + drugiRok + trzeciRok << " = " << sumaWszystkich << endl;

}

void zad7() {
    getchar();
    struct car {
        string marka;
        int rokBudowy;
    } daneSamochodu[MaxRozmiar];
    int i = 0, ilosc;
    cout << "Ile samochodow chcesz skatalogowac?"; 
    cin >> ilosc;
    while(i++ < ilosc)
    {
        cout << "Samochod #"<< i <<":";
        getchar();
        cout << "Prosze podac marke: ";
        getline(cin, daneSamochodu[i].marka);
        cout << "Rok produkcji: ";
        cin >> daneSamochodu[i].rokBudowy;
    }
    for(int i = 0; i < ilosc; i++)
    {
        cout << daneSamochodu[i+1].rokBudowy << " " << daneSamochodu[i+1].marka << endl;        
    }
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