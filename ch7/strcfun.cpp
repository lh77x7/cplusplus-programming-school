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
