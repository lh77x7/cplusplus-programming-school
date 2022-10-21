// strategia "w głąb"

int i, j, G[n][n], V[n];
// G - graf nxn
// V - przechowuje informacje, czy dany wierzechołek 
// był już badany (1) lub nie(0)

void szukaj(int G[n][n], in V[n])
{
    int i;
    for(i = 0; i < n; i++)
    V[i] = 0;   // wierzchołek nie był jeszcze badany
    for(i = 0; i < n; i++)
        if(V[i] == 0)
            zwiedzaj(G, V, i);
}

void zwiedzaj(int G[n][n], int V[n], int i)
{
    V[i] = 1;   // zaznaczamy wierzchołek jako "zbadany"
    for(int k = 0; k < n; k++)
    if(G[i][k] != 0)    // istnieje przejście
        if(V[k] == 0)
            zwiedzaj(G, V, k);
}