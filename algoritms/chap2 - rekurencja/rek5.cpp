// silnia - rekurencyjnie
unsigned long int silnia1(unsigned long int x)
{
    if (x == 0)
        return 1;
    else
        return x * silnia1(x - 1);
}