// veriadic1.cpp -- rekurencja rozpakowująca pakiet parametrów
#include <iostream>
#include <string>

// definicja dla pustej listy parametrow -- wywołanie kończące rekurencję
void show_list3() {}

// definicja dla jednego bądź wielu parametrów
template<typename T, typename... Args>
void show_list3 (T value, Args... args)
{
    std::cout << value << ", ";
    show_list3(args...);
}

int main()
{
    int n = 14;
    double x = 2.71828;
    std::string mr = "Mosci String tez! ";
    show_list3(n, x);
    show_list3(x*x, '!', 7, mr);

    return 0;
}