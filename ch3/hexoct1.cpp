// hexoct1.cpp -- pokazuje użycie literałów ósemkowych i szesnastkowych
#include <iostream>
using namespace std;
int main(){
    using namespace std;
    int chest = 42;     // dziesietnie
    int waist = 0x42;   // szesnastkowo
    int inseam = 042;   // osemkowo

    cout << "Co za figura!\n";
    cout << "obwod piersi = " << chest << " (42 dziesietnie)\n";
    cout << "talia = " << waist << " (0x42 szesnastkowo)\n";
    cout << "dlugosc nogawki = " << inseam << " (042 osemkowo)\n";
    return 0;
}