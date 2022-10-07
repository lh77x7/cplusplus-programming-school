// lista.cpp - implementacja metod z lista.h
#include "lista.h"

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

