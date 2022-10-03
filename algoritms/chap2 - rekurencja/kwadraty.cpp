// użyj biblioteki <graphics.h>
/*
void kwadraty( int n, double lg, double x, double y)
{
    // n - parzysta ilość kwadratów
    // x, y - współrzędne punktu startowego
    if (n > 0)
    {
        lineto(x+lg, y);
        lineto(x+lg, y+lg);
        lineto(x, y+lg);
        lineto(x, y+lg/2);
        lineto(x+lg/2, y+lg);
        lineto(x+lg/2, y);
        lineto(x+lg/4, y+lg/4);
            kwadraty(n-1, lg/2, x+lg/4, y+lg/4);
            lineto(x, y+lg/2);
            lineto(x, y);
    }
}

int main()
{
    // inicjuj tryb graficzny
    moveto(90, 50);
    kwadraty(5, getmaxx()/2, getx(), gety());
    getch();
    // zamknij tryb graficzny
}

*/