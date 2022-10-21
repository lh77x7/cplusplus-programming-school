#include <iostream>

using std::endl;
using std::cout;

const int n = 7;
int G[n][n], R[n][n];

void floyd(int g[n][n])
{
    for(int k = 0; k < n; k++)
    {
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            if(g[i][k] + g[k][j] < g[i][j])
            {
                g[i][j] = g[i][k] + g[k][j];
                R[i][j] = k;
            }
        }
    }
}

void droga(int i, int j)
{
    int k = R[i][j];
    if(k != 0)
    {
        droga(i, k);
        cout << k << "  ";
        droga(k, j);
    }
}

int main()
{
    initG();    // zerowanie grafu, wszedzie G[i][j] = infinity
    initR();    // zerowanie matrycy kierowania ruchem, wszedzie R[i][j] = 0

    G[0][3] = 30;   G[0][1] = 10;
    G[1][2] = 15;   G[1][4] = 40;
    G[2][3] = 5;    G[2][4] = 20;
    G[4][5] = 20;   G[4][6] = 10;
    G[5][6] = 5;
    G[6][3] = 25;

    floyd(G);

    for(int i = 0; i < n; i++) 
    {
        for(int j = 0; j < n; j++)
        {
            if(G[i][j] == 10000)
                cout << i << "-->" << j << "[drogi nie ma]\n";
            else
                if(i != j)
                {
                    cout << i << "-->" << j << " = " << G[i][j] << ", droga przez: ";
                    droga(i, j);
                    cout << endl;
                }
        }
    }         
}