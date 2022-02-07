// textin.cpp -- wczytywanie znaków w pętli while
#include <iostream>
int main(){
    using namespace std;
    char ch;
    int count = 0;  
    cout << "Podaj znak; # koczy wprowadzanie:\n";
    cin >> ch;
    while (ch != '#')
    {
        cout << ch; // wyswietl znak na ekranie
        ++count;    // dolicz znak
        cin >> ch;  // pobierz nastepny znak
    }
    cout << endl << " wczytano " << count << " znakow\n";
    return 0;
}