// usestacktp.cpp -- test szablonu klasy do obsługi stosu
#include <iostream>
#include <string>
#include <cctype>
#include "stacktp.h"
using std::cin;
using std::cout;

int main()
{
    Stack<std::string> st;  // tworzy pusty stos
    char ch;
    std::string po;
    cout << "Wpisz D, aby dodac zamowienie,\n"
        << "P, aby przetworzyc zamowienie, i Z, aby zakonczyc.\n";
    while(cin >> ch && std::toupper(ch) != 'Z')
    {
        while (cin.get() != '\n')
            continue;
        if(!std::isalpha(ch))
        {
            cout << '\a';
            continue;
        }
        switch (ch)
        {
        case 'D':
        case 'd': cout << "Podaj nowy numer zamowienia: ";
            cin >> po;
            if(st.isfull())
                cout << "stos pelen\n";
            else
                st.push(po);
            break;
        
        case 'P':
        case 'p': if(st.isempty())
                    cout << "Stos pusty\n";
                   else {
                       st.pop(po);
                       cout << "Numer zamowienia " << po << " zdjety\n";
                       break;
                   }
        }
        cout << "Wpisz D, aby dodac zamowienie,\n"
            << "P, aby przetworzyc zamowienie, i Z, aby zakonczyc.\n";
    }
    cout << "Koniec\n";

    return 0;

}