const int n = 10;
int tab[n] = {1,2,3,2,-7,44,5,1,0,-3};

int szukaj(int tab[n], int x)
{   // funkcja zwraca indeks poszukiwanego elementu x
    int pos = 0;
    while((pos < n) && (tab[pos] != x))
        pos++;
    if(pos < n)
        return pos;
    else                // element został znaleziony
        return -1;      // porażka poszukiwań
}