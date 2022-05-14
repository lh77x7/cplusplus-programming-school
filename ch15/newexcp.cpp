// newexcp.cpp -- wyjątek bad_alloc
#include <iostream>
#include <new>
#include <cstdlib> // potrzebne dla exit() i EXIT_FAILURE
using namespace std;

struct Big
{
    double stuff[20000];
};

int main()
{
    Big * pb;
    try{
        cout << "Proba przydzialu wielkiego bloku pamieci:\n";
        pb = new Big[10000];    // 1 600 000 000 bajtów
        cout << "Udalo sie przebrnac przez instrukcje new:\n"; 
    }
    catch(bad_alloc & ba)
    {
        cout << "Przechwycilem wyjatek!\n";
        cout << ba.what() << endl;
        exit(EXIT_FAILURE);
    }
    cout << "Udalo sie przydzielic pamiec\n";
    pb[0].stuff[0] = 4;
    cout << pb[0].stuff[0] << endl;
    delete [] pb;

    return 0;
}