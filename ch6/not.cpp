// not.cpp -- użycie operator not
#include <iostream>
#include <climits>
bool is_int(double);
int main(){
    
    using namespace std;
    double num;

    cout << "Hej, koles! Rzuc no liczbe calkowita: ";
    cin >> num;
    while(!is_int(num)) // tak dlugo, az uzyskamy liczbe dajaca sie
    {                   // przypisac do int
        cout << "Poza zakresem - probuj dalej: ";
        cin >> num;
    }
    int val = int(num);     // rzutowanie typu
    cout << "Podana liczba calkowita to " << val << "\nBywaj\n";
    cout << "Limit dolny to " << INT_MIN << endl;
    cout << "Limit gorny to " << INT_MAX << endl;
    return 0;                    
}

bool is_int(double x){
    if(x <= INT_MAX && x >= INT_MIN)    // użycie wartości climits
        return true;
    else
        return false;
}