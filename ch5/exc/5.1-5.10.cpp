// 5.1 - 5.10 - rozwiązania zadań z rodziału 5

/*

1 - DONE
2 - NOT DONE
3 - NOT DONE
4 - NOT DONE
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
}

void zad3() {
    getchar();
}

void zad4() {
    getchar();
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