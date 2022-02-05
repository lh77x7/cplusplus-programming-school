// delete.cpp -- użycie operatora delete
#include <iostream>
#include <cstring>
using namespace std;
char *getname(void);
int main(){

    char * name;   // utworzenie wskaznika bez przypisania pamięci

    name = getname();   // przypisanie zmiennej name adresu łańcucha
    cout << name << " pod adresem " << (int *) name << "\n";
    delete [] name; // zwolnienie pamięci

    name = getname();   // ponowne użycie zwolnionej pamięci
    cout << name << " pod adresem " << (int *) name << "\n";
    delete [] name;
    return 0;
}

char * getname() {  // zwraca wskaźnik na nowy łańcuch
    char temp[80];  // tymczasowy bufor
    cout << "Podaj nazwisko: ";
    cin >> temp;
    char * pn = new char[strlen(temp) + 1];
    strcpy(pn, temp);   // kopiowanie lancucha do krotszej tablicy

    return pn;  // po zakonczeniu funkcji temp zostanie utracone 
}