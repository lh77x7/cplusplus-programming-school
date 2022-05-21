// usealgo.cpp -- używanie różnych elementów biblioteki STL
#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <iterator>
#include <algorithm>
#include <cctype>
using namespace std;

char toLower(char ch) { return tolower(ch); }
string & ToLower(string & st);
void display (const string & s);

int main()
{
    vector <string> words;
    cout << "Podaj slowa (koniec, aby zakonczyc):\n";
    string input;
    while(cin >> input && input != "koniec")
        words.push_back(input);
    
    cout << "Podales nastepujace slowa:\n";
    for_each(words.begin(), words.end(), display);
    cout << endl;

    // umieszcza słowa w zbiorze, przekształcając duże litery na małe
    set <string> wordset;
    transform(words.begin(), words.end(),
    insert_iterator<set <string>> (wordset, wordset.begin()), ToLower);
    cout << "\nAlfabetyczna lista slow:\n";
    for_each(wordset.begin(), wordset.end(), display);
    cout << endl;

    // umieszcza słowa i liczbę ich wystąpień w kontenerze map
    map<string, int> wordmap;
    set<string>::iterator si;
    for(si = wordset.begin(); si != wordset.end(); si++)
        wordmap[*si] = count(words.begin(), words.end(), *si);

    // wyświetlanie zawartości kontenera map
    cout << "\nLiczba wystapien slow:\n";
    for(si = wordset.begin(); si != wordset.end(); si++)
        cout << *si << ": " << wordmap[*si] << endl;

    return 0;
}

string & ToLower(string & st)
{
    transform(st.begin(), st.end(), st.begin(), toLower);
    return st;
}

void display(const string & s)
{
    cout << s << " ";
}