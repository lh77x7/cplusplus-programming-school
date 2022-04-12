// string2.h -- interfejs klasy String2

#ifndef STRING2_H_
#define STRING2_H_
#include <iostream>
using std::ostream;
using std::istream;

class String
{
    private:
        int len;                    // długość ciągu
        static int num_strings;     // liczba obiektów klasy
        static const int CINLIM = 80;   // limit długości ciągu na wyjściu
    public:
        char * str;                 // wskaźnik ciągu
        // konstruktor i pozostałe metody klasy
        String(const char * s);     // konstruktor
        String();                   // konstruktor domyślny
        String(const String &);     // konstruktor kopiujący
        ~String();                  // destruktor
        int length () const { return len; }
        void stringlow();       // zamień litery na małe
        void stringup();        // zamień litery na duże
        int has(char) const;    // ile liter w zdaniu? 
        // metody przeciążające operatory
        String & operator=(const String &);
        String & operator=(const char *);
        String operator+(const String &) const;
        String operator+(const char *) const;
        friend String operator+(const char * pStr, const String & Str);
        char & operator[](int i);
        const char & operator[](int i) const;
        // funkcje zaprzyjaźnione przeciążające operatory
        friend bool operator<(const String & st, const String & st2);
        friend bool operator>(const String & st1, const String & st2);
        friend bool operator==(const String & st, const String & st2);
        friend ostream & operator<<(ostream & os, const String & st);
        friend istream & operator>>(istream & os, String & st);
        // metody statystyczne
        static int HowMany();
};

#endif