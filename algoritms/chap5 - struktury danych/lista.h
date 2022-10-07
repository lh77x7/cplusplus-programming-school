// lista jednokierunkowa

#include <iostream>

typedef struct rob
{
    int wartosc;
    struct rob *nastepny;               // wskaznik do nastepnego elementu
} ELEMENT;

class LISTA
{
    public:

        int pusta()                     // czy lista jest pusta?
        {
            return (inf.glowa == NULL);
        }
        // sumuje dwie listy:
        LISTA friend& operator+(LISTA &, LISTA &);

        void wypisz();                  // wypisuje elementy tablicy
        int szukaj(int x);              // szuka elementu x
        void dorzuc1(int x);            // dorzuca x bez sortowania
        void dorzuc2(int x);            // dorzuca x z sortowaniem
        void zeruj()                    // zerowanie listy
        {
            inf.glowa=inf.ogon=NULL;
        }

        LISTA & operator --();          // usuwa ostatni element listy
        LISTA()                         // konstruktor 
        {   
            inf.glowa = inf.ogon = NULL;
        }

        ~LISTA() {}                     // destruktor

    private:

        typedef struct                  // struktura informacyjna
        {
            ELEMENT * glowa;
            ELEMENT * ogon;
        } INFO;
        INFO inf;
};
