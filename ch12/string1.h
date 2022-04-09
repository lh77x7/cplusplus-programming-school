// string1.h -- poprawiona i uzupełniona implementacja klasy reprezentującej ciąg znaków
#ifndef STRING1_H_
#define STRING1_H_
#include <iostream>
using std::ostream;
using std::istream;

class String
{
    private:
        char * str;                 // wskaźnik ciągu
        int len;                    // długość ciągu
        static int num_strings;     // liczba obiektów klasy
        static const int CINLIM = 80;   // limit długości ciągu na wyjściu
    public:
        // konstruktor i pozostałe metody klasy
        String(const char * s);     // konstruktor
        String();                   // konstruktor domyślny
        String(const String &);     // konstruktor kopiujący
        ~String();                  // destruktor
        int length () const { return len; }
        // metody przeciążające operatory
        String & operator=(const String &);
        String & operator=(const char *);
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