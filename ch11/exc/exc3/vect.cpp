// vect.cpp -- implementacja metod klasy Vector
#include <cmath>
#include "vect.h" 
using std::sqrt;
using std::sin;
using std::cos;
using std::atan;
using std::atan2;
using std::cout;

namespace VECTOR
{
    // przelicza radiany na stopnie
    const double Rad_to_deg = 45.0 / atan(1.0);
    
    // metody prywatne
    // oblicza długość wektora ze składowych x i y
    double Vector::set_mag()
    {
        return sqrt(x * x + y * y);
    }

    double Vector::set_ang()
    {
        if(x == 0.0 && y == 0.0)
            return 0.0;
        else
            return atan2(y, x);
    }

    // oblicza składową x ze współrzędnych biegunowych
    void Vector::set_x(double mag, double n2)
    {
        x = mag * cos(n2 / Rad_to_deg);
    }

    // oblicza składowa y ze współrzędnych biegunowych
    void Vector::set_y(double mag, double n2)
    {
        y = mag * sin(n2 / Rad_to_deg);
    }

    // metody publiczne
    Vector::Vector()    // konstruktor domyślny
    {
        x = y = 0.0;
        mode = RECT;
    }

    // konstruuje wektor o zadanych współrzędnych biegunowych (w trybie 'p')
    // bądź prostokątnym (w domyślnym trybie 'r')
    Vector::Vector(double n1, double n2, Mode form)
    {
        mode = form;
        if(form == RECT)
        {
            x = n1;
            y = n2;
        }
        else if(form == POL)
        {
            set_x(n1, n2);
            set_y(n1, n2);
        }
        else 
        {
            cout << "Niepoprawna wartosc trzeciego argumentu Vector() -- ";
            cout << "zeruje wektor\n";
            x = y = 0.0;
            mode = RECT;
        }
    }

    // zerowanie wartości wektora dla zadanych współrzędnych kartezjańskich (dla RECT)
    // albo dla zadanych współrzędnych biegunowych (POL)
    void Vector::reset(double n1, double n2, Mode form)
    {
        mode = form;
        if(form == RECT)
        {
            x = n1;
            y = n2;
        }
        else if(form == POL)
        {
            set_x(n1, n2);
            set_y(n1, n2);
        }
        else 
        {
            cout << "Nieprawidlowy trzeci argument set() -- ";
            cout << "zeruje wektor\n";
            x = y = 0.0;
            mode = RECT;
        }
    }

    Vector::~Vector() {} // destruktor

    void Vector::polar_mode() // przełącza do reprezentacji biegunowej
    {
        mode = POL;
    }

    void Vector::rect_mode() // przełącza do reprezentacji kartezjańskiej
    {
        mode = RECT;
    }

    // przeciążone operatory
    // dodawanie dwóch wektorów
    Vector Vector::operator+(const Vector & b) const
    {
        return Vector(x + b.x, y + b.y);
    }

    // odejmowanie wektora b od wektora a
    Vector Vector::operator-(const Vector & b) const
    {
        return Vector(x - b.x, y - b.y);
    }

    // zmienia znak wektora
    Vector Vector::operator-() const
    {
        return Vector(-x, -y);
    }

    // mnoży wektor wywołujący przez n
    Vector Vector::operator*(double n) const
    {
        return Vector(n * x, n * y);
    }

    // funkcje zaprzyjaźnione
    // mnoży n p,rzez wektor a

    Vector operator*(double n, const Vector & a)
    {
        return a * n;
    }

    // wyświetla współrzędne wektora (prostokątne w trybie RECT, biegunowe w trybie POL)
    std::ostream & operator << (std::ostream & os, Vector & v)
    {
        if(v.mode == Vector::RECT)
            os << "(x.y) = (" << v.x << ", " << v.y << ")";
        else if(v.mode == Vector::POL)
        {
            os << "(m,a) = (" << v.set_mag() << ", "
                << v.set_ang() * Rad_to_deg << ")";
        }
        else
            os << "Niepoprawny tryb reprezentacji obiektu wektora";
        return os; 
    }

} // koniec przestrzeni nazw VECTOR