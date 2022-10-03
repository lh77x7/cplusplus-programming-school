// funcja MacCarthy

unsigned long int MacCarthy(int x)
{
    if (x > 100)
       return (x - 10);
    else
        return MacCarthy(MacCarthy(x + 11));
}