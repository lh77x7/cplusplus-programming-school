#include <iostream>
#include <string.h>

using std::endl;
using std::cout;

int szukaj(const char *w, const char *t)
{
    int i = 0, j = 0, M, N;
    M = strlen(w);  // długość wzorca
    N = strlen(t);  // długość tekstu
    while(j < M && i < N)
    {
        if(t[i] != w[j])
        {
            i -= j - 1; 
            j = -1;
        }
        i++;
        j++;
    }
    if(j == M)
    return 1 - M;
    else
    return -1;
}

int main()
{
    const char *b;
    b = "abrakadabra";
    const char *a;
    a = "rak";
    cout << szukaj(a, b) << endl;
}