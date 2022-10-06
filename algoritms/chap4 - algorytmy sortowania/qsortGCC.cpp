#include <iostream>

using namespace std;

// definicje funkcji
int comp(const void *x, const void *y)
{
    int xx = *(int *)x;     // jawna konwersja z typu
    int yy = *(int *)y;     // 'void*' do 'int*'

    if (xx < yy)        return -1;  // < 0
    if (xx == yy)
        return 0;       // = 0
    else 
        return 1;       // > 0
}

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

// deklaracje stałych
const int n = 12;
int tab[n] = {40, 29, 2, 1, 6, 18, 20, 32, 34, 39, 23, 41};


// main
int  main()
{
    qsort(tab, n, sizeof(int), comp);
    for(int i = 0; i < n; i++)
        cout << tab[i] << "  ";
        cout << endl;
}

