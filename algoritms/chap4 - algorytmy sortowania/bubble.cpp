// n - ilość elementów
int n = 10;
void bubble(int *tab)
{
    for(int i = 1; i < n; i++)
        for(int j = n - 1; j >= i; j--)
            if (tab[j] < tab[j - 1])
            {   // zmiana tab[j - 1] z tab[j]
                int tmp = tab[j - 1];
                tab[j - 1] = tab[j];
                tab[j] = tmp;
            }
}