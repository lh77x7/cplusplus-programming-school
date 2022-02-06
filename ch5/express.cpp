// express.cpp -- wartości wyrażeń
#include <iostream>
int main(){
    using namespace std;
    int x;

    cout << "Wyrazenie x = 100 ma wartosc ";
    cout << (x = 100 ) << endl;
    cout << "Teraz x = " << x << endl;
    cout << "Wyrazenie x < 3 ma wartosc ";
    cout << (x < 3) << endl;
    cout << "Wyrazenie x > 3 ma wartosc ";
    cout << (x > 3) << endl;
    cout.setf(ios_base::boolalpha); // nowosc w C++
    cout << "Wyrazenie x < 3 ma wartosc ";
    cout << (x < 3) << endl;
    cout << "Wyrazenie x > 3 ma wartosc ";
    cout << (x > 3) << endl;

    return 0;
}