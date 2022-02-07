// textin3.cpp -- wczytywanie znaków do końca plików
#include <iostream>
int main(){
    using namespace std;
    char ch;
    int count = 0;
    cin.get(ch);    // proba odczytania znaku
    while(cin.fail() == false) // sprawdzenie EOF
    {
        cout << ch; // pokazanie znaku
        ++count;
        cin.get(ch);    // próba odczytania kolejnego znaku
    }
    cout << endl << "wczytano " << count << " znakow\n";
    return 0;
}