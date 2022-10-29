#include <iostream>
using std::cout;
using std::endl;

const int MaxTab = 201;     // 200 możliwych elementów

class ListaTab
{
    int tab[MaxTab];        // tab[0] zarezerwowane !
    
    public:
        ListaTab() {tab[0] = 0;}    // konstruktor klasy
        void UsunElement(int k);    // usun element z pozycji k
        void WstawElement(int k);   // wstaw element x na pozycje k:
        void WstawElement(int x, int k);
        void WypiszListe();
};

void ListaTab::UsunElement(int k)
{
    // usun k-ty element listy, k >= 1
    if((k > 1) && (k <= tab[0]))
    {
        for(int i = k; i < tab[0]; i++)
            tab[i] = tab[i + 1];
        tab[0]--;
    }
}

void ListaTab::WstawElement(int x)
{
    // wstawiamy element x na koniec listy
    if(tab[0] < MaxTab - 1)
        tab[++tab[0]] = x;
}

void ListaTab::WstawElement(int x, int k)
{   // wstawiamy element x na k-tą pozycję listy
    if((k >= 1) && (k <=tab[0]+1) && (tab[0]<MaxTab-1))
    {
        for(int i = tab[0]; i >= k; i--)
            tab[i+1] = tab[i];  // robimy miejsce
        tab[k] = x;
        tab[0]++;        
    }
}

void ListaTab::WypiszListe()
{
    for(int i = 0; i < MaxTab; i++)
        cout << tab[i] ;
    cout << endl;
}

int main()
{
    // call functions        
}