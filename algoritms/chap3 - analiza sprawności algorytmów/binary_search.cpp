int binary_search(int *tab, int x, int left, int right)
{
    if(left == right)
        if(tab[left] == x)
            return left;
        else            // element znaleziony
            return -1;  // element nie odnaleziony
    else
        {
            int mid = (left + right) / 2;
            if(tab[mid] == x)
                return mid;     // element znaleziony !
            else
                if(x < tab[mid])
                    return binary_search(tab, x, left, mid);
                else   
                    return binary_search(tab, x, mid, right);
        } 
}