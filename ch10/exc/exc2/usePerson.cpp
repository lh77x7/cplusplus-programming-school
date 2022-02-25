#include "Person.h"

int main()
{
    Person one;
    Person two("OneName");
    Person three("Lucky", "Luke");
    one.Show();
    cout << endl;
    one.FormalShow();
    two.Show();
    cout << endl;
    two.FormalShow();
    three.Show();
    cout << endl;
    three.FormalShow();

    return 0;
}