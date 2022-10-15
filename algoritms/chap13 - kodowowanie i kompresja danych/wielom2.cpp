#include <iostream>

using std::cout;

// deficja struktury
typedef struct wsp
{
    int c;
    int j;
    struct wsp * nastepny;
} WSPOLCZYNNIKI, *WSPOLCZYNNIKI_PTR;

WSPOLCZYNNIKI_PTR wstaw(WSPOLCZYNNIKI_PTR p, int c, int j)
// dodaje nowy wezel (wspolczynnik) do wielomianu
{
    if(c != 0)  // tylko elementy c*x (potega)j, dla c!=0
    {
        WSPOLCZYNNIKI_PTR q = new WSPOLCZYNNIKI;
        q -> c = c;
        q -> j = j;
        q -> nastepny = p;
    return q;
    }
    else
        return p;   // linia nie zostala zmieniona
}

WSPOLCZYNNIKI_PTR dodaj(WSPOLCZYNNIKI_PTR x, WSPOLCZYNNIKI_PTR y)
{
    WSPOLCZYNNIKI_PTR res = NULL;
    while((x != NULL) && (y != NULL))
        if(x -> j == y -> j)
        {
            res = wstaw(res, x -> c + y -> c, x -> j);
            x = x -> nastepny;
            y = y -> nastepny;
        }
        else

        if(x -> j < y -> j)
        {
            res = wstaw(res, x -> c, x -> j);
            x = x -> nastepny;
        }
        else
            if(y -> j < x -> j)
            {
                res = wstaw(res, y -> c, y -> j);
                y = y -> nastepny;
            }
    
    /*
    w tym momencie x lub y może jeszcze zawierać elementy,
    które nie zostały obsłużone w pętli
    while z uwagi na jej warunek; wstawiamy zatem
    reszte czynnikow (jeśli istnieją):
    */ 
    while(x != NULL)
    {
        res = wstaw(res, x -> c, x -> j);
        x = x -> nastepny;        
    }
    while(y != NULL)
    {
        res = wstaw(res, y -> c, y -> j);
        y = y -> nastepny;
    }

    return res;
}

int main()
{
    WSPOLCZYNNIKI_PTR pw1, pw2, pw3, pwtemp;
    pw1 = pw2 = pw3 = pwtemp = NULL;
    // wielomian pw1(x) = 5 * x pot(1700) + 6 * x pot(700) + 10 * x pot(50) + 5:
    pw1 = wstaw(pw1, 5, 1700);
    pw1 = wstaw(pw1, 6, 700);
    pw1 = wstaw(pw1, 10, 50);
    pw1 = wstaw(pw1, 5, 0);
    // wielomian pw2(x) = 6 * x pot(1800) - 6 * x pot(700) + 5 * x pot(50) + 15:
    pw2 = wstaw(pw2, 6, 1800);
    pw2 = wstaw(pw2, -6, 700);
    pw2 = wstaw(pw2, 5, 50);
    pw2 = wstaw(pw2, 15, 0);
    // dodajemy pw1 i pw2:
    pw3 = dodaj(pw1, pw2);
    // wielomian pw3(x) = 6 * x pot(1800) + 5 * x pot(1700) + 15 * x pot(50) + 20
    return 0;
} 