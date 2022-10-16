#include <iostream>
#include <tgmath.h>

const double epsilon = 0.0001;

double wart(double x, double yn)
{
    double yn1 = 2 * yn - x * yn * yn;
    // fabs(x) = |x|, wartość bezwzględna dla danych double
    if(fabs(yn - yn1) < epsilon)
        return yn1;
    else
        return wart(x, yn1);
}