void dodaj_wielomiany(int x[], int y[], int z[], int rozm)
{
    for(int i = 0; i < rozm; i++)
    z[i] = x[i] + y[i]; // wielomian z = x + y
}

void mnoz_wielomiany(int x[], int y[], int z[], int rozm)
{
    int i, j;
    for(i = 0; i < rozm; i++)
        z[i] = 0;       // zerowanie rezultatu z = x*y
    
    for(i = 0; i < rozm; i++)
        for(j = 0; j < rozm; j++)
            z[i+j] = z[i+j] + x[i] * y[j];
}