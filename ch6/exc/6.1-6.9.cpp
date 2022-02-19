// 6.1 - 6.9 - rozwiązania zadań z rodziału 6

/*

1 - DONE
2 - DONE
3 - DONE
4 - DONE
5 - DONE
6 - DONE
7 - NOT DONE
8 - DONE
9 - NOT DONE

*/

#include <iostream>
#include <algorithm>
#include <fstream>
#include <cstdlib>
#include <cctype>
#include <string>
#include <new>
using namespace std;
const int strsize = 30;
const int prog1 = 5000;
const int prog2 = 10000;
const int prog3 = 20000;
const int prog4 = 35000;

struct zpdw {
        char imie[strsize];         // prawdziwe imie
        char stanowisko[strsize];   // stanowisko sluzbowe
        char pseudozpdw[strsize];   // pseudonim ZDPW
        int preferencje;            // 0 = imie, 1 = stanowisko, 2 = pseudonim
    } tablicaStruktur[3] = 
{
        {"leszek", "wszechstronny programista", "gigant", 1},
        {"pawel", "ekspert bezpieczenstwa", "hacker", 2},
        {"jan", "frontend developer", "magiczny kolo", 3}
};

struct wplacajacy {
    string nazwisko;
    double kwota;
};

void zad1();
void zad2();
void zad3();
void zad4();
void zad5();
void zad6();
void zad7();
void zad8();
void zad9();
void showmenu();
void showmenu2();
void roslinozerca();
void pianista();
void drzewo();
void gra();
void menuStruktury();
void sortowanieImie();
void sortowanieStanowisko();
void sortowaniePseudonim();
void sortowaniePreferencje();
bool cmpA(zpdw, zpdw);
bool cmpB(zpdw, zpdw);
bool cmpC(zpdw, zpdw);
bool cmpD(zpdw, zpdw);

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
    
    cout << "Wybierz od 1 do 9: \n";

}

void zad1() {
    
    char ch;
    char znak = '@';
    
    cin.get(ch);
    while(ch != znak)
    {
        if(islower(ch)){
            cout << char(toupper(ch));
        }
            
        if(isupper(ch)) {
            cout << char(tolower(ch));
        }
        cin.get(ch);
    }
    cout << "I co zadowolony z wynikow?\n";
}

void zad2() {
    
    const int ROZMIAR = 10;
    double datki[ROZMIAR];
    
    cout << "Podaj wysokosci datkow." << endl;
    cout << "Mozesz podac maksymalnie " << ROZMIAR << " datkow" << endl;
    cout << "<q konczy lub dana nieliczowa>" << endl;
    cout << "datek 1: ";
    int i = 0;
    // wczytuj dane
    while(i < ROZMIAR && cin >> datki[i])
    {
        if(!cin){   // dane wejsciowe zakonczone wartoscia nieliczbowa
            cin.clear();
            cin.get();
        }
        if(++i < ROZMIAR)
            cout << "datek " << i + 1 << ": ";
    }
    // wylicz srednia
    double suma = 0.0;
    double srednia;
    for(int j = 0; j < i; j++){
        suma += datki[j];
        srednia = suma / j;
    
        if (datki[j] > srednia) {
            cout << j + 1 << " wieksze od sredniej." << endl;
        }
    }
    cout << srednia << " = srednia wysokosc " << i << " datkow.\n";
        
    // pokaz wyniki
    if(i == 0)
        cout << "Nie podates zadnych datkow\n";
}

void zad3() {
    
    char wybor;

    showmenu2();
    
    cin >> wybor;
    while(wybor != 'q')
    {
        switch(wybor)
        {
            case 'r': roslinozerca(); break;
            case 'p': pianista(); break;
            case 'd': drzewo(); break;
            case 'g': gra(); break;
            default: cout << "Prosze podac litere r, p, t lub g: "; break;
            case 'q': break;
        }
        showmenu2();
        cin >> wybor;
    }
    cout << "Do zobaczenia!\n";
}

void zad4() {

    char wybor;

    menuStruktury();

    cin >> wybor;
    while(wybor != 'q')
    {
        switch(wybor)
        {
            case 'a': sortowanieImie(); break;
            case 'b': sortowanieStanowisko(); break;
            case 'c': sortowaniePseudonim(); break;
            case 'd': sortowaniePreferencje(); break;
            default: cout << "Prosze podac litere r, p, t lub g: "; break;
            case 'q': break;
        }
        menuStruktury();
        cin >> wybor;
    }
    cout << "Do zobaczenia!\n";

}

void zad5() {

    float zarobek, podatek;
    
    cout << "Podaj zarobek: ";
    cin >> zarobek;
    // < 5000
    if(zarobek < prog1)
    {
        cout << "Podatek wynosi 0!" << endl;
    }
    // > 5000 && < 10000
    if(zarobek > prog1 && zarobek < prog2)
    {
        podatek = zarobek * 0.1;
        cout << "Podatek wynosi " << podatek << endl;
    }
    // > 10000 && < 20000
    if(zarobek > prog2 && zarobek < prog3)
    {
        podatek = prog2 * 0.1 + (zarobek - prog2) * 0.15;
        cout << "Podatek wynosi " << podatek << endl;
    }
    // > 20000 && < 35000
    if(zarobek > prog3 && zarobek < prog4)
    {
        podatek = prog2 * 0.1 + prog3 * 0.15 + (zarobek - prog3) * 0.15;
        cout << "Podatek wynosi " << podatek << endl;
    }
    // > 35000
    if(zarobek > prog4)
    {
        podatek = prog2 * 0.1 + prog3 * 0.15 + (zarobek - prog3) * 0.2;
        cout << "Podatek wynosi " << podatek << endl;
    }
}

