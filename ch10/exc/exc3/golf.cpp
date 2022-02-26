#include "golf.h"

void Golf::setgolf(const char * name, int hc)
{
    strcpy(fullname, name);
    Handicap = hc;
}

int Golf::setgolf()
{
    std::cout << "Please enter user name: ";
    std::cin >> fullname;
    std::cout << "Please enter user handicap: ";
    std::cin >> Handicap;
    if(fullname[0] == ' ' || fullname[0] == '\0')
        return 0;
    else
        return 1;
}

void Golf::handicap(int hc)
{
    Handicap = hc;
}

void Golf::showgolf()
{
    std::cout << "\nUser fullname = " << fullname << ", user handicap = " << Handicap << ".\n";
}