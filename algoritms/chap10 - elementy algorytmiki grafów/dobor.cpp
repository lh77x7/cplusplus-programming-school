#include <iostream>

using std::cout;

int nastepny[5] = {-1, -1, -1, -1, -1};

// zapamiętuje ostatni wybór, na samym początku
// następny [-1 + 1] = 0, później posuwamy się o 1
// pozycję dalej podczas danego etapu wyboru

int dobor[5] = {-1, -1, -1, -1, -1};    // rozwiązanie zadania

int wybiera[5][5] = {
                {0, 4, 3, 2, 1},    // A
                {1, 0, 4, 2, 3},    // B
                {0, 3, 1, 2, 4},    // C
                {3, 4, 0, 1, 2},    // D
                {4, 3, 2, 1, 0}     // E
};

// preferencje promotorów
// lubi [i][0] = nr A na liście 'i'
// lubi [i][1] = nr B na liście 'i' itd.

int lubi[5][5] = {
                {3, 4, 0, 2, 1},
                {2, 1, 3, 4, 0},
                {0, 1, 2, 4, 3},
                {4, 3, 2, 0, 1},
                {2, 3, 4, 0, 1}
};

int main()
{
    int student, wybierajacy, promotor, odrzucony;
    for(student = 0; student < 5; student++)
    {
        wybierajacy = student;
        while (wybierajacy != -1)
        {
            nastepny[wybierajacy]++;
            promotor = wybiera[wybierajacy][nastepny[wybierajacy]];
            if(dobor[promotor] == -1)   // promotor ( i jego temat) jest wolny
            {
                dobor[promotor] = wybierajacy;
                wybierajacy = -1;
            }
            else
            {
                if(lubi[promotor][wybierajacy] < lubi[promotor][dobor[promotor]])
                {
                    odrzucony = dobor[promotor];
                    dobor[promotor] = wybierajacy;
                    wybierajacy = odrzucony;
                }
            }
        }
        
    }

    for(int i = 0; i < 5; i++)
    cout << "(Promotor " << i << ", student " << (char)(dobor[i] + 'A') << ")\n";
}