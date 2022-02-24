
#include "sales.h"

void SALES::setSales(Sales & s, const double ar[], int n){

    int i = 0;
    s.max = ar[0];
    s.min = ar[0];
    s.avarage = 0;
    s.avarage += ar[i];

    for(i = 0; i < SALES::QUARTERS; i++)
    {
        s.sales[i] += ar[i];
        if(ar[i] > s.max)
            s.max = ar[i];
        if(ar[i] < s.min)
            s.min = ar[i];
        s.avarage += ar[i];
    }

    s.avarage /= SALES::QUARTERS;    

}

void SALES::setSales(Sales & s){

    int i = 0;
    s.max = s.sales[i];
    s.min = s.sales[i];
    s.avarage += s.sales[i];

    for(i = 0; i < SALES::QUARTERS; i++)
    {
        if(s.sales[i] > s.max)
            s.max = s.sales[i];
        if(s.sales[i] < s.min)
            s.min = s.sales[i];
        s.avarage += s.sales[i];
    }

    s.avarage /= SALES::QUARTERS;

}

void SALES::showSales(const Sales & s){

    int i = 0;

    for(i = 0; i < SALES::QUARTERS; i++)
        std::cout << i + 1  << " s.sales = " << s.sales[i] << std::endl;
    std::cout << "average = " << s.avarage << std::endl;
    std::cout << "s.max = " << s.max << std::endl;
    std::cout << "s.min = " << s.min << std::endl;

}