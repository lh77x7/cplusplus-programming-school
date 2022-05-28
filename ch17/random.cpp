// random.cpp -- dostęp swobodny do pliku binarnego
#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>

const int LIM = 20;

struct planet
{
    char name[LIM];     // nazwa planety
    double population;  // zaludnienie
    double g;           // przyspieszenie grawitacyjne
};

const char * file = "planety.dat";   // plik musi istnieć!!
inline void eatline() { while(std::cin.get() != '\n') continue; }

int main()
{
    using namespace std;
    planet pl;
    cout << fixed;

    // pokaż początkową zawartość
    fstream finout;     // strumienie do odczytu i zapisu
    finout.open(file, ios_base::in | ios_base::out | ios_base::binary);
    int ct = 0;
    if(finout.is_open())
    {
        finout.seekg(0);    // przejdź na początek
        cout << "Oto aktualna zawartosc pliku " << file << ":\n";
        while(finout.read((char *) &pl, sizeof pl))
        {
            cout << ct++ << ": " << setw(LIM) << pl.name << ": "
                 << setprecision(0) << setw(12) << pl.population
                 << setprecision(6) << setw(6) << pl.g << endl;
        }
        if(finout.eof())
            finout.clear();     // skasuj znacznik końca pliku
        else
        {
            cerr << "Nie mozna otworzyc pliku " << file << ".\n";
            exit(EXIT_FAILURE);
        }
    }
    else
    {
        cerr << "Nie mozna otworzyc pliku " << file << ".\n";
        exit(EXIT_FAILURE);
    }

    // zmień rekord
    cout << "Podaj numer rekordu, ktory chcesz zmienic: ";
    long rec;
    cin >> rec;
    eatline();
    if(rec < 0 || rec >= ct)
    {
        cerr << "Nieprawidlowy numer rekordu -- koniec pracy programu\n";
        exit(EXIT_FAILURE);
    }
    streampos place = rec * sizeof pl;  // konwertuj na typ streampos
    finout.seekg(place);                // dostęp swobodny
    if(finout.fail())
    {
        cerr << "Blad podczas wyszukiwania pozycji\n";
        exit(EXIT_FAILURE);
    }

    finout.read((char *) &pl, sizeof pl);
    cout << "Twoj wybor:\n";
    cout << rec << ": " << setw(LIM) << pl.name << ": "
         << setprecision(0) << setw(12) << pl.population
         << setprecision(2) << setw(6) << pl.g << endl;
    if(finout.eof())
        finout.clear();     // skasuj znacznik końca pliku
    
    cout << "Podaj nazwe planety: ";
    cin.get(pl.name, LIM);
    cout << "Podaj zaludnienie planety: ";
    cin >> pl.population;
    cout << "Podaj przyspieszenie grawitacyjne na planecie: ";
    cin >> pl.g;
    finout.seekg(place);    // wróć
    finout.write((char *) &pl, sizeof pl) << flush;
    if(finout.fail())
    {
        cerr << "Blad przy probie zapisu\n";
        exit(EXIT_FAILURE);
    }

    // wyświetl zmieniony plik
    ct = 0;
    finout.seekg(0);    // przejdź do początku pliku
    cout << "Oto nowa zawartosc pliku " << file << ":\n";
    while(finout.read((char *) &pl, sizeof pl))
    {
        cout << ct++ << setw(LIM) << pl.name << ": "
             << setprecision(0) << setw(12) << pl.population
             << setprecision(2) << setw(6) << pl.g << endl;
    }
    finout.close();
    cout << "Koniec.\n";

    return 0;
}

 