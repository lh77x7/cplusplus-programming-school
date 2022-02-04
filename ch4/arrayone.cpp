// arrayone.cpp - male tablice liczb calkowitych
#include <iostream>
int main(){
    using namespace std;
    int yams[3];    // tworzy trojelementowa tablice
    yams[0] = 7;    // przypisanie wartosci pierwszemu elementowi
    yams[1] = 8;
    yams[2] = 6;

    int yamscosts[3] = {20, 30, 5};     // tworzenie + inicjalizacja tablicy
    cout << "Razem ignamow = ";
    cout << yams[0] + yams[1] + yams[2] << endl;
    cout << "Paczka zawierajaca " << yams[1] << " ignamow kosztuje go ";
    cout << yamscosts[1] << " groszy za bulwe.\n";
    int total = yams[0] * yamscosts[0] + yams[1] * yamscosts[1] + yams[2] * yamscosts[2];
    cout << "Laczny koszt ignamu to " << total << " groszy.\n";

    cout << "\nRozmiar tablicy yams = " << sizeof yams;
    cout << " bajtow.\n";
    cout << "Rozmiar jednego elementu = " << sizeof yams[0] << " bajtow.\n";
    return 0;
}