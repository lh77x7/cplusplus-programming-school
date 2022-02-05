// 4.1 - 4.10 - rozwiązania zadań z rodziału 4

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