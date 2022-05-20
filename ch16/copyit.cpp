// copyit.cpp -- funkcja copy() i iteratory
#include <iostream>
#include <iterator>
#include <vector>

int main()
{
    using namespace std;

    int casts[10] = {6, 7, 2, 9, 4, 11, 8, 7, 10, 5};
    vector<int> dice(10);
    // kopiuje dane z tablicy do wektora
    copy(casts, casts + 10, dice.begin());
    cout << "Niech kosci zostana rzucone!\n";
    // tworzy ostream_iterator
    ostream_iterator<int, char> out_iter(cout, " ");
    // kopiuje z wektora do strumienia wyjścia
    copy(dice.begin(), dice.end(), out_iter);
    cout << endl;
    cout << "Niejawne uzycie iteratora odwrotnego.\n";
    copy(dice.rbegin(), dice.rend(), out_iter);
    cout << endl;
    cout << "Jawne uzycie iteratora odwrotnego.\n";
    vector<int>::reverse_iterator ri;
    for(ri = dice.rbegin(); ri != dice.rend(); ++ri)
        cout << *ri << " ";
    cout << endl;
}