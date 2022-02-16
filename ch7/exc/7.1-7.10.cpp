// 7.1 - 7.10 - rozwiązania zadań z rodziału 7

/*

1 - DONE
2 - DONE
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
using namespace std;
const int MAX = 10;
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
double funHarmoniczna(double, double);
int wprowadzWyniki(double [], double);
void wyswietlWyniki(double [], double);
void sredniaWyniki(double [], double);

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
        case 8:
            zad8();
            break;
        case 9:
            zad9();
            break;
        case 10:
            zad10();
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
    
    cout << "Wybierz od 1 do 10: \n";

}

void zad1() {

    double liczba1, liczba2, wynik;
    cout << "Podaj liczbe 1: "; cin >> liczba1;
    cout << "Podaj liczba 2: "; cin >> liczba2;
    while(liczba1 != 0 && liczba2 != 0) {
        wynik = funHarmoniczna(liczba1, liczba2);
        cout << "Srednia harmoniczna wynosi: " << wynik << endl;
        cout << "Podaj liczba1 i liczba2 <0 konczy>" << endl;
        cout << "Liczba 1: "; cin >> liczba1;
        cout << "Liczba 2: "; cin >> liczba2;
    }
    cout << "Koniec.\n";
}

void zad2() {
    
    double tablicaWynikow[MAX];
    int rozmiar = wprowadzWyniki(tablicaWynikow, MAX);
    wyswietlWyniki(tablicaWynikow, rozmiar);
    sredniaWyniki(tablicaWynikow, rozmiar);
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
    
}

void zad8(){
    
}

void zad9(){ 
    
}

void zad10(){
    
}

double funHarmoniczna(double x, double y){
    return (2.0 * x * y )/(x + y);
}

int wprowadzWyniki(double tablica[], double MAX){

    double temp;
    int i;

    for(i = 0; i < MAX; i++)
    {
        cout << "Podaj wynik numer "<< i + 1 << ": ";
        cin >> temp;
        if(!cin)    // bledne dane
        {
            cin.clear();
            while(cin.get() != '\n')
                continue;
            cout << "Bledne dane, wprowadzanie danych przerwane.\n";
            break;
        } else if (temp < 0)    // nakaz zakonczenia
            break;
        tablica[i] = temp;
    }
    return i; 
}

void wyswietlWyniki(double tablica[], double MAX){
    
    for(int i = 0; i < MAX; i++)
    {
        cout << tablica[i] << " ";
    }
    cout << endl;
}

void sredniaWyniki(double tablica[], double MAX){

    double suma = 0;
    
    for(int i = 0; i < MAX; i++)
    {
        suma += tablica[i];       
    }
    cout << "Srednia wynosi " << suma / MAX << endl;
}