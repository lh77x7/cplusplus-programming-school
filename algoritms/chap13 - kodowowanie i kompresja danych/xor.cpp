#include <iostream>

using std::cout; 
using std::endl;

void fun_xor(char *s, char xor_key)
{
    for(int i = 0; s[i] != 0; i++)
    s[i] = s[i]^xor_key;
}

int main()
{
    char s[] = "ala ma kota";
    cout << "Orginalny ciag znakow:     \t" << s << endl;
    fun_xor(s, 12);
    cout << "Zakodowany ciag znakow:    \t" << s << endl;
    fun_xor(s, 12);
    cout << "Ciag odkodowany:           \t" << s << endl;
}