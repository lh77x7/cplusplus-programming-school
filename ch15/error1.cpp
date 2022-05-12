// error1.cpp -- stosowani funkcji abort()
#include <iostream>
#include <cstdlib>
double hmean(double a, double b);

int main()
{
    double x, y, z;

    std::cout << "Podaj dwie liczby: ";
    while(std::cin >> x >> y)
    {
        z = hmean(x, y);
        std::cout << "Srednia harmoniczna liczb " << x << " i " << y << " wynosi " << z << std::endl;
        std::cout << "Podaj kolejna pare liczb <w, aby wyjsc>: ";
    }
    std::cout << "Koniec\n";
    
    return 0;
}

double hmean(double a, double b)
{
    if(a == -b)
    {
        std::cout << "Niepoprawne argumenty funkcje hmean()\n";
        std::abort();
    }
    return 2.0 * a * b / (a + b);
}