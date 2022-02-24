#include "sales.h"

int main()
{
    SALES::Sales one, two;
    two = {100, 200, 300, 400};
    double Arr[SALES::QUARTERS] = {200, 300, 400, 500};
    SALES::setSales(one, Arr, SALES::QUARTERS);
    SALES::showSales(one);
    std::cout << "-------------" << std::endl;
    SALES::setSales(two);
    SALES::showSales(two);

    return 0;
}