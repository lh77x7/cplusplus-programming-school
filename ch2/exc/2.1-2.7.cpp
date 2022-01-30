// 2.1 - 2.7 - rozwiązania zadań z rodziału 2

/*

1 - DONE
2 - DONE
3 - DONE
4 - DONE
5 - DONE
6 - DONE
7 - DONE

*/

#include <iostream>
using namespace std;
void showmenu();
void zad1();
void zad2();
void zad3();
void entliczek();
void stoliczek();
void zad4();
void zad5();
void zad6();
void zad7();
void wyswietlCzas(int, int);

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
    cout << "Hatala, ul. Targowa 33 Wroclaw." << endl;
}

void zad2() {

    int mile;
    cout << "Podaj odleglosc w milach: ";
    cin >> mile;
    cout << mile << " to " << 1852 * mile << " metrow.\n"; 

}

void zad3() {
    entliczek();
    entliczek();
    stoliczek();
    stoliczek();    
}

void zad4() {
    int wiek;
    cout << "Podaj swoj wiek: ";
    cin >> wiek;
    cout << "Twoj wiek w miesiacach wynosi " << 12 * wiek << ".\n";
}

void zad5() {
    int stopnie;
    cout << "Podaj temperature w stopniach Celsiusza: ";
    cin >> stopnie;
    double fahrenheit = 1.8 * stopnie + 32.0;
    cout << stopnie << " stopnie Celsjusza to " << fahrenheit << " stopnie Fahrenheita.\n";
}

void zad6() {
    int lataSwietlne;
    cout << "Podaj liczbe lat swietlnych: ";
    cin >> lataSwietlne;
    long jednostkiAstro = 63240 * lataSwietlne;
    cout << lataSwietlne << " lat swietlnych = " << jednostkiAstro << " jedn. astrono.\n";
}

void zad7() {
    int minuty, godziny;
    cout << "Podaj liczbe godzin: ";
    cin >> godziny;
    cout << "Podaj liczbe minut: ";
    cin >> minuty;
    wyswietlCzas(godziny, minuty);    
}

void entliczek() {
    cout << "Entliczek pentliczek\n";
}

void stoliczek() {
    cout << "Czerwony stoliczek\n";
}

void wyswietlCzas(int godziny, int minuty){
    cout << "Czas: " << godziny << ":"<< minuty << endl;
}