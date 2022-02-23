#include <iostream>
#include "golf.h"

extern const int Len;

int main(void){

    int uzytkownicy = 0;
    int choice;

    std::cout << "Podaj liczbe uzytkownikow: ";
    std::cin >> uzytkownicy;

    // dynamiczny przydzial pamieci
    golf *pUzytkownicy = new golf[uzytkownicy];
    
    std::cout << "Wybierz sposob wypeniania tablicy struktur.\n";
    std::cout << "1 sposob - int setgolf(& golf).\n";  
    std::cout << "2 sposob - void setgolf(golf &g, const char *name, int hc).\n";
    std::cin >> choice;
    switch(choice) {
        case 1: 
        {
            for(int i = 0; i < uzytkownicy; i++)
            {
                std::cout << "Uzytkonik " << i + 1 << ": ";
                setgolf(pUzytkownicy[i]);
                if(pUzytkownicy[i].fullname[0] == ' ' || pUzytkownicy[i].fullname[0] == '\0')
                    break;
            }
        } 
        break;      
        
        case 2:
        {
            char Nazwalancucha[Len] = {};
            int hc = 0;

            for(int i = 0; i < uzytkownicy; i++)
            {
                std::cout << "Podaj dane uzytkownika " << i + 1 << ". Imie: ";
                std::cin >> Nazwalancucha;
                std::cout << "Podaj dane uzytkownika " << i +1 << ". Handicap: ";
                std::cin >> hc;
                setgolf(pUzytkownicy[i], Nazwalancucha, hc);
                if(pUzytkownicy[i].fullname[0] == ' ' || pUzytkownicy[i].fullname == '\0')
                    break; 
            }
        }
        break;
        default:
            std::cout << "\nNie ma takiej opcji.Do zobaczenia\n";
            break;

        std::cout << "Tablica struktur uzytkownikow:\n";
        for(int i = 0; i < uzytkownicy; i++) {
            std::cout << "\nUzytkownik " << i + 1 << ":\n";
            showgolf(pUzytkownicy[i]);
        }

        std::cout << "Chcesz zmienic handicap dla jednego z uzytkownikow: 1 - Yes, 0 - No";
        std::cin >> choice;
        if(choice) {
            int zawodnik = 0;
            std::cout << "Wybierz numer zawodnika i nowy handicap: ";
            std::cin >> zawodnik >> choice;
            handicap(pUzytkownicy[zawodnik - 1], choice);
        }

        std::cout << "\nTablica wynikow struktury zawodnikow:\n";
        for(int i = 0; i < uzytkownicy; i++)         
        {
            std::cout << "\nUzytkownik " << i + 1 << ":\n";
            showgolf(pUzytkownicy[i]);
        }

        delete pUzytkownicy;
        pUzytkownicy = NULL;
    }

    return 0;
}