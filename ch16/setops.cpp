// setops.cpp -- wybrane operacje klasy set
#include <iostream>
#include <string>
#include <set>
#include <algorithm>
#include <iterator>

int main()
{
    using namespace std;
    const int N = 6;
    string s1[N] = {"bufor", "studenci", "dla", "trudny", "potrafi", "dla"};
    string s2[N] = {"metal", "dowolny", "jedzenie", "elegancki", "dostarczyc", "dla"};

    set<string> A(s1, s1 + N);
    set<string> B(s2, s2 + N);

    ostream_iterator<string, char> out(cout, " ");
    cout << "Zbior A: ";
    copy(A.begin(), A.end(), out);
    cout << endl;
    cout << "Zbior B: ";
    copy(B.begin(), B.end(), out);
    cout << endl;

    cout << "Suma zbiorow A i B:\n";
    set_union(A.begin(), A.end(), B.begin(), B.end(), out);
    cout << endl;

    cout << "Przeciecie zbiorow A i B:\n";
    set_intersection(A.begin(), A.end(), B.begin(), B.end(), out);
    cout << endl;

    cout << "Roznica zbiorow A i B:\n";
    set_difference(A.begin(), A.end(), B.begin(), B.end(), out);
    cout << endl;

    set<string> C;
    cout << "Zbior C:\n";
    set_union(A.begin(), A.end(), B.begin(), B.end(), 
        insert_iterator<set<string> > (C, C.begin()));
    copy(C.begin(), C.end(), out);
    cout << endl;

    string s3("brudny");
    C.insert(s3);
    cout << "Zbior C po wstawieniu:\n";
    copy(C.begin(), C.end(), out);
    cout << endl;

    cout << "Wyswietlanie zakresu:\n";
    copy(C.lower_bound("duch"), C.upper_bound("monstrum"), out);
    cout << endl;

    return 0;
}