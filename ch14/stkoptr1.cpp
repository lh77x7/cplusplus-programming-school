// stkoptr1.cpp -- test stosu wskaźników
#include <iostream>
#include <cstdlib> // rand(), srand()
#include <ctime> // time()
#include "stcktp1.h"
const int Num = 10;

int main()
{
    std::srand(std::time(0));   // inicjalizacja funkcji rand()
    std::cout << "Podaj rozmiar stosu: ";
    int stacksize;
    std::cin >> stacksize;
    // tworzy pustu stos o pojemności stacksize
    Stack<const char *> st(stacksize);

    // pojemnik na teczki przychodzące
    const char * in[Num] = {
        "1: Henryk Gilgamesz", "2: Kinga Isztar",
        "3: Beata Roker", "4: Jan Flagranti",
        "5: Wolfgang Mocny", "6: Patrycja Kup",
        "7: Jacek Almond", "8: Ksawery Papryka",
        "9: Julian Mor", "10: Marian Macher"
    };

    // pojemnik na teczki wychodzące
    const char *out[Num];

    int processed = 0;
    int nextin = 0;

    while(processed < Num)
    {
        if(st.isempty())
            st.push(in[nextin]);
        else if(st.isfull())
            st.pop(out[processed++]);
        else if(std::rand() % 2 && nextin < Num) // szanse pół na pół
            st.push(in[nextin++]);
        else
            st.pop(out[processed++]);
    }

    for(int i = 0; i < Num; i++)
        std::cout << out[i] << std::endl;

    std::cout << "Koniec\n";

    return 0;
}