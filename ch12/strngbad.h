// strngbad.h -- nieco kulawa definicja klasy implementującej ciąg znaków
#include <iostream>
#ifndef STRNGBAD_H_
#define STRNGBAD_H_

class StringBad
{
    private:
        char * str;                 // wskaźnik ciągu
        int len;                    // długość ciągu
        static int num_strings;     // liczba obiektów
    public:
        StringBad(const char * s);  // konstruktor
        StringBad();                // konstruktor domyślny
        ~StringBad();               // destruktor
        // funkcje zaprzyjaźnione
        friend std::ostream & operator<<(std::ostream & os, const StringBad & st);
};
#endif