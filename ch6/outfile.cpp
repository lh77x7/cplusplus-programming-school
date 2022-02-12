// outfile.cpp -- zapis do pliku
#include <iostream>
#include <fstream>  // plikowe wejscie - wyjscie
int main(){

    using namespace std;

    char automobile[50];
    int year;
    double a_price;
    double d_price;

    ofstream outFile;   // utworzenie obiektu na wyniki
    outFile.open("carinfo.txt");    // powiazanie obiektu z plikiem

    cout << "Podaj marke i model auta: ";
    cin.getline(automobile, 50);
    cout << "Podaj rok produkcji: ";
    cin >> year;
    cout << "Podaj cene wyjsciowa: ";
    cin >> a_price;
    d_price = 0.913 * a_price;

    // za pomoca cout pokaz informacje na ekranie
    cout << fixed;
    cout.precision(2);
    cout.setf(ios_base::showpoint);
    cout << "Marka i model: " << automobile << endl;
    cout << "Rok: " << year << endl;
    cout << "Cena wywolawcza w zl: " << a_price << endl;
    cout << "Cena biezaca: " << d_price << endl;

    // dokladnie to samo robimy outFile zamiast cout
    outFile << fixed;
    outFile.precision(2);
    outFile.setf(ios_base::showpoint);
    outFile << "Marka i model: " << automobile << endl;
    outFile << "Rok: " << year << endl;
    outFile << "Cena wywolawcza w zl: " << a_price << endl;
    outFile << "Cena biezaca: " << d_price << endl;

    outFile.close();
    return 0;
}