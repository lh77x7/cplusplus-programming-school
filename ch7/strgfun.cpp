// strgfun.cpp -- funkcje z łańcuchem znakowym jako parametrem
#include <iostream>
unsigned int c_in_str(const char *str, char ch);
int main(){
    using namespace std;
    
    char mmm[15] = "minimum";    // łańcuch w tablicy
    char const *wail = "ululate"; // wail wskazuje lancuch znakowy

    unsigned int ms = c_in_str(mmm, 'm');
    unsigned int us = c_in_str(wail, 'u');
    
    cout << ms << " znakow m w " << mmm << endl;
    cout << us << " znakow u w " << wail << endl;
    return 0;
}

// funkcja zlicza wystapienie znaku ch w lancuchu str
unsigned int c_in_str(const char *str, char ch)
{

    unsigned int count = 0;

    while(*str) // koniec, gdy *str jest rowne '\0'
    {
        if(*str)
            if(*str == ch)
                count++;
            str++;  // przestaw wskaznik na nastepny znak
    }
    return count;
}
