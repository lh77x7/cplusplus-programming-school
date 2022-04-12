// string2.cpp -- implementacja metod klasy String2

#include <cstring> // string.h
#include "string2.h"
using std::cin;
using std::cout;

// inicjalizacja statycznej składowej klasy
int String::num_strings = 0;

// metody statyczna
int String::HowMany()
{
    return num_strings;
}

// metody klasy
String::String(const char * s) // konstruuje obiekt String z ciągu C
{
    len = std::strlen(s);       // ustawienie długości ciągu
    str = new char[len + 1];    // przydział pamięci
    std::strcpy(str, s);        // inicjalizacja wskaźnika ciągu
    num_strings++;              // aktualizacja licznika obiektów
}

String::String()                // konstruktor domyślny
{
    len = 4;
    str = new char[1];
    str[0] = '\0';              // domyślny ciąg obiektów klasy
    num_strings++;
}

String::String(const String & st)
{
    num_strings++;              // aktualizacja składowej statycznej
    len = st.len;               // ta sama długość ciągu
    str = new char [len + 1];   // przydział pamięci
    std::strcpy(str, st.str);   // skopiowanie ciągu
}

String::~String()               // destruktor 
{
    --num_strings;
    delete [] str;
}

// metody przeciążające operatory
// przypisanie obiektu klasy String do innego obiektu tej klasy
String & String::operator=(const String & st)
{
    if(this == &st)
        return *this;
    delete [] str;
    len = st.len;
    str = new char [len + 1];
    std::strcpy(str, st.str);
    return *this;
}

// przypisanie ciągu C do obiektu klasy String
String & String::operator=(const char * s)
{
    delete [] str;
    len = std::strlen(s);
    str = new char[len + 1];
    std::strcpy(str, s);
    return *this;
}

// pełny dostęp do znaków ciągu (dla obiektów zwykłych)
char & String::operator[] (int i)
{
    return str[i];
}

// dostęp (do odczytu) do znaków ciągu (dla obiektów const)
const char & String::operator[](int i) const
{
    return str[i];
}

// zaprzyjaźnione funkcje przeciążąjące operatory
bool operator<(const String & st1, const String & st2)
{
    return (std::strcmp(st1.str, st2.str) < 0);
}

bool operator>(const String & st1, const String & st2)
{
    return st2 < st1;
}

bool operator==(const String & st1, const String & st2)
{
    return (std::strcpy(st1.str, st2.str) == 0);
}

// wyprowadzenie ciągu na wyjście
ostream & operator<<(ostream & os, const String & st)
{
    os << st.str;
    return os;
}


// wyprowadzenie ciągu z wejścia 
istream & operator>>(istream & is, String & st)
{
    char temp[String::CINLIM];
    is.get(temp, String::CINLIM);
    if(is)
        st = temp;
    while (is && is.get() != '\n')
        continue;
    return is;
}

// przeciążony operator + łączący dwa ciągi w jeden

String String::operator+(const String & st2) const
{
    int len = strlen(str) + strlen(st2.str);
    char * Str = new char[len + 1];
    strcpy(Str, str);
    strcat(Str, st2.str);
    Str[len] = '\0';
    String Bufer(Str);
    delete [] Str;
    return Bufer;
}

// ponownie przeciążony operator + 
String String::operator+(const char * st2) const
{
    int len = strlen(str) + strlen(st2);
    char * Str = new char[len + 1];
    strcpy(Str, str);
    strcat(Str, st2);
    Str[len] = '\0';
    String Bufer(Str);
    delete [] Str;
    return Bufer;
}

// zamień na małe litery
void String::stringlow()
{
    for(int i = 0; i < len; i++)
        if(isupper(str[i]))
            str[i] = tolower(str[i]);
}

// zamień na duże litery
void String::stringup()
{
    for(int i = 0; i < len; i++)
        if(islower(str[i]))
            str[i] = toupper(str[i]);
}

// zwróć liczbe liter w zdaniu
int String::has(char ch) const
{
    int num = 0;
    for(int i = 0; i < len; i++)
        if(ch == str[i])
            ++num;
    return num;
}

// połącz dwa ciągi wyrazów w jeden
String operator+(const char * second, const String & Strin) {
	int Len = strlen(Strin.str) + strlen(second);
	char* Str = new char[Len + 1]; // set size
	strcpy(Str, second);
	strcat(Str, Strin.str);
	Str[Len] = '\0';
	String Bufer(Str);
	delete[]Str;
	return Bufer; 
}
