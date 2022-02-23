// usenmsp.cpp -- korzystanie z przestrzeni nazw
#include <iostream>
#include "namesp.h"

void other(void);
void another(void);
int main(void)
{
    using debts::Debt;
    using debts::showDebt;
    Debt golf = {{"Jacker", "Klopotek"}, 120.0};
    showDebt(golf);
    other();
    another();

    return 0;
}

void other(void)
{
    using std::cout;
    using std::endl;
    using namespace debts;
    Person dg = {"Daria", "Graczyk"};
    showPerson(dg);
    cout << endl;
    Debt zippy[3];
    int i;

    for(i = 0; i < 3; i++)
        getDebt(zippy[i]);
    for(i = 0; i < 3; i++)
        showDebt(zippy[i]);
    cout << "Kwota laczna: " << sumDebts(zippy, 3) << " zl" << endl;
    return;
}

void another(void)
{
    using pers::Person;

    Person collector = {"Zibi", "Windykator"};
    pers::showPerson(collector);
    std::cout << std::endl;
}