int a(int n, int p)
{
    if(n == 0)
        return 1;
    if((p == 0) && (n >= 1))
        if (n == 1)
            return 2;
        else
            return n + 2;

    if ((p >= 1) && (n >= 1))
        return a(a (n - 1, p), p - 1);
}