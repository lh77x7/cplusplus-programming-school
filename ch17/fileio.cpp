// fileio.cpp -- zapis do pliku
#include <iostream> // niepotrzebne w przypadku większości systemów
#include <fstream>
#include <string>

int main()
{
    using namespace std;
    string filename;

    cout << "Podaj nazwe dla nowego pliku: ";
    cin >> filename;

    // utwórz dla nowego pliku obiekt strumienia wyjściowego i nazwij go fout
    ofstream fout(filename.c_str());
    
    fout << "Tylko dla Twoich oczu!\n"; // zapisz do pliku
    cout << "Podaj swoj tajny numer: "; // wypisz na ekranie
    float secret;
    cin >> secret;
    fout << "Twoj tajny numer to " << secret << endl;
    fout.close();   // zamknij plik

    // utwórz dla nowego pliku obiekt strumienia wejściowego i nazwij go fin
    ifstream fin(filename.c_str());
    cout << "Oto zawartosc pliku " << filename << endl;
    char ch;
    while (fin.get(ch)) // odczytaj znak z pliku i
        cout << ch;     // wpisz go na ekranie
    cout << "Gotowe\n";
    fin.close();

    return 0;
}