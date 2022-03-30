// stonewt.cpp -- Stonewt methods
#include <iostream>
using std::cout;
#include "stonewt.h"

Stonewt::Stonewt(double lfun, Type interfejs)
{
    interface = interface;
    kamienie = int(lfun) / Lbs_per_stn;
    ulamekfunta = int(lfun) % Lbs_per_stn + lfun - int(lfun);
    funty = lfun;
}

Stonewt::Stonewt(double lfun, int lkam, Type interfejs)
{
    interface = interface;
    kamienie = lkam;
    ulamekfunta = lfun;
    funty = lkam * Lbs_per_stn + lkam;
}

Stonewt::Stonewt(): interface(FUNTY)
{
    kamienie = funty = ulamekfunta = 0; // inicjalizacja zerami dla prywatnych wartości
}

Stonewt::~Stonewt() // destruktor
{
};

std::ostream & operator<< (std::ostream & os, Stonewt & var)
{
    switch (var.interface)
    {
    case 1:
        os << '\n' << var.kamienie << " kamienie\n"; 
        break;
    
    case 2:
        os << '\n' << var.kamienie << " kamienie " << var.ulamekfunta << " funtow\n";
        break;

    case 3:
        os << '\n' << var.funty << " funtow\n";
        break;
    
    default:
        os << "\nZle parametry interfejsu\n";
        break;
    }

    return os;
}

// def. operatorów
Stonewt Stonewt::operator+(Stonewt & var)
{

}

Stonewt Stonewt::operator-(Stonewt & var)
{

}

Stonewt Stonewt::operator*(Stonewt & var)
{

}