// forstr1.cpp -- uzycie petli for z klasa string
#include <iostream>
#include <string>
int main(){
    using namespace std;
    cout << "Podaj slowo: ";
    string word;
    cin >> word;

    // wyswietlanie liter do konca
    for(int i = word.size() - 1; i >= 0; i--)
        cout << word[i];
    cout << "\nDo widzenia.\n";
    return 0;
}