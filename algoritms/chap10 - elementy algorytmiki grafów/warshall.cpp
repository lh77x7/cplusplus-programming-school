const int n = 5;

void warshall(int g[n][n])
{
    for(int x = 0; x < n; x++)
        for(int y = 0; y < n; y++)
            for(int z = 0; z < n; z++)
            if(g[y][z] == 0)
                g[y][z] = g[y][x] * g[x][z];
}