// modulus.cpp -- uzycie operatora % do zmiany funtow na kamienie
#include <iostream>
int main(){
    using namespace std;
    const int Lbs_per_stn = 14;
    int lbs;

    cout << "Podaj swoja wage w funtach: ";
    cin >> lbs;
    int stone = lbs / Lbs_per_stn;  // calych kamieni
    int pounds = lbs % Lbs_per_stn;  // reszta w funtach
    cout << lbs << " funtow to " << stone << " kamieni, ";
    cout << pounds << " funt(ow).\n" << endl;
    return 0;
}