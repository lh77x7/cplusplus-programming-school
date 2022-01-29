// convert.cpp -- zamiana kamieni na funty
#include <iostream>
int stonetolb(int); // prototyp
int main(){

    using namespace std;
    int stone;
    cout << "Podaj wage w kamieniach: ";
    cin >> stone;
    int pounds = stonetolb(stone);
    cout << stone << " kamieni = ";
    cout << pounds << " funtow." << endl;
    return 0;
}

int stonetolb(int sts){
    return 14 * sts;
}