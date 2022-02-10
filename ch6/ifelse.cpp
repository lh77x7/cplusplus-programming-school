// ifelse.cpp -- uzycie instrukcji if else
#include <iostream>
int main()
{
    
    char ch;

    std::cout << "Pisz, a ja bede powtarzac.\n";
    std::cin.get(ch);
    while(ch != '.')
    {
        if(ch == '\n')
            std::cout << ch;    // jesli znak nowego wiersza
        else   
            std::cout<< ++ch;   // dla wszystkich innych znakow
        std::cin.get(ch);        
    }
    std::cout << "\nProsze wybaczyc drobne niedorobki.\n";
    return 0;
}