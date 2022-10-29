#include <iostream>

using std::endl;
using std::cout;

int do_2(int a)
{
    return a * a;
}

int do_4(int a)
{
    return a * a * a * a;
}

int wzor(int x, int (*fun)(int))
{
    return fun(x);
}

int main()
{
    cout << "Wzor 1: " << wzor(10, do_2) << endl;
    cout << "Wzor 2: " << wzor(10, do_4) << endl; 
}