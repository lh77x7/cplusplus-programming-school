#include "SALES.h"

extern const int QUARTERS;

int main()
{
    SALES::Sales one;
    double Ar[QUARTERS] = {100, 200, 300, 400};
    SALES::Sales two(Ar, QUARTERS);
    one.showSales();
    two.showSales();

    return 0;
}