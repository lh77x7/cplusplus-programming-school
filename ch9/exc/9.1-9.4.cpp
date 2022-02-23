// 9.1 - 9.4 - rozwiązania zadań z rodziału 9

/*

1 - DONE
2 - DONE
3 - DONE
4 - NOT DONE

*/

#include <iostream>
using namespace std;
// deklaracje funkcji
void zad1();
void zad2();
void zad3();
void zad4();
void showmenu();

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
    
    cout << "Wybierz od 1 do 4: \n";

}

void zad1() {
    cout << "Patrz rozwiazanie exc1.\n";
}

void zad2() {
    cout << "Patrz rozwiazanie exc2.\n";
}

void zad3() {
    cout << "Patrz rozwiazanie exc3.\n";
}

void zad4() {

}