// dowhile.cpp -- pętla z kontrolą warunku na koniec
#include <iostream>
int main(){

    using namespace std;
    int n;

    cout << "Aby poznac moja ulubiona liczbe, podawaj ";
    cout << "liczby od 1 do 10\n";
    do
    {
        cin >> n;   // wykonaj tresc
    } while (n != 7);   // potem sprawdz warunek
    return 0;
}