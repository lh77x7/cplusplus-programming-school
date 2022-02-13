// calling.cpp -- definiowanie, prototypowanie i wywoływanie funkcji

#include <iostream>

void simple();  // prtotyp funkcji

int main(){
    using namespace std;
    cout << "main() wywola simple():\n";
    simple();   // wywolanie funkcji
    cout << "main() po zakonczeniu funkcji simple().\n";
    return 0;
}

// definicja funkcji
void simple(){
    using namespace std;
    cout << "Jestem sobie taka prosciutka funkcja.\n";
}