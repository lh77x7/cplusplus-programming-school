// binary.cpp -- zapis i odczyt pliku binarnego
#include <iostream> // nie jest wymagane w przypadku większości systemów
#include <fstream>
#include <iomanip>
#include <cstdlib>

inline void eatline() { while(std::cin.get() != '\n') continue; }
struct planet
{
    char name[20];      // nazwa planety
    double population;  // zaludnienie
    double g;           // przyspieszenie grawitacyjne
};

const char * file = "planety.dat";

int main()
{
    using namespace std;
    planet pl;
    cout << fixed << right;

    // pokaż początkową zawartość
    ifstream fin;
    fin.open(file, ios_base::in | ios_base::binary);    // plik binarny
    if(fin.is_open())
    {
        cout << "Oto aktualna zawartosc pliku " << file << " file:\n";
        while(fin.read((char *) &pl, sizeof pl))
        {
            cout << setw(20) << pl.name << ": "
                 << setprecision(0) << setw(12) << pl.population
                 << setprecision(2) << setw(6) << pl.g << endl;
        }
        fin.close();
    }

    // dodaj nowe dane
    ofstream fout(file, ios_base::out | ios_base::app | ios_base::binary);
    if(!fout.is_open())
    {
        cerr << "Nie mozna otworzyc pliku " << file << " do zapisu.\n";
        exit(EXIT_FAILURE);
    }

    cout << "Podaj nazwe planety (aby zakonczyc, wprowadz pusty wiersz):\n";
    cin.get(pl.name, 20);
    while(pl.name[0] != '\0')
    {
        cout << "Podaj zaludnienie planety: ";
        cin >> pl.population;
        cout << "Podaj przyspieszenie grawitacyjne na planecie: ";
        cin >> pl.g;
        eatline();
        fout.write((char *) &pl, sizeof pl);
        cout << "Podaj nazwe planety (aby zakonczyc, wprowadz pusty wiersz):\n";
        cin.get(pl.name, 20); 
    }
    fout.close();

    // wyświetl zmieniony plik
    fin.clear();
    fin.open(file, ios_base::in | ios_base::binary);
    if(fin.is_open())
    {
        cout << "Oto nowa zawartosc pliku " << file << ":\n";
        while (fin.read((char *) &pl, sizeof pl))
        {
            cout << setw(20) << pl.name << ": "
                 << setprecision(0) << setw(12) << pl.population
                 << setprecision(2) << setw(6) << pl.g << endl;
        }
        fin.close();
    }
    cout << "Koniec.\n";
    return 0;
}