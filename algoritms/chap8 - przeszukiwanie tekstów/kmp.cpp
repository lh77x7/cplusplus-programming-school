int kmp(const char *w, const char *t)
{
    int i, j, N = strlen(t);
    for(int i = 0, j = 0; i < N && j < M; i++, j++)
        while((j >= 0) && (t[i] != w[j]))
            j = shift[j];
    if(j == M)
        return 1 - M;
    else
        return -1;
}