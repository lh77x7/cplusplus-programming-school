#include <iostream>

using std::endl;
using std::cout;

void hanoi()
{
    if(n != 1)
    {
        n --;
        b = 3 - a - b;
        hanoi();
        n++; 
        b = 3 - a - b;
        cout << "Przesun dysk nr " << n << " z " << a << " na " << b << endl;
        n --;
        a = 3 - a - b;
        hanoi();
        n ++;
        a = 3 - a - b;
    }
    else
        cout << "Przesun dysk nr " << n << " z " << a << " na " << b << endl;
}