void zad6() {
    
    int ilosc;
    
    cout << "Podaj ilosc wplacajacych osob: ";
    cin >> ilosc;
    // dynamicznie alokuj strukture na n liczb
    wplacajacy *ofiarodawcy = new wplacajacy[ilosc];

    // wprowadzenie danych struktury
    int i, licznik = 0;
    
    cin.get();
    for(i = 0; i < ilosc; i++)
    {
        cout << i + 1 << " Nazywisko: ";
        getline(cin, ofiarodawcy[i].nazwisko);
        cout << "Kwota: ";
        cin >> ofiarodawcy[i].kwota;
        cin.get();
    }
    cout << "\nNasi Wspaniali Sponsorzy:\n";
    for(i = 0; i < ilosc; i++)
    {
        if(ofiarodawcy[i].kwota >= 10000)
        {
            cout << ofiarodawcy[i].nazwisko << "\t" << ofiarodawcy[i].kwota << endl;
            licznik++;
        }
    }

    if(licznik == 0)
        cout << " brak\n";
    cout << "\nNasi Sponsorzy:\n";
    if(licznik == ilosc)
        cout << " brak\n";
    else {
        for(int i = 0; i < ilosc; i++)
        {
            if(ofiarodawcy[i].kwota < 10000)
                cout << ofiarodawcy[i].nazwisko << "\t" << ofiarodawcy[i].kwota << endl;
        }
    }

    // zwolnij pamiec dla n liczb
    delete [] ofiarodawcy;         

}

void zad7() {
    
}

void zad8(){
    
    cin.get();
    char nazwaPliku[strsize];
    ifstream wPliku;    // obiekt obsługujący odczyt z pliku
    char ch;    // zmienna na znaki char
    int licznik = 0; // liczba elementów do odczytu

    cout << "Podaj nazwe pliku z danymi: ";
    cin.getline(nazwaPliku, strsize);
    wPliku.open(nazwaPliku);    // obiekt połączony z plikiem
    
    // próba otwarcia pliku
    if(!wPliku.is_open())   // nieudane próba otwarcia pliku
    {
        cout << "Otwarcie pliku = " << nazwaPliku << " nie powidla sie.\n";
        cout << "Program zostanie zakonczony.\n";
        exit(EXIT_FAILURE);
    }
    
    // wczytywanie znaków przez obiekt

    wPliku >> ch;   // pobierz pierwszy znak
    while(wPliku.good()) // póki dane i nie EOF
    {
        ++licznik;      // inkrementuj licznik
        wPliku >> ch;   // pobierz nastepny znak
    }

    if(wPliku.eof())
    {
        cout << "Koniec pliku.\n";
    }
    else if(wPliku.fail())
        cout << "Wczytawanie danych przerwane - blad.\n";
    else
        cout << "Wczytywanie danych przerwane, przyczyna nieznana.\n";
    if(licznik == 0)
        cout << "Nie przetworzono zadnych danych.\n";
    else 
    {
        cout << "Wczytano znakow: " << licznik << endl;
    }
    wPliku.close(); // nie potrzeba już pliku
}

void zad9(){ 
    
}

void showmenu2(){
    
    cout << "\nr) roslinozerca    p) pianista\n";
    cout << "d) drzewo          g) gra\n";

}

void roslinozerca(){
    
    cout << "Nie jestem tylko roslinozerca.\n";

}

void pianista(){

    cout << "Pianista to swietny film.\n";

}

void drzewo(){

    cout << "Klon jest drzewem.\n";

}

void gra(){

    cout << "Jaka chcesz zagrac gre?\n";

}

void sortowanieImie(){

    sort(tablicaStruktur, tablicaStruktur + 3, cmpA);
    for(int i = 0; i < 3; i++){
        cout << tablicaStruktur[i].imie << endl;
    }
}

void sortowanieStanowisko(){

    sort(tablicaStruktur, tablicaStruktur + 3, cmpB);
    for(int i = 0; i < 3; i++){
        cout << tablicaStruktur[i].stanowisko << endl;
    }
}

void sortowaniePseudonim(){

    sort(tablicaStruktur, tablicaStruktur + 3, cmpC);
    for(int i = 0; i < 3; i++){
        cout << tablicaStruktur[i].pseudozpdw << endl;
    } 
}

void sortowaniePreferencje(){

    sort(tablicaStruktur, tablicaStruktur + 3, cmpD);
    for(int i = 0; i < 3; i++){
        cout << tablicaStruktur[i].preferencje << endl;
    }
}

void menuStruktury(){

    cout << "\nZakon Programistow Dobrej Woli\n";
    cout << "a. lista wg imion          b. lista wg stanowisk\n";
    cout << "c. lista wg pseudonimow    d. lista wg preferencji\n";
    cout << "q. koniec\n";

}

bool cmpA(zpdw A, zpdw B)
{

	return A.imie > B.imie;

}

bool cmpB(zpdw A, zpdw B)
{

	return A.stanowisko > B.stanowisko;

}

bool cmpC(zpdw A, zpdw B)
{

	return A.pseudozpdw > B.pseudozpdw;

}

bool cmpD(zpdw A, zpdw B)
{

    return A.preferencje > B.preferencje;

}