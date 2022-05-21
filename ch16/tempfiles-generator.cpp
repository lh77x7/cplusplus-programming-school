#include <cstdio>
#include <iostream>

int main()
{
    using namespace std;
    cout << "Ten system moze wygenerowac maksymalnie " << TMP_MAX 
         << " nazw tymczasowych skaladajacych sie z maksymalnie " << L_tmpnam
         << " znakow.\n";
    char pszName[L_tmpnam] = { '\0'};
    cout << "Oto 10 nazw:\n";
    for(int i = 0; i < 10; i++)
    {
        tmpnam(pszName);
        cout << pszName << endl;
    }
    return 0;
}
