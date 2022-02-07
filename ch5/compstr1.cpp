// compstr1.cpp -- porównanie łańcuchów jako tablic
#include <iostream>
#include <cstring>  // strcmp()
int main(){
    using namespace std;
    char word[5] = "?ate";
    char ch;
    for(ch = 'a'; strcmp(word, "mate"); ch++){
        cout << word << endl;
        word[0] = ch;
    }
    cout << "Petla sie skonczyla, slowo to" << word << endl;
    cout <<"Zatrzymanie petlia na literze:" << char(ch) << ", jej ASCII: " << int(ch) << endl;
    return 0; 
}