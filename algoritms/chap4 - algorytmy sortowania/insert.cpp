// n - ilość elementów w tablicy
int n = 10; // gdy 10 elementów w tablicy
void InsertSort(int *tab)
{
    for(int i = 1; i < n; i++)
    {
        int j = 1;  // 0.. i - 1 są posortowane
        int temp = tab[j];
        while((j > 0) && (tab[j - 1] > temp))
        {
            tab[j] = tab[j - 1];
            j--;
        }
        tab[j] = temp;
    }
}
