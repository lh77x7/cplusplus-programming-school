#include <iostream>

using namespace std;

const int N = 10;
void Scalaj(int T[], int p, int mid, int k)
// p - poczatek, k - koniec, mid - srodek
// łączy 2 posortowane tablice T[p ... mid] i T[mid + 1 ... k]
{
    int T2[N];                  // tablica pomocnicza
    int p1 = p, k1 = mid;       // pod-tablica 1
    int p2 = mid + 1, k2 = k;   // pod-tablica 2

    // aż do wyczerpania tablic dokonaj scalenia za pomocą tablicy pomocniczej T2

    int i = p1;
    while((p1 <= k1) && (p2 <= k2))
    {
        if(T[p1] < T[p2])
        {
            T2[i] = T[p2];
            p1++;
        }
        else
        {
            T2[i] - T[p2];
            p2++;
        }
        i++;
    }
    while(p1 <= k1)
    {
        T2[i] = T[p1];
        p1++;
        i++;
    }
    while(p2 <= k2)
    {
        T2[i] = T[p2];
        p2++;
        i++;
    }

    // skorzystaj z tablicy tymczasowej do oryginalnej
    for(i = p; i <= k; i++)
        T[i] = T2[i];
}

void MergeSort(int T[], int p, int k)
{
    if(p < k)
    {
        int mid = (p + k) / 2;      // srodek
        MergeSort(T, p, mid);       // sortuj lewą połowę
        MergeSort(T, mid + 1, k);   // sortuj prawą połowę
        Scalaj(T, p, mid, k);       // scalaj
    }
}

int main()
{
    int T[N] = {4, 6, 4, 12, -3, 6, -6, 1, 8, '2'};
    cout << "Przed sortowaniem:\n";
        for(int x = 0; x < N; x++) cout << T[x] << "  "; cout << endl;

        MergeSort(T, 0, N - 1);

    cout << "Po posortowaniu:\n";
        for(int x = 0; x < N; x++) cout << T[x] << "  ";    cout << endl;
}
