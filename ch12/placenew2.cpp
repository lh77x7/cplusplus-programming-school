// placenew2.cpp -- new, new w werscji mejscowej, bez delete
#include <iostream>
#include <string>
#include <new>
using namespace std;
const int BUF = 512;

class JustTesting
{
    private:
        string words;
        int number;
    public:
        JustTesting(const string & s = "Obiekt testowy", int n = 0)
            { words = s; number = n; cout << words << " skonstruowany\n"; }
        ~JustTesting() { cout << words << " usuniety\n"; }
        void Show() const { cout << words << ", " << number << endl; }
};

int main()
{
    char * buffer = new char[BUF];  // przydział bloku pamięci do testów

    JustTesting *pc1, *pc2;

    pc1 = new (buffer) JustTesting;         // umieszczenie obiektu w buforze
    pc2 = new JustTesting("Sterta1", 20);   //umieszcza nowy obiekt na stercie

    cout << "Adresy blokow pamieci:\n" << "bufor: " << (void *)buffer << " sterta: " << pc2 << endl;
    cout << "Zawartosc pamieci:\n";
    cout << pc1 << ": ";
    pc1->Show();
    cout << pc2 << ": ";
    pc2->Show();

    JustTesting *pc3, *pc4;
    // poprawiony przydział miejscową wersją new
    pc3 = new (buffer + sizeof(JustTesting)) JustTesting("Lepszy pomysl", 6);
    pc4 = new JustTesting("Sterta2", 10);

    cout << "Zawartosc pamieci:\n";
    cout << pc3 << ": ";
    pc3->Show();
    cout << pc4 << ": ";
    pc4->Show();

    delete pc2;         // zwolnij Sterte1
    delete pc4;         // zwolnij Sterte2
    // jawne wywołanie destruktorów obiektów przydzielonych miejscową wersją new
    pc3->~JustTesting();    // zwolnienie obiektu wskazywanego przez pc3
    pc1->~JustTesting();    // zwolnienie obiektu wskazywanego przez pc1
    delete [] buffer;   // zwolnij bufer
    cout << "Koniec!\n";

    return 0;
}