// equal.cpp - równość i przypisanie
#include <iostream>
int main(){
    using namespace std;
    int quizscores[10] = 
    {20, 20, 20, 20, 20, 19, 20, 18, 20, 20};

    cout << "bezblednie:\n";
    int i;
    for(i = 0; quizscores[i] == 20; i++)
        cout << "test " << i << " ma wartosc 20\n";
    for(i = 0; quizscores[i] = 20; i++)
    // niebezpieczny fragemnt kodu
        cout << "test " << i << " ma wartosc 20\n";
    return 0; 
}
