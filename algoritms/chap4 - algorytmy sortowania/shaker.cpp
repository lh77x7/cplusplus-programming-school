int n = 10;
void ShakerSort(int *tab)
{
    int left = 1, right = n - 1, k = n - 1;
    do 
    {
        for(int j = right; j >= left; j--)
            if(tab[j -1 ] > tab[j])
            {
                zamiana(tab[j - 1], tab[j]);
                k = j;
            }
            left = k + 1;
            for(int j = left; j <= right; j++)
                if(tab[j - 1] > tab[j])
                {
                    zamiana(tab[ j - 1], tab[j]);
                    k = j;
                }
                right = k - 1;
    } while(left < right);
}

void zamiana(int &a, int &b)
{
    int buf = a;
    a = b;
    b = buf;
}