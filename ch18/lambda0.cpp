// lambda0.cpp -- stosowanie wyrażeń lambda
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <ctime>

const long Size1 = 39L;
const long Size2 = 100 * Size1;
const long Size3 = 100 * Size2;

bool f3(int x) { return x % 3 == 0; }
bool f13(int x) { return x % 13 == 0; }

int main()
{

    using std::cout;
    std::vector<int> numbers(Size1);
    std::srand(std::time(0));
    std::generate(numbers.begin(), numbers.end(), std::rand);

    // użycie wskaźników do funkcji
    cout << "Rozmiar probki = " << Size1 << '\n';
    int count3 = std::count_if(numbers.begin(), numbers.end(), f3);
    cout << "Liczba elementow podzielonych przez 3: " << count3 << '\n';
    int count13 = std::count_if(numbers.begin(), numbers.end(), f13);
    cout << "Liczbe elementow podzielonych przez 13: " << count13 << "\n\n";

    // zwiększenie rozmiaru próbki
    numbers.resize(Size2);
    std::generate(numbers.begin(), numbers.end(), std::rand);
    cout << "Rozmiar probki = " << Size2 << '\n';
    // użycie funktora
    class f_mod
    {
        private:
            int dv;
        public:
            f_mod(int d = 1) : dv(d) {}
            bool operator()(int x) { return x % dv == 0; }
    };

    count3 = std::count_if(numbers.begin(), numbers.end(), f_mod(3));
    cout << "Liczba elementow podzielona przez 3: " << count3 << '\n';
    count13 = std::count_if(numbers.begin(), numbers.end(), f_mod(13));
    cout << "Liczba elementow podzielona przez 13: " << count13 << '\n';

    // ponowne zwiększenie rozmiaru próbki
    numbers.resize(Size3);
    std::generate(numbers.begin(), numbers.end(), std::rand);
    cout << "Size size = " << Size3 << '\n';
    // użycie lambda
    count3 = std::count_if(numbers.begin(), numbers.end(), [] (int x) { return x % 3 == 0; });
    cout << "Liczba elementow podzielnych przez 3: " << count3 << '\n';
    count13 = std::count_if(numbers.begin(), numbers.end(), 
    [] (int x) { return x % 13 == 0; });
    cout << "Liczba elementow podzielonych przez: " << count13 << '\n';

    return 0;
}