// morechar.cpp -- typ char a typ int
#include <iostream>
int main(){
    using namespace std;
    char ch = 'M';  // przypisanie zmiennej ch kod ASCII znaku M
    int i = ch;     // zapis tego samego kodu na int
    cout << "Kod ASCII znaku " << ch << " to " << i << endl;

    cout << "Dodajemy do kodu znaku jedynke: " << endl;
    ch = ch + 1;    // zmiana kodu znaku ze zmiennej ch
    i = ch;         // zapis nowego kodu znaku w i
    cout << "Kod ASCII znaku " << ch << " to " << i << endl;

    // uzycie metody cout.put() do pokazania znaku
    cout << "Wpisywanie char ch za pomoca cout.put(ch): ";
    cout.put(ch);

    // uzycie metody cout.put() do pokazania stalej znakowej
    cout.put('!');

    cout << endl << "Gotowe" << endl;
    return 0;
}