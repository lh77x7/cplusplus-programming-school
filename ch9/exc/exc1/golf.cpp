
#include "golf.h"

extern const int Len;

    void setgolf(golf & g, const char * name, int hc){
        strcpy(g.fullname, name);
        g.handicap = hc;
    }

    int setgolf(golf & g){       
        std::cout << "Podaj imie: ";
        std::cin >> g.fullname;
        std::cout << "Podaj handicap: ";
        std::cin >> g.handicap;
        if(g.fullname[0] == ' ' || g.fullname[0] == '\0')
            return 0;
        else
            return 1;
    }

    void handicap(golf & g, int hc){
        g.handicap = hc;
    }

    void showgolf(const golf & g){
        std::cout << g.fullname << std::endl;
        std::cout << g.handicap << std::endl;
    }