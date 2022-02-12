// sumafile.cpp -- funkcje majace tablice za parametr
#include <iostream>
#include <fstream>  // wejscie - wyjscie przez pliki
#include <cstdlib>  // funkcja exit()
const int SIZE = 60;
int main(){

    using namespace std;
    char filename[SIZE];
    ifstream inFile;    // obiekt obslugujacy odczyt z pliku

    cout << "Podaj nazwe pliku z danymi: ";
    cin.getline(filename, SIZE);
    inFile.open(filename);  // polaczenie inFile z plikiem
    if(!inFile.is_open())    // nieudana proba otwarcia pliku
    {
        cout << "Otwarcie pliku " << filename << " nie powiodlo sie.\n";
        cout << "Program zostanie zakonczony.\n";
        exit(EXIT_FAILURE);    
    }
    double value;
    double sum = 0.0;
    int count = 0;  // liczba elementów do odczytu

    inFile >> value;    // pobierz pierwszą wartość
    while(inFile.good()) // poki dobre dane i nie EOF
    {
        ++count;    // wczytano kolejna dana
        sum += value;   // obliczanie biezacej sumy
        inFile >> value;    // pobranie nastepnej wartosci
    }
    if(inFile.eof())
        cout << "Koniec pliku.\n";
    else if (inFile.fail())
        cout << "Wczytywanie danych przerwane - blad.\n";
    else
        cout << "Wczytywanie danych przerwane, przyczyna nieznana.\n";
    if(count == 0)
        cout << "Nie przetworzono zadnych danych.\n";
    else
    {
        cout << "Wczytywanie elementow: " << count << endl;
        cout << "Suma: " << sum << endl;
        cout << "Srednia: " << sum / count << endl;
    }
    inFile.close(); // plik już niepotrzebny
    return 0;
}        