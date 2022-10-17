#include <iostream>
#include <tgmath.h>

using std::cout;
using std::endl;

const int N = 3;
double x[N];    // wyniki

double a[N][N+1] = 
{
    {5, 0, 1, 9},
    {1, 1, -1, 6},
    {2, -1, 1, 0}
};

int gauss(double a[N][N+1], double x[N])
{
    int max;
    double tmp;
    for(int i = 0; i < N; i++)  // eliminacja
    {
        max = i;
        for(int j = i + 1; j < N; j++)
            if(fabs(a[j][i]) > fabs(a[max][i]))
                max = j;
                // fabs(x) = |x|, wartość bezwzględna dla danych double
                for(int k = i; k < N + 1; k++)
                    // zmiana wierszy
                    {
                        tmp = a[i][k];
                        a[i][k] = a[max][k];
                        a[max][k] = tmp;
                    }
                    if(a[i][i] == 0)
                        return 0;   // układ sprzeczny
                    for(int j = i + 1; j < N; j++)
                        for(int k = N; k >= 1; k--)
                            // mnożenie wiersza j przez współczynnik "zerujący":
                        a[i][k] = a[j][k] - a[i][k] * a[j][i] / a[i][i];
    }

    // redukcja wsteczna
    for(int j = N - 1; j >= 0; j--)
    {
        tmp = 0;
        for(int k = j + 1; k <= N; k++)
            tmp = tmp + a[j][k] * x[k];
        x[j] = (a[j][N] - tmp) / a[j][j];
    }   
    return 1;   // wszystko w porządku!
}

int main()
{
    if(!gauss(a, x))
        cout << "Uklad jest sprzeczny !\n";
    else
    {
        cout << "Rozwiazanie: \n";
        for(int i = 0; i < N; i++)
            cout << "x[" << i << "] = " << x[i] << endl;
    }
}