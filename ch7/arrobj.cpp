// arrobj.cpp -- funkcje z obiektami typu array(C++ 11)
#include <iostream>
#include <array>
#include <string>

// dane stale
const int Seasons = 4;
const std::array<std::string, Seasons> Snames = 
{"Wiosna", "Lato", "Jesien", "Zima"};

// funkcje modyfikujące tablice typu array
void fill(std::array<double, Seasons> *pa);

// funkcja przetwarzająca tablice typu array bez integracji w jej zawartość
void show(std::array<double, Seasons> da);

int main(){
    std::array<double, Seasons> expenses;
    fill(&expenses);
    show(expenses);
    return 0;
}

void fill(std::array<double, Seasons> *pa)
{
    using namespace std;
    for(int i = 0; i < Seasons; i++)
    {
        cout << "Podaj wydatki za okres >>" << Snames[i] << "<<: ";
        cin >> (*pa)[i];
    }
}

void show(std::array<double, Seasons> da)
{
    using namespace std;
    double total = 0.0;
    cout << "\nWYDATKI\n";
    for(int i = 0; i < Seasons; i++)
    {
        cout << Snames[i] << ": " << da[i] << " zl" << endl;
        total += da[i];
    }
    cout << "Lacznie wydatki roczne: " << total << " zl" << endl;
}