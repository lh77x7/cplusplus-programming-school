int rk(char w[], char t[])
{
    unsigned long i, bM_1 = 1, Hw = 0, Ht = 0, M, N;
    M = strlen(w), N = strlen(t);
    for(i = 0; i < M; i++)
    {
        Hw = (Hw * b + indeks(w[i]))%p;     // inicjacja funkcji H dla wzrorca
        Ht = (Ht * b + indeks(t[i]))%p;     // inicjacja funkcji H dla tekstu
    }
    for(i = 1; i < M; i++)  bM_1 = (b*bM_1)%p;
    for(i = 0; Hw != Ht; i++)   // przesuwanie się w tekście
    {
        Ht = (Ht + b * p - indeks(t[i]) * bM_1)%p;  // (*)
        Ht = (Ht*b + indeks(t[i+M]))%p;
        if(i > N - M)
            return -1;  // porażka poszukiwań
    }
    return i;
}