// sqrt.cpp -- użycie funkcji sqrt()

#include <iostream>
#include <cmath>

int main(){

    using namespace std;

    double area;

    cout << "Podaj powierzchnie swojego mieszkania w metrach kwadratowych: ";
    cin >> area;
    double side;
    side = sqrt(area);
    cout << "Odpowiada to kwadratowi o boku " << side << " metrow." << endl;
    cout << "Niesamowite!" << endl;
    return 0;
}