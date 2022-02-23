// pe9-3.cpp -- rozwizanie zadania 3 rozdział 9

#include <iostream>
#include <new>

struct chaff
{
    char dross[20];
    int slag;
};

const int Size = 2;

char buffer[50];

int main(){

    chaff *p1, *p2;
    p1 = new chaff[Size]; // dynamicznie
    p2 = new (buffer) chaff[2]; // statycznie

    // dynamiczny przydzial pamieci
    for(int i = 0; i < Size; i++)
    {
        std::cout << "\n Dane struktury " << i + 1 << "\nPodaj dana dross: ";
        std::cin >> p1[i].dross;
        std::cout << "\nPodaj slag: ";
        std::cin >> p1[i].slag; 
    }

    for(int i = 0; i < Size; i++)
    {
        std::cout << "\nStruktura " << i + 1 << "\nDross: " << p1[i].dross << std::endl;
        std::cout << "\nSlag: " << p1[i].slag << std::endl;
    }

    std::cin.get();

    // analogia dla przydziału statycznego w buferze
    for(int i = 0; i < Size; i++)
    {
        std::cout << "\n Dane struktury " << i + 1 << "\nPodaj dana dross: ";
        std::cin >> p2[i].dross;
        std::cout << "\nPodaj slag: ";
        std::cin >> p2[i].slag; 
    }

    for(int i = 0; i < Size; i++)
    {
        std::cout << "\nStruktura " << i + 1 << "\nDross: " << p2[i].dross << std::endl;
        std::cout << "\nSlag: " << p2[i].slag << std::endl;
    }    

    delete[] p1;
    delete[] p2;
    p1 = NULL;
    p2 = NULL;

    return 0;
}