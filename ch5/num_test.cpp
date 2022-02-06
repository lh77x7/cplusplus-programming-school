// num_test.cpp -- liczbowy warunek pętli w pętli for
#include <iostream>
int main(){
    using namespace std;
    cout << "Podaj wartosc poczatkowa odliczania: ";
    int limit, i;
    cin >> limit;
    for (i = limit; i; i--) // koniec, kiedy i bedzie 0
        cout << "i = " << i << "\n";
    cout << "Gotowe, bo juz i = " << i << "\n";
    return 0;
}