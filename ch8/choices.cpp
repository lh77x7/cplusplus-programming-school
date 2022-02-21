// choices.cpp -- wybór szablonu
#include <iostream>
template<class T> // albo template <typename T>
T lesser(T a, T b) // #1
{
    return a < b ? a : b;
}

int lesser(int a, int b)
{
    a = a < 0 ? -a : a;
    b = b < 0 ? -b : b;
    return a < b ? a : b;
}

int main()
{
    using namespace std;
    int m = 20;
    int n = -30;
    double x = 15.5;
    double y = 25.9;

    cout << lesser(m, n) << endl;   // #2
    cout << lesser(x, y) << endl;   // #1 (z double jako T)
    cout << lesser(m, n) << endl;   // #1 (z int jako T)
    cout << lesser<int>(x, y) << endl;  // #1 (z int jako T)
    return 0;   
}