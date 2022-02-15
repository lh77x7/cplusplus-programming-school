// strcfun.cpp -- funkcje mające strukturę jako parametr
#include <iostream>
#include <cmath>

// deklaracje struktur
struct polar
{
    double distance;    // odległość od początku układu
    double angle;       // kąt względem dodatniej półosi x
};

struct rect
{
    double x;   // odleglosc od poczatku ukladu w poziomie
    double y;   // odleglosc od poczatku ukladu w pionie
};

// prototypy
polar rect_to_polar(rect xypos);
void show_polar(polar dapos);

int main(){

    using namespace std;
    rect rplace;
    polar pplace;

    cout << "Podaj wartosc x i y: ";
    while(cin >> rplace.x >> rplace.y)  // chytre uzycie cin
    {
        pplace = rect_to_polar(rplace);
        show_polar(pplace);
        cout << "Podaj nastpne liczby lub q, aby zakonczyc: ";
    }
    cout << "Gotowe.\n";
    return 0;
}

// zmieniam współrzedne prostokątne na biegunowe
polar rect_to_polar(rect xypos){

    using namespace std;
    polar answer;

    answer.distance =
        sqrt(xypos.x * xypos.y + xypos.y * xypos.y);
    answer.angle = atan2(xypos.y, xypos.x);
    return answer;  // zwraca strukture polar
}

// pokazuje współrzędne biegunowe, radiany przelicza na stopnie
void show_polar(polar dapos){

    using namespace std;
    const double Rad_to_deg = 57.29577951;

    cout << "odleglosc = " << dapos.distance;
    cout << ", kat = " << dapos.angle * Rad_to_deg;
    cout << " stopni.\n";
}