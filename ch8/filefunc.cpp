// filefunc.cpp -- funkcje korzystające z parametru ostream &
#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

void file_it(ostream & os, double fo, const double fe[], int n);
const int LIMIT = 5;
int main(){
    ofstream fout;
    const char * fn = "ep-data.txt";
    fout.open(fn);
    if(!fout.is_open())
    {
        cout << "Nie moge otworzyc " << fn  << ". Do widzenia.\n";
        exit(EXIT_FAILURE);
    }
    double objective;
    cout << "Podaj ogniskowa teleskopu w milimetrach:";
    cin >> objective;
    double eps[LIMIT];
    cout << "Podaj ogniskowa (w mm) " << LIMIT << " okularow:\n";
    for(int i = 0; i < LIMIT; i++)
    {
        cout << "Okular nr " << i + 1 << ": ";
        cin >> eps[i];
    }
    file_it(fout, objective, eps, LIMIT);
    file_it(cout, objective, eps, LIMIT);
    cout << "Gotowe.\n";
    return 0;
}

void file_it(ostream & os, double fo, const double fe[], int n)
{
    ios_base::fmtflags initial;
    initial = os.setf(ios_base::fixed); // zachowaj formatowanie poczatkowe
    os.precision(0);
    os << "Ogniskowa obiektywu: " << fo << " mm\n";
    os.setf(ios::showpoint);
    os.precision(1);
    os.width(12);
    os << "f okularu";
    os.width(15);
    os << "powiekszenie" << endl;
    for(int i = 0; i < n; i++)
    {
        os.width(12);
        os << fe[i];
        os.width(15);
        os << int(fo / fe[i] + 0.5) << endl;
    }
    os.setf(initial);   // przywrocenie poczatkowego formatowania
}