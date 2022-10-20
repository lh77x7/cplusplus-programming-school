#include <iostream>

using std::cout;
using std::endl;

const int n = 5;

void pisz(int x, int y, int R[n][n])
{
    int k;
    if(R[x][y] == 0)
        cout << "Droga nie istnieje\n";
    else {
        cout << x << endl;
        k = x;
        while(k != y)
        {
            k = R[k][y];
            cout << k << endl;
        }
    }
    cout << endl;
}