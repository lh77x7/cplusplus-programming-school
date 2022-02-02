// 3.1 - 3.7 - rozwiązania zadań z rodziału 3

/*

1 - DONE
2 - DONE
3 - DONE
4 - DONE
5 - NOT DONE
6 - NOT DONE
7 - NOT DONE

*/

#include <iostream>
using namespace std;

void zad1();
void zad2();
void zad3();
void zad4();
void zad5();
void zad6();
void zad7();
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
    const float cal = 30.48;
    float wzrost;
    cout << "Podaj wzrost w centrymetrach: "; cin >> wzrost;
    cout << wzrost << " centymetow to " << int(wzrost / cal) << " cali oraz ";
    cout << ((wzrost / cal) - int(wzrost / cal))<< " stop(y).\n";
}

void zad2() {
    int stopa, cal, waga;
    float wzrost, wagaKg, BMI;
    const float mnoznikWzrostu = 0.0254;

    cout << "Podaj dane wzrostu. W stopach: "; cin >> stopa;
    cout << "W calach: ";  cin >> cal;
    cout << "Pora na wage (w funtach): "; cin >> waga;
    cout << 12 * stopa + cal << " calow wzrostu\n";
    wzrost = (12 * stopa + cal) * mnoznikWzrostu; 
    wagaKg = waga / 2.2;
    cout << wzrost << "  metrow wzrostu\n";
    cout << wagaKg << "  kilogramow\n";
    cout << "Pora obliczyc wspolczynnik BMI\n";
    BMI = wagaKg / (wzrost * wzrost);
    cout << "Twoje BMI wynosi: " << BMI << endl;

}

void zad3() {
    float stopnie, minuty, sekundy;
    float przeliczStopnie;
    cout << "Podaj dlugosc w stopniach, minutach i sekundach:" << endl;
    cout << "Najpierw podaj stopnie: "; cin >> stopnie;
    cout << "Nastepnie podaj minuty stopnia luku: "; cin >> minuty;
    cout << "Na koniec podaj sekundy luku: "; cin >> sekundy;
    przeliczStopnie = (minuty * 60 + sekundy) / 3600;
    cout << stopnie << " stopni, " << minuty << " minut, " << sekundy << " sekund = ";
    cout << stopnie + przeliczStopnie << " stopni.\n";  
}

void zad4() {
    long sekundy;
    cout << "Podaj liczbe sekund: ";
    cin >> sekundy;
    const long minuty = 60;
    const long godziny = 3600;
    const long dni = 3600 * 24;

    cout << sekundy << " sekund = " << sekundy / dni << " dni, " << (sekundy / godziny) % 24 << " godzin, " ;
    cout << (sekundy / minuty) % minuty << " minut, " << sekundy % minuty << " sekund\n";
}

void zad5() {
    
}

void zad6() {
    
}

void zad7() {

}
