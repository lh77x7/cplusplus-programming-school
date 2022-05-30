// lambda1.cpp -- przyjmowanie zmiennych do funkcji lambda
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <ctime>

const long Size = 390000L;

int main()
{
    using std::cout;
    std::vector<int> numbers(Size);

    std::srand(std::time(0));
    std::generate(numbers.begin(), numbers.end(), std::rand);
    cout << "Rozmiar probki: " << Size << '\n';

    // osobne lambdy
    int count3 = std::count_if(numbers.begin(), numbers.end(), [](int x) { return x % 3 == 0; });
    cout << "Liczba elementow podzielnych przez 3: " << count3 << '\n';
    int count13 = 0;
    std::for_each(numbers.begin(), numbers.end(), [&count13](int x) { count13 += x % 13 == 0; });
    cout << "Liczba elementow podzielnych przez 13: " << count13 << '\n';

    // pojedyncza lambda
    count3 = count13 = 0;
    std::for_each(numbers.begin(), numbers.end(), [&](int x) { count3 += x % 3 == 0; count13 += x % 13 == 0; });
    cout << "Liczbe elementow podzielnych przez 3: " << count3 << '\n';
    cout << "Liczba elementow podzielnych przez 13: " << count13 << '\n';

    return 0;
}