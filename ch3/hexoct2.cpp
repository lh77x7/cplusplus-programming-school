// hexoct2.cpp -- pokazuje liczby szesnastkowo i osemkowo
#include <iostream>
using namespace std;
int main(){
    using namespace std;
    int chest = 42;
    int waist = 42;
    int inseam = 42;

    cout << "Co za figura!" << endl;
    cout << "obwod piersi = " << chest << " (dziesietnie dla 42)" << endl;
    cout << hex;    // manipulator zmienia system liczbowy
    cout << "talia = " << waist << " (szesnastkowo dla 42)" << endl;
    cout << oct;    // kolejna zmiana
    cout << "dlugosc nogawki = " << inseam << " (osemkowo dla 42)" << endl;
    return 0;
}