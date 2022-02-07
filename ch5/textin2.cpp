// textin2.cpp -- uzycie cin.get(char)
#include <iostream>
int main(){
    using namespace std;
    char ch;
    int count = 0;

    cout << "Podawaj znaki; znak # konczy:\n";
    cin.get(ch);    // uzycie funkcji cin.get(ch)
    while(ch != '#')
    {
        cout << ch;
        ++count;
        cin.get(ch);    // ponowne uzycie
    }
    cout << endl << "wczytano " << count << " znakow\n";
    return 0;
}