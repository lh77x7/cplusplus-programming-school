// floatnum.cpp -- typy zmiennoprzecinkowe
#include <iostream>
int main(){
    using namespace std;
    cout.setf(ios_base::fixed, ios_base::floatfield); // staloprzecinkowy
    float tub = 10.0 / 3.0; // dokladnosc do okolo 6 cyfr
    double mint = 10.0 / 3.0;   // dokladnosc do okolo 15 cyfr
    const float million = 1.0e6;

    cout << "tub = " << tub;
    cout << ", a milion razy tyle = " << million * tub;
    cout << ",\na dziesiec milionow razy tub = ";
    cout << 10 * million * tub << endl;

    cout << "mint = " << mint << ", a milion razy mint = ";
    cout << million * mint << endl;
    return 0;
}