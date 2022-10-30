class Sterta
{
    private:
        int *t;
        int L;              // ilość elementów
    public:
        Sterta(int nMax)    // prosty konstruktor
        {
            t = new int [nMax + 1];
            L = 0;
        }

        void wstaw(int x); //+
        int obsluz(); //+
        void DoGory(); //+
        void NaDol(); //+

};  // koniec definicji klasy Starta

void Sterta::wstaw(int x)
{
    t[++L] = x;
    DoGory();
}

int Sterta::obsluz()
{
    int x = t[1];
        t[1] = t[L--];  // brak kontroli błędów
    NaDol();
    return x;
}

void Sterta::DoGory()
{
    int temp = t[L];
    int n = L;

    while ((n!= 1) && (t[n/2] <= temp))
    {
        t[n] = t[n / 2];
        n = n / 2;
    }
    t[n] = temp;
}

void Sterta::NaDol()
{
    int i = 1;
    while(1)
    {
        int p = 2 * i;  // lewy potomek węzła "i": p, prawy: p+1
        if(p > L)
            break;
        if(p + 1 <= L)  // prawy potomek niekoniecznie musi istnieć!
            if(t[p] < t[p + 1])
        p++;            // przesuwamy się do następnego
        if(t[i] >= t[p])
            break;
        int temp = t[p];    // zamiana
            t[p] = t[i];
            t[i] = temp;
        i = p;
    }
}
