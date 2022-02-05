// 4.1 - 4.10 - rozwiązania zadań z rodziału 4

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
using namespace std;
const int ArSize = 20;
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
    string imie, nazwisko;
    int ocena, lata;

    getchar();
    cout << "Jak masz na imie? ";
    getline(cin, imie);
    cout << "Jak sie nazywasz? ";
    getline(cin, nazwisko);
    cout << "Na jaka ocene zaslugujesz? ";
    cin >> ocena;
    cout << "Ile masz lat? ";
    cin >> lata;
    cout << "Nazwisko: " << nazwisko <<", " << imie << endl;
    cout << "Ocena: " << ocena - 1 << endl;
    cout << "Wiek: " << lata << endl;
}

void zad2() {
    getchar();
    string name, dessert;
    cout << "Podaj swoje imie:\n";
    getline(cin, name);
    cout << "Podaj swoj ulubiony deser:\n";
    getline(cin, dessert);
    cout << "Mam dla ciebie " << dessert;
    cout << ", " << name << ".\n";
}

void zad3() {
    getchar();
    char imie[ArSize], nazwisko[ArSize];
    cout << "Podaj imie: ";
    cin.getline(imie, ArSize);
    cout << "Podaj nazwisko: ";
    cin.getline(nazwisko, ArSize);
    cout << "Oto informacje zestawione w jeden napis: " << nazwisko << ", " << imie << endl;
}

void zad4() {
    getchar();
    string imie, nazwisko;
    cout << "Podaj imie: ";
    getline(cin, imie);
    cout << "Podaj nazwisko: ";
    getline(cin, nazwisko);
    cout << "Oto informacje zestawione w jeden napis: " << nazwisko << ", " << imie << endl;
}

void zad5() {
    getchar();
    struct Batonik{
        string nazwa;
        float waga;
        int kalorie;
    } snack;

    snack = { "Snickers", 2.49, 3};
    cout << "Nazwa: " << snack.nazwa << ", waga: " << snack.waga << ", kalorie: " << snack.kalorie << endl; 
}

void zad6() {
    getchar();
    struct Batonik{
        string nazwa;
        float waga;
        int kalorie;
    };
    Batonik tablicaStruktur[3] = {
        {"Snickers", 2.49, 3},
        {"Mars",2.99, 5},
        {"Baunty", 3.12, 7}
    };

    cout << "Oto twoje batoniki: " << endl;
    cout << "batonik 1: " << endl;
    cout << "nazwa: " << tablicaStruktur[0].nazwa << endl;
    cout << "waga: " << tablicaStruktur[0].waga << endl;
    cout << "kalorie: " << tablicaStruktur[0].kalorie << endl;
    cout << "batonik 2: " << endl;
    cout << "nazwa: " << tablicaStruktur[1].nazwa << endl;
    cout << "waga: " << tablicaStruktur[1].waga << endl;
    cout << "kalorie: " << tablicaStruktur[1].kalorie << endl;
    cout << "batonik 3: " << endl;
    cout << "nazwa: " << tablicaStruktur[2].nazwa << endl;
    cout << "waga: " << tablicaStruktur[2].waga << endl;
    cout << "kalorie: " << tablicaStruktur[2].kalorie << endl;
}

void zad7() {
    getchar();
    struct Pizza {
        string nazwa;
        float srednica;
        float waga;
    } dane;

    cout << "Podaj dane dotyczace pizzy\n";
    cout << "nazwa: " << endl;
    getline(cin, dane.nazwa);
    cout << "Podaj srednice pizzy: "; 
    cin >> dane.srednica;
    cout << "Podaj wage pizzy: ";
    cin >> dane.waga;
    cout << "Wyswietlam wprowadzone dane:" << endl;
    cout << "nazwa: "<< dane.nazwa << endl;
    cout << "srednica: "<< dane.srednica << endl;
    cout << "waga: "<< dane.waga << endl;
    cout << "koniec!" << endl; 
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