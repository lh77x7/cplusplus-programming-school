// lista.cpp - implementacja metod z lista.h
#include "lista.h"

/*

        LISTA friend& operator+(LISTA &, LISTA &);      +
        void wypisz();                                  +
        int szukaj(int x);                              +
        void dorzuc1(int x);                            +
        void dorzuc2(int x);                            +
        LISTA & operator --();                          +

*/
        

void LISTA::dorzuc1(int x)
{
    // dorzucenie elementu do sortowania
    ELEMENT *q = new ELEMENT;        // tworzenie nowej komórki
             q->wartosc = x;
             q->nastepny = NULL;
    if (inf.glowa == NULL)
        inf.glowa = inf.ogon = q;
    else
    {
        (inf.ogon)->nastepny = q;
        inf.glowa = q;
    }
}

void LISTA::dorzuc2(int x)
{
    // dołączamy rekord na właściowe miejsce
    // ver. 2 - z "sortowaniem"
    // tworzymy nowy element listy
    ELEMENT *q = new ELEMENT;
    q->wartosc = x;         // wypełniamy jego zawartość
    // poszukiwanie właściwej pozycji na
    // wstawienie elementu
    if(pusta())
    {
        inf.glowa = inf.ogon = q;
        q->nastepny = NULL;
    }
    else    // szukamy miejsce na wstawienie
    {
        ELEMENT *przed = NULL, *po = inf.glowa;
        enum {SZUKAJ, ZAKONCZ} stan = SZUKAJ;
        // zmienna wyliczeniowa
        while((stan == SZUKAJ) && (po != NULL))
            if(po ->wartosc >= x)
                stan = ZAKONCZ;         // znaleźliśmy właściwe miejsce!
            else                        // przemieszczamy się w poszukiwaniu 
            {                           // właściwego miejsca
                przed = po;             // wskaźniki "przed" i "po"
                po = po->nastepny;      // zapamiętają miejsce wstawienia
            }
        if(przed == NULL)               // wstawiamy na początek listy
        {
            inf.glowa = q;
            q->nastepny = po;            
        }
        else
        {
            if(po == NULL)              // wstawiamy na koniec listy
            {
                inf.ogon->nastepny = q;
                q->nastepny = NULL;
                inf.ogon = q;
            }
            else                        // wstawiamy gdzieś w środku
            {
                przed->nastepny = q;
                q->nastepny = po;
            }
        }
    }
}

int LISTA::szukaj(int x)
{
    ELEMENT *q = inf.glowa;
    while(q != NULL)
    {
        if(q->wartosc == x) return (1);
        q = q->nastepny;
    }
    return (0);
}

void LISTA::wypisz()
{
    ELEMENT *q = inf.glowa;
    if(pusta())
        cout << "(lista pusta)";
    else
        while(q != NULL)
        {
            cout << q->wartosc << "     ";
            q = q->nastepny;
        }
    cout << "\n";
}

LISTA &LISTA::operator--()
{   // parametrem domyślnym jest sam obiekt
    if(inf.glowa == inf.ogon)   // jeden element
    {                           // (lub lista pusta)
        delete inf.glowa;
        inf.glowa = inf.ogon = NULL;
    } 
    else
    {
        ELEMENT *temp = inf.glowa;
        while((temp -> nastepny) != inf.ogon)
        // szukaj przedostatniego elementu listy...
            temp = temp->nastepny;
        inf.ogon = temp;
        delete temp->nastepny;  // ... i usuwamy go
        temp->nastepny = NULL;
    }
    return (*this);             // zwracamy zmodyfikowany obiekt
}

LISTA &operator +(LISTA &x, LISTA &y)
{
    LISTA *temp = new LISTA;
    ELEMENT *q1 = (x.inf).glowa;        // wskazniki robocze
    ELEMENT *q2 = (y.inf).glowa;

    while(q1 != NULL)                   // przekopiowanie listy x do temp
    {
        temp->dorzuc2(q1->wartosc);
        q1 = q1->nastepny;
    }

    while(q2 != NULL)                   // przekopiowanie listy y do temp
    {
        temp -> dorzuc2(q2->wartosc);
        q2 = q2->nastepny;
    }
    return (*temp);
}