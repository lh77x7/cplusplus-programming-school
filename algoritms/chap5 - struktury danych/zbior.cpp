#include <iostream>

using namespace std;

class Zbior
{
    unsigned char zbior[256];   // cała tablica ASCII
    
    public:
        Zbior()     // konstruktor "zeruje" zbior
        {
            for(int i = 0; i < 256; i++)
                zbior[i] = 0;
        }
        Zbior &operator +(unsigned char c)
        {
            zbior[c] = 1;    // dodaj 'c' do zbioru
            return *this;    // zwraca zmodyfikowany obiekt
        }
        Zbior &operator -(unsigned char c)
        {
            zbior[c] = 0;   // usuwa 'c' ze zbioru
            return *this;   // zwraca zmodyfikowany obiekt
        }
        int nalezy (unsigned char c)
        {   // czy 'c' należy do zbioru ?
            return zbior[c] == 1;
        }
        Zbior &dodaj(Zbior s2)  // dodaj zawartość zbioru 's2' do obiektu
        {
            for(int i = 0; i < 256; i++)
                if(s2.nalezy(i))    // jeśli element jest obecny w s2
                    zbior[i] = 1;   // dodaj go do zbioru
            return *this;   // zwraca zmodyfikowany obiekt
        }
        int ile()   // zwraca liczbę elementów w zbiorze
        {
            int n;
            for(int i = 0; i < 256; i++)
                if(zbior[i] == 1)   // element obecny
                    n++;
            return n;
        }
        void pisz() // wypisuje zawartość zbioru
        {
            int i;
            cout << "{";
            for(i = 0; i < 256; i++)
                if(zbior[i] == 1)   // element obecny
                    cout << (char)i << "";
                if(i == 0)
                    cout << "Zbior pusty!";
            cout << "}\n";
        }
};  // koniec definicji klasy Zbior

int main()
{
    Zbior s1, s2;
    s1 = s1 + 'A'; s1 = s1 + 'A'; s1 = s1 + 'B'; s1 = s1 + 'C';
    s2 = s2 + 'B'; s2 = s2 + 'B'; s2 = s2 + 'E'; s2 = s2 + 'F';
    cout << "Zbior S1 = ";
    s1.pisz();
    s1 = s1 - 'C';
    cout << "Zbior S1 - 'C' = ";
    s1.pisz();
    cout << "Zbior S2 = "; 
    s2.pisz();
    s1.dodaj(s2);
    cout << "Zbior S1 + S2 = ";
    s1.pisz();

    return 0;
} 