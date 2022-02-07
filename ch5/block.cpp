// block.cpp -- uzycie instrukcji zlozonej (bloku)
#include <iostream>
int main(){
    using namespace std;
    cout << "Cudowny kalkulator bedzie sumowa i liczyl srednia ";
    cout << "pieciu liczb.\n";
    cout << "Prosze podac piec wartosci:\n";
    double number;
    double sum = 0.0;
    for(int i = 1; i <= 5; i++){ // poczatek bloku
        cout << "Wartosc " << i << ": ";
        cin >> number;
        sum += number;
    }
    cout << "Doprawdy, piec wspanialych liczb!";
    cout << "Ich suma to " << sum << ", " << endl;
    cout << "a srednia " << sum / 5 << ".\n";
    cout << "Cudowny kalkulator zegna sie z Toba!\n";
    return 0;
}