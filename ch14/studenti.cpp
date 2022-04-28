// studenti.cpp -- klasa Student korzystająca z dziedziczenia prywatnego
#include "studenti.h"
using std::ostream;
using std::endl;
using std::istream;
using std::string;

// metody publiczne
double Student::Average() const
{
    if(ArrayDb::size() > 0)
        return ArrayDb::sum()/ArrayDb::size();
    else
        return 0;
}

const string & Student::Name() const
{
    return (const string &) * this;
}

double & Student::operator[](int i)
{
    return ArrayDb::operator[](i);  // używa funkcji ArrayDb::operator[]()
}

double Student::operator[](int i) const
{
    return ArrayDb::operator[](i);
}

// metoda prywatna
ostream & Student::arr_out(ostream & os) const
{
    int i;
    int lim = ArrayDb::size();
    if(lim > 0)
    {
        for(i = 0; i < lim; i++)
        {
            os << ArrayDb::operator[](i) << " ";
            if(i % 5 == 4)
                os << endl;           
        }
        if(i % 5 == 0)
            os << endl;
    }
    else
        os << " tablica jest pusta";
    return os;
}

// funkcje zaprzyjaźnione
// używa funkcji operatora>>() klasy string
istream & operator>>(istream & is, Student & stu)
{
    is >> (string &) stu;
    return is;
}

// używa funkcji getline(ostream &, const string &) zaprzyjaźnionej z klasą string
istream & getline(istream & is, Student & stu)
{
    getline(is, (string &) stu);
    return is;
}

// używa funkcji operatora<<() klasy string
ostream & operator<<(ostream & os, const Student & stu)
{
    os << "Wyniki: " << (const string &) stu << ":\n";
    stu.arr_out(os);    // używa metody prywatnej do wyświetlania ocen
    return os;
}