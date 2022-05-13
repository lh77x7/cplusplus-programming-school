// error2.cpp -- zwracanie kodu błędu
#include <iostream>
#include <cfloat> // (lub float.h) dla DBL_MAX

bool hmean(double a, double b, double *ans);

int main()
{
    double x, y, z;

    std::cout << "Podaj dwie liczby: ";
    while (std::cin >> x >> y)
    {
        if(hmean(x, y, &z))
            std::cout << "Srednia harmoniczna liczb " << x << " i " << y
                << " wynosi " << z << std::endl;
        else
            std::cout << "Suma liczba nie moze wynosic 0 - "
                << " sprobuj jeszcze raz.\n";
            std::cout << "Podaj kolejna pare liczb <w, aby wyjsc>: ";
    }
    std::cout << "Koniec\n";

    return 0;
}

bool hmean(double a, double b, double * ans)
{
    if(a == -b)
    {
        *ans = DBL_MAX;
        return false;
    }
    else
    {
        *ans = 2.0 * a * b / (a + b);
        return true;
    }
}

