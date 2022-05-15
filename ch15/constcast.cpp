// constcast.cpp -- używa operatora const_cast<>
#include <iostream>
using std::cout;
using std::endl;

void charge(const int * pt, int n);

int main()
{
    int pop1 = 38383;
    const int pop2 = 2000;

    cout << "pop1, pop2: " << pop1 << ", " << pop2 << endl;
    charge(&pop1, -103);
    charge(&pop2, -103);
    cout << "pop1, pop2: " << pop1 << ", " << pop2 << endl; 

    return 0;
}

void charge(const int * pt, int n)
{
    int * pc;

    pc = const_cast<int *>(pt);
    *pc += n;
}