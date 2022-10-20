#include <iostream>

using std:endl;
using std:cout;

const int n = 7;
int G[n][n];

void floyd(int g[n][n])
{
    for(int k = 0; k < n; k++)
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++)
                g[i][j] = min(g[i][j], g[i][k] + g[k][j]);
}

int main()
{
    for(int i = 0; i < n; i++)     // inicjalizacja grafu
        for(int j = 0; j < n; j++)  
            G[i][j] = 10000;    // nieskonczonosc ...
        
        // graf, jak na rysunku 10-11:
        G[0][3] = 30;   G[0][1] = 10;
        G[1][2] = 15;   G[1][4] = 40;
        G[2][3] = 5;    G[2][4] = 20;
        G[4][5] = 20;   G[4][6] = 10;
        G[5][6] = 5;
        G[6][3] = 25;

        floyd(G);   // wywołanie algorytmu
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++)
            {
                if(G[i][j] == 10000)
                    cout << i << "->" << j << "[drogi nie ma]\n";
                        else
                        if(i != j)
                        cout << i << "  ->  " << j << " = " << G[i][j] << endl;
            }
}

