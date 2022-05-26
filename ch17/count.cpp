// count.cpp -- policz znaki w plikach wymienionych na liście
#include <iostream>
#include <fstream>
#include <cstdlib>      // funkcja exit()
int main(int argc, char * argv[])
{
    using namespace std;
    if(argc == 1)   // zakończ w przypadku braku argumentów
    {
        cerr << "Skladnia: " << argv[0] << " plik[i]\n";
        exit(EXIT_FAILURE);
    }

    ifstream fin;   // otwórz strumień
    long count;
    long total = 0;
    char ch;

    for(int file = 1; file < argc; file++)
    {
        fin.open(argv[file]);   // skojarz strumien z plikiem argv[file]
        if(!fin.is_open())
        {
            cerr << "Nie mozna otworzyc pliku " << argv[file] << endl;
            fin.clear();
            continue;
        }

        count = 0;
        while (fin.get(ch))
            count++;
        cout << count << " znakow w pliku " << argv[file] << endl;
        total += count;
        fin.clear();    // instrukcja konieczna w przypadku niektórych implementacji
        fin.close();    // odłącz plik
    }
    cout << total << " znakow we wszystkich plikach\n";

    return 0;    
}