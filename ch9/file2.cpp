// file2.cpp -- definicje funkcji wykorzystywanych w file1.cpp
#include <iostream>
#include <cmath>
#include "coordin.h"    // deklaracje struktur i prototyp funkcji

// konwersja współrzędnych prostokątnych na współrzędne biegunowe
polar rect_to_polar(rect xypos)
{
    using namespace std;
    polar answer;

    answer.distance = sqrt(xypos.x * xypos.x + xypos.y * xypos.y);
    answer.angle = atan2(xypos.y, xypos.x);
    return answer;  // zwraca strukturę współrzędnych biegunowych
}

// wyświetlenie współrzędnych biegunowych, z konwersją kąta na stopnie
void show_polar(polar dapos)
{
    using namespace std;
    const double Rad_to_deg = 57.29577951;

    cout << "odleglosc = " << dapos.distance;
    cout << ", odchylenie = " << dapos.angle * Rad_to_deg;
    cout << " stopni\n";
}
