#include <iostream>

using std::cout; 
using std::endl;

void odejmnij(char *s)
{
    for(int i = 0; s[i] != 0; i++)
    s[i] = 255 - s[i];
}

int main()
{
    char s[] = "ala ma kota";
    cout << "Oryginalny ciag znakow:    \t" << s << endl;
    odejmnij(s);
    cout << "Zakodowany ciag znakow:    \t" << s << endl;
    odejmnij(s);
    cout << "Odkodowany ciag znakow:    \t" << s << endl;
    return 0;
}