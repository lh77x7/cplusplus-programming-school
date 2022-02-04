// arraystruct.cpp -- tablica struktur
#include <iostream>
struct inflatable{
    char name[20];
    float volume;
    double price;
};

int main(){
    using namespace std;
    inflatable guest[2] = 
    {
        {"Bambi", 0.5, 21.99},
        {"Godzilla", 2000, 565.99}
    };

    cout << "Goscie tacy jak " << guest[0].name << " i " << guest[1].name 
         << "\nrazem maja "
         << guest[0].volume + guest[1].volume << " stop szesciennych.\n";
    return 0;
}