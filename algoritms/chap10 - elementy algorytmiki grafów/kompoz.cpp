const int n = 5;

void kompozycja(int g1[n][n], int g2[n][n], int g3[n][n])
{
    int z;
    for(int x = 0; x < n; x++)
        for(int y = 0; y < n; y++)
        {
            z = 0;
            while(1)    // pętla nieskończona
            {
                if(z == n)
                    break;
                if((g1[x][z] == 1) && (g2[z][y] == 1))
                {
                    g3[x][y] = 1;
                    break;
                }
                z++;
            }
        }
}