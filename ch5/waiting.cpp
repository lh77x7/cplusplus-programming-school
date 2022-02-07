// waiting.cpp -- funkcja clock() w petli opóźniającej
#include <iostream>
#include <ctime> // clock(), typ clock_t
int main(){
    using namespace std;
    cout << "Podaj czas opozniania w sekundach: ";
    float secs;
    cin >> secs;
    clock_t delay = secs * CLOCKS_PER_SEC;  // konwersja na jednostki zegara
    cout << "zaczynamy\a\n";
    clock_t start = clock();
    while(clock() - start < delay)  // czekaj az upłynie czas
    ;
    cout << "gotowe\a\n";
    return 0;
}