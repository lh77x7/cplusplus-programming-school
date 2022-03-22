// vect.h -- klasa Vector z operatorem << i przełącznikiem trybu
#ifndef VECTOR_H_
#define VECTOR_H_
#include <iostream>
namespace VECTOR
{
    class Vector
    {
        public:
            enum Mode {RECT, POL};
            // RECT to współrzędne kartezjańskie, POL to współrzędne biegunowe
        private:
            double x;   // współrzędne składkowej poziomej
            double y;   // współrzędne składowej pionowej
            Mode mode;  // RECT lub POL
            
            // prywatne metody ustawiające składowe
            double set_mag();
            double set_ang();
            void set_x(double, double);
            void set_y(double, double);
        public:
            Vector();
            Vector(double n1, double n2, Mode form = RECT);
            void reset(double n1, double n2, Mode form = RECT);
            ~Vector();
            double xval() const { return x; }   // zwraca wartość składową x
            double yval() const { return y; }   // zwraca wartość składową y
            double magval() { return set_mag(); }   // zwraca długość
            double angval() { return set_ang(); }   // zwraca kąt
            void polar_mode();  // ustawia tryb na biegunowy (POL)
            void rect_mode();   // ustawia tryb na kartezjański (RECT)
            // metody przeciążąjące operatory
            Vector operator+(const Vector & b) const;
            Vector operator-(const Vector & b) const;
            Vector operator-() const;
            Vector operator*(double n) const;
            // funkcje zaprzyjaźnione
            friend Vector operator*(double n, const Vector & a);
            friend std::ostream &
                operator << (std::ostream & os, Vector & v);
    };    
} // koniec przestrzeni nazw VECTOR

#endif
 