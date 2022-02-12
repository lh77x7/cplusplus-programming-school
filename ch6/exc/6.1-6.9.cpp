// 6.1 - 6.9 - rozwiązania zadań z rodziału 6

/*

1 - DONE
2 - NOT DONE
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
    getchar();
    
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