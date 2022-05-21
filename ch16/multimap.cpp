// multimap.cpp -- korzystanie z szablonu multimap
#include <iostream>
#include <string>
#include <map>
#include <algorithm>
typedef int KeyType;
typedef std::pair<const KeyType, std::string> Pair;
typedef std::multimap<KeyType, std::string> MapCode;

int main()
{
    using namespace std;
    MapCode codes;

    codes.insert(Pair(41, "Bytom"));
    codes.insert(Pair(81, "Gdynia"));
    codes.insert(Pair(81, "Sopot"));
    codes.insert(Pair(27, "Starachowice"));
    codes.insert(Pair(41, "Rybnik"));
    codes.insert(Pair(27, "Sandomierz"));

    cout << "Liczba miast z regionu o kodzie 27: "
         << codes.count(27) << endl;
    cout << "Liczba miast z regionu o kodzie 41: "
         << codes.count(41) << endl;
    cout << "Liczba miast z regionu o kodzie 81: "
         << codes.count(81) << endl;
    cout << "Kod regionu Miasto\n";
    MapCode::iterator it;
    for(it = codes.begin(); it != codes.end(); ++it)
        cout << "     " << (*it).first << "     "
            << (*it).second << endl;
    pair<MapCode::iterator, MapCode::iterator> range = codes.equal_range(81);
    cout << "Miasta z regionu o kodzie 81:\n";
    for(it = range.first; it != range.second; ++it)
        cout << (*it).second << endl;
    
    return 0;
}