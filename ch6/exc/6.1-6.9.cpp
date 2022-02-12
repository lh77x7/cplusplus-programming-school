// 6.1 - 6.9 - rozwiązania zadań z rodziału 6

/*

1 - DONE
2 - DONE
3 - DONE
4 - NOT DONE
5 - NOT DONE
6 - NOT DONE
7 - NOT DONE
8 - NOT DONE
9 - NOT DONE

*/

#include <iostream>
#include <cctype>
using namespace std;
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
const int ROZMIAR = 10;

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
    else
    {
        //srednia = suma / i;
        
    }
    
}

void zad3() {
    showmenu2();
    char wybor;
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