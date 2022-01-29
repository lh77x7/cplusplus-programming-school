// 2.1 - 2.7 - rozwiązania zadań z rodziału 2

/*

1 - DONE
2 - DONE
3 - DONE
4 - NOT DONE
5 - NOT DONE
6 - NOT DONE
7 - NOT DONE

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
    cout << "Hatala, ul. Targowa 33 Wroclaw" << endl;
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

}

void zad5() {

}

void zad6() {

}

void zad7() {

}

void entliczek() {
    cout << "Entliczek pentliczek\n";
}

void stoliczek() {
    cout << "Czerwony stoliczek\n";
}