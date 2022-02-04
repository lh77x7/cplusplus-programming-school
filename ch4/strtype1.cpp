// strtype1.cpp -- uzycie klasy C++ string
#include <iostream>
#include <string> // udostepnianie klasy string
int main(){
    using namespace std;
    char charr1[20];    // utworzenie pustej tablicy
    char charr2[20] = "jaguar"; // utworzenie tablicy zainicjalizowanej
    string str1;    // utworzenie pustego obiektu string
    string str2 = "pantera";    // utworzenie zainicjalizowanego obiektu string

    cout << "Podaj gatunek kota: ";
    cin >> charr1;
    cout << "Podaj inny gaturnek kota: ";
    cin >> str1;    // wprowadzenie danych za pomoca cin
    cout << "Oto wybrane kotowate:\n";
    cout << charr1 << " " << charr2 << " "
        << str1 << " " << str2 // pokazanie danych za pomoca cout
        << endl;
    cout << "Trzecia litera w slowie " << charr2 << " to " << charr2[2] << endl;
    cout << "Trzecia litera w slowie " << str2 << " to " << str2[2] << endl;
    // uzycie zapisu tablicowego
    return 0;
} 