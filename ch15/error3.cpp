// error3.cpp -- używanie wyjątków
#include <iostream>
double hmean(double a, double b);

int main()
{
    double x, y, z;

    std::cout << "Podaj dwie liczby: ";
    while (std::cin >> x >> y)
    {
        try {   // początek bloku try
            z = hmean(x, y);
        } // koniec bloku try
        catch(const char * s) // początek bloku catch
        {
            std::cout << s << std::endl;
            std::cout << "Podaj kolejna pare liczb: ";
            continue;
        }   // koniec bloku catch
    
    std::cout << "Srednia harmoniczna liczb " << x << " i " << y  
        << " wynosi " << z << std::endl;
    std::cout << "Podaj kolejna pare liczb <w, aby wyjsc>: ";
    
    }
    std::cout << "Koniec\n";

    return 0;
}

double hmean(double a, double b)
{
    if(a == -b)
        throw "Niepoprawne argumenty funkcji hmean(): a = -b nie jest dozwolone";
    return 2.0 * a * b / (a + b);
}