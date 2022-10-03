// jest konieczne użycie biblioteki <graphics.h> - funkcje lineto(), moveto(), getmaxx(), getx(), gety()

const double alpha = 10;
// alpha - odstęp między liniami równoległymi
// lg - długość boku rysowanego w pierwszej kolejności
void spirala(double lg, double x, double y)
{
    if (lg > 0)
    {
        lineto(x+lg,y);
        lineto(x+lg, y+lg);
        lineto(x+alpha, y+lg);
        lineto(x+alpha, y+alpha);
        spirala(lg - 2*alpha, x+alpha, y+alpha);
    }
}

int main()
{
    moveto(90, 50);
    spirala(getmaxx(), getx(), gety());
    getch();
}