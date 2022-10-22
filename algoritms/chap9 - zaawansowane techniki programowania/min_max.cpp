const int n = 12;
int tab[n] = {23, 12, 1, -5, 34, -7, 45, 2, 88, -3, -9, 1};
void min_max(int t[], int min, int &max)
{
    // użyj tylko g >= 1!
    min = max = t[0];
    for(int i = 1; i < n; i++)
    {
        if(max < t[i])  // (*)
            max = t[i];
        if(min > t[i])  // (**)
            min = t[i];
    }
}
