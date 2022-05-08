// frnd2tmp.cpp -- szablon klasy z funkcjami zaprzyjaźnionymi
#include <iostream>
using std::cout;
using std::endl;

template <typename T>
class HasFriend
{
    private:
        T item;
        static int ct;
    public:
        HasFriend(const T & i) : item(i) { ct++; }
        ~HasFriend() { ct--; }
        friend void counts();
        friend void reports(HasFriend<T> &);    // parametry w postaci szablonu
};

// każda specjalizacja ma własną statyczną daną składową
template <typename T>
int HasFriend<T>::ct = 0;

// funkcja (nie szablon) zaprzyjaźniona ze wszystkimi klasami HasFriend<T>
void counts()
{
    cout << "Konkretyzacje int: " << HasFriend<int>::ct << "; ";
    cout << "Konkretyzacje double: " << HasFriend<double>::ct << endl;
}

// funkcja (nie szablon) zaprzyjaźniona z klasą HasFriend<int>
void reports(HasFriend<int> & hf)
{
    cout << "HasFriend<int>: " << hf.item << endl;
}

// funkcja (nie szablon) zaprzyjaźniona z klasą HasFriend<double>
void reports(HasFriend<double> & hf)
{
    cout << "HasFriend<double>: " << hf.item << endl;
}

int main()
{
    cout << "Brak zadeklarowanych obiektów: ";
    counts();
    HasFriend<int> hfi1(10);
    cout << "Po deklaracji hfi1: ";
    counts();
    HasFriend<int> hfi2(20);
    cout << "Po deklaracji hfi2: ";
    counts();
    HasFriend<double> hfdb(10.5);
    cout << "Po deklaracji hfdb: ";
    counts();
    reports(hfi1);
    reports(hfi2);
    reports(hfdb);

    return 0;
}