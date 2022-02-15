// strctptr.cpp -- funkcje ze wskaznikami struktur jako parametrami
#include <iostream>
#include <cmath>

// szablony struktur
struct polar{
    double distance;    // odległość od początku układu
    double angle;       // kierunek względem dodatniej połosi x
};

struct rect{
    double x;       // odległość od początku układu w poziomie
    double y;       // odległóść od początku układu w pionie
};

// prototypy
void rect_to_polar(const rect *pxy, polar *pda);
void show_polar(const polar *pda);

int main(){

    using namespace std;
    rect rplace;
    polar pplace;

    cout << "Podaj wartosc x i y: ";
    while (cin >> rplace.x >> rplace.y)
    {
        rect_to_polar(&rplace, &pplace);    // pokaz adres
        show_polar(&pplace);    // przekaz adres
        cout << "Nastepna para liczb lub q, aby zakonczyc: ";
    }
    cout << "Gotowe.\n";
    return 0;
}

// pokazuje współrzedne biegunowe, zamienia radiany na stopnie
void show_polar(const polar *pda){

    using namespace std;
    const double Rad_to_deg = 57.29577951;

    cout << "odleglosc = " << pda->distance;
    cout << ", kat = " << pda->angle * Rad_to_deg;
    cout << " stopni.\n";
}

// zmiana współrzędnych prostokątnych na biegunie
void rect_to_polar(const rect *pxy, polar *pda){

    using namespace std;
    pda->distance =
    sqrt(pxy->x * pxy->x + pxy->y * pxy->y);
    pda->angle - atan2(pxy->y, pxy->x);
}