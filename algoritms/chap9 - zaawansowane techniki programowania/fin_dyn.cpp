#include <iostream>

using std::endl;
using std::cout;

const int n = 16;

void fib_dyn(int x, int f[])
{
    // f jest tablicą przekazaną w parametrze. Przykład wywołania:
    // int f[100];
    // fib_dyn(16, f);
    f[0] = 1;
    f[1] = 1;
    int i;
    for(i = 2; i < x; i++)
        f[i] = f[i - 1] + f[i - 2];
}

int main()
{
    int f[100];
    fib_dyn(16, f);
    return 0;
}