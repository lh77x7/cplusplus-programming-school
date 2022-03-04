// usetime0.cpp -- test pierwszej klasy Time
// kompilowac razem z plikiem mytime0.cpp 
#include <iostream>
#include "mytime0.h"

int main()
{
    using std::cout;
    using std::endl;
    Time planning;
    Time coding(2, 40);
    Time fixing(5, 55);
    Time total;

    cout << "czas planowania = ";
    planning.Show();
    cout << endl;

    cout << "czas kodowania = ";
    coding.Show();
    cout << endl;

    cout << "czas poprawiania = ";
    fixing.Show();
    cout << endl;
    total = coding.Sum(fixing);
    cout << "lacznie (coding.Sum(fixing)) = ";
    total.Show();
    cout << endl;

    return 0;
}