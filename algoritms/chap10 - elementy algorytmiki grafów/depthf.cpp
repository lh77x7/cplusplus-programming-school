// strategia "w głąb"

#include<iostream>
#include<vector>
#include<stack>

using namespace std;
 
struct graf{
  bool stos; //czy dodany na stos
 
  vector <int> polaczenia; //do przechowywania połączeń
  // dodatkowe opcje
} *w; 
 
void odwiedz(int n)
{
  //wykonaj jakies czynnosci
  //w przypadku odwiedzenia wierzcholka o numerze n
  cout << "Odwiedzono wierzchołek o numerze: " << n << endl;
}
 
void DFS(int n)
{
  stack<int> stos;    //utworzenie stosu 
  stos.push(n);  //dodanie pierwszego wierzcholka na stos
 
  while(!stos.empty()) //dopóki jest cos na stosie
  {
    n = stos.top(); //pobranie elementu ze stosu
 
      stos.pop(); //usuń pobrany element ze stosu
      odwiedz(n); //odwiedź go i zrób coś
      //oraz dodaj wszystkie jego nieodwiedzone i nie będące 
      //na stosie połączenia na stos
      for(int i=0; i<w[n].polaczenia.size(); i++)
        if(!w[w[n].polaczenia[i]].stos)
        {
          stos.push(w[n].polaczenia[i]);
          w[w[n].polaczenia[i]].stos = 1; //oznaczenie, że dodano na stos
          cout << "Dodano na stos wierzcholek nr " << w[n].polaczenia[i] << endl;
        }
  }   
}
 
int main()
{
  cout << "Podaj liczbę wierzchołków w grafie: ";
  int n, p, a, b;
  cin >> n;
  w = new graf [n+1];//przydzielenie pamięci na wierzchołki grafu
  //wczytanie wierzchołków grafu
  cout << "Podaj liczbę połączeń: ";
  cin >> p;
 
  for(int i=0; i<p; i++)
  {
    cout<<"Podaj numery wierzchołków, które chcesz ze sobą połączyć: ";
    cin >> a >> b;
    w[a].polaczenia.push_back(b); //połączenie jest dwukierunkowe a-->b
    w[b].polaczenia.push_back(a); //b-->a
  }
  //przeszukaj graf
  DFS(1); //rozpoczynamy od wierzchołka o numerze 1
 
  delete [] w;
  return 0;
}