#include <iostream>

using std::endl;
using std::cout;

const int n = 3;
void greedy(double M, double W[n], double C[n], double X[n])
{
double Z = M;   // pozostaje do wypełnienia
for(int i = 0; i < n; i++)
    {
    if(W[i] > Z)
        break;
    X[i] = 1;
    Z = Z - W[i];
    if(i < n)
    X[i] = Z / W[i];
    }
}

int main()
{
    double W[n] = {10, 12, 16}, C[n] = {60, 70, 80}, X[n] = {0, 0, 0};
    greedy(20, W, C, X);
    double p = 0;
    cout << "i\tW\tC\tX" << endl;
    for(int i = 0; i < n; p += X[i] * C[i], i++)
        cout << i << "\t" << W[i] << "\t" << C[i] << "\t" << X[i] << endl;
    cout << "\nTotal: " << p << endl;
}
