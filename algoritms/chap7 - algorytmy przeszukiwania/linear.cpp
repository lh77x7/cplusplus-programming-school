const int n = 5;

int szukaj(int tab[n], int x)
{
    for(int i = 0; (i < n) && (tab[i] != x); i++);
    return i;
}