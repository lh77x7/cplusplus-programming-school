#include <iostream>

const int QUARTERS = 4;

namespace SALES 
{
    class Sales 
    {
        private:
            double sales[QUARTERS];
            double average;
            double min;
            double max;

        public:
            Sales();
            Sales(const double ar[], int n);
            void showSales() const;
    };
}