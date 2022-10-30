template <class TypPodst> class FIFO
{
    TypPodst *t;
    int glowa, ogon, MaxElt;
    
    public:
    FIFO(int n)
    {
        // konstruktor kolejki o rozmiarze n
        MaxElt = n;
        glowa = ogon = 0;
        t = new TypPodst[MaxElt+1];     // przydział pamięci
    }
    void wstaw(TypPodst x)
    {
        // wstaw nowy element x do kolejki
        t[ogon++] = x;
        if(ogon > MaxElt)
        ogon = 0;
    }
    int obsluz(TypPodst &w)
    {
        // obsluge 1-go klienta z kolejki
        if(glowa == ogon)   // kolejka pusta
            return -1;      // informacje o błędzie operacji
        w = t[glowa++];
        if(glowa > MaxElt)
            glowa = 0;
        return 1;           // sukces operacji
    }
    int pusta()             // czy kolejka jest pusta ?
    {
        if(glowa == ogon)
            return 1;       // kolejka pusta
        else
            return 0;       // coś jest w kolejce
    }
};

