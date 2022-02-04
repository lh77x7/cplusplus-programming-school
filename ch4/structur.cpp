// structur.cpp -- prosty przyklad uzycia struktury
#include <iostream>
struct infatable {  // deklaracja struktury
    char name[20];
    float volume;
    double price;
};

int main(){
    using namespace std;
    infatable guest = 
    {
        "Glorious Gloria",  // wartosc pola name
        1.88,               // wartosc pola volume
        29.99               // wartosc pola price
    };  // guest to zmienna strukturalna typu infatable
    infatable pal = 
    {
        "Audacius Arthur",
        3.12,
        32.99
    };  // pal to druga zmienna typu infatable

    cout << "Wpisz na swoja liste gosci jeszcze: " << guest.name;
    cout << " oraz " << pal.name << "!\n";
    cout << "Mozesz miec ich oboje za ";
    cout << guest.price + pal.price << " zl!\n";
    return 0;
}