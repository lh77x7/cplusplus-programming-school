// coordin.h -- prototyp funkcji i deklaracje struktur
// deklaracje struktur
#ifndef COORDIN_H_
#define COORDIN_H_

struct polar{
    double distance;    // odleglość od początku układu współrzędnych
    double angle;       // odchylenie od osi
};

struct rect
{
    double x;   // odległość od początku układu współrzędnych (w poziomie)
    double y;   // odległość od początku układu współrzędnych (w pionie)
};

// prototypy
polar rect_to_polar(rect xypos);
void show_polar(polar dapos);
#endif