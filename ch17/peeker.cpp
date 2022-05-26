// peeker.cpp -- niektore metody klasy istream
#include <iostream>

int main()
{
    using std::cout;
    using std::cin;
    using std::endl;

    // odczytuj i potwierdzaj znaki na ekranie az do napotkania #
    char ch;

    while(cin.get(ch))  // petla przerywa wykonanie po napotkaniu konca pliku
    {
        if(ch != '#')
            cout << ch;
        else
        {
            cin.putback(ch);    // wstaw znak z powrotem
            break;
        }
    }

    if(!cin.eof())
    {
        cin.get(ch);
        cout << endl << ch << " to nastepny znak wejsciowy.\n";
    }
    else
    {
        cout << "Napotkano koniec pliku.\n";
        std::exit(0);
    }

    while(cin.peek() != '#')    // wczesniej sprawdz
    {
        cin.get(ch);
        cout << ch;
    }
    
    if(!cin.eof())
    {
        cin.get(ch);
        cout << endl << ch << " to nastepny znak wejsciowy.\n";
    }
    else
        cout << "Napotkano koniec pliku.\n";

    return 0;
}