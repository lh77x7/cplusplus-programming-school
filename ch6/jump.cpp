// jump.cpp -- użycie continue i break
#include <iostream>
const int ArSize = 80;
int main(){

    using namespace std;
    char line[ArSize];
    int spaces = 0;

    cout << "Wpisz wiersz tekstu:\n";
    cin.get(line, ArSize);
    cout << "Caly wiersz:\n" << line << endl;
    cout << "Wiersz do pierwszej kropki:\n";
    for(int i = 0; line[i] != '\0'; i++)
    {
        cout << line[i];    // pokaz znak
        if(line[i] == '.')  // jesli jest kropka, konczymy
            break;
        if(line[i] == ' ')  // pomin reszte petli
            continue;
        spaces++;        
    }
    cout << "\n" << spaces << " spacji\n";
    cout << "Gotowe.\n";
    return 0;
}