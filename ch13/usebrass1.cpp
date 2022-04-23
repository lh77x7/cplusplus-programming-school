// usebrass1.cpp -- testowanie klas do obsługi rachunków
// kompilować razem z brass.cpp
#include <iostream>
#include "brass.h"

int main()
{
    using std::cout;
    using std::endl;

    Brass Piggy("Bonifacy Kot", 381299, 12000.00);
    BrassPlus Hoggy("Horacy Biedronki", 382288, 9000.0);
    Piggy.ViewAcct();
    cout << endl;
    Hoggy.ViewAcct();
    cout << endl;
    cout << "Wplata 3000 zl na rachunek pana Biedronki: ";
    Hoggy.Deposit(3000.0);
    cout << "Nowy stan konta: " << Hoggy.Balance() << " zl" << endl;
    cout << "Wplata 12600 zl z rachunku pana Kota:\n";
    Piggy.Withdraw(12600.00);
    cout << "Stan konta Kota: " << Piggy.Balance() << " zl" << endl;
    cout << "Wplata 12600 zl z rachunku pana Biedronki:\n";
    Hoggy.Withdraw(12600.00);
    Hoggy.ViewAcct();

    return 0;
}