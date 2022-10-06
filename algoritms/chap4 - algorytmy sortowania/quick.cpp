void qsort(int *tab, int left, int right)
{
    if(left < right)
    {
        int m = left;
        for(int i = left + 1; i <= right; i++)
            if(tab[i] < tab[left])
                zamiana(tab[++m], tab[i]);
        zamiana(tab[left], tab[m]);
        qsort(tab, left, m - 1);
        qsort(tab, m + 1, right);
    }
}

void zamiana(int &a, int &b)
{
    int buf = a;
    a = b;
    b = buf;
}