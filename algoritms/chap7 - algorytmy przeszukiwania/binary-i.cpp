int szukaj(int tab[], int x)
{
    enum {TAK, NIE} Znalazlem = NIE;
    int left = 0, right = n - 1, mid;
    while(left <= right && Znalazlem != TAK)
    {
        mid = (left + right) / 2;
        if(tab[mid] == x)
            Znalazlem = TAK;
        else
            if(tab[mid] < x)
                left = mid + 1;
            else
                right = mid - 1;
    }
    if(Znalazlem == TAK)
    return mid;
    else return -1;
}