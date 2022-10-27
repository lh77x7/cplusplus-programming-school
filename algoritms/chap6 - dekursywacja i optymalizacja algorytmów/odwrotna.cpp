void P1(int a, int &b)
{
    if(a == 0)
        b = 1;
    else
    {
        P1(a - 1, b);
        // tu funkcja odwrotna ?
        b = b + a;
    }
}