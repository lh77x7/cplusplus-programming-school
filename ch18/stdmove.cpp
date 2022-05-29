// stdmove.cpp -- stosowanie funkcji std::move
#include <iostream>

using namespace std;

// interfejs
class Useless
{
    private:
        int n;          // liczba elementów
        char * pc;      // wskaźnik do danych
        static int ct;  // liczba obiektów
        void ShowObject() const;
    public:
        Useless();
        explicit Useless(int k);
        Useless(int k, char ch);
        Useless(const Useless &f);  // zwyczajny konstruktor kopiujący
        Useless(Useless && f);      // konstruktor przenoszący
        ~Useless();
        Useless operator+(const Useless & f) const;
        Useless & operator=(const Useless & f); // przypisanie kopiujące
        Useless & operator=(Useless && f);      // przypisanie przenoszące
        void ShowData() const;
};

// implementacja
int Useless::ct = 0;

Useless::Useless()
{
    ++ct;
    n = 0;
    pc = nullptr;
}

Useless::Useless(int k) : n(k)
{
    ++ct;
    pc = new char[n];
}

Useless::Useless(int k, char ch) : n(k)
{
    ++ct;
    pc = new char[n];
    for(int i = 0; i < n; i++)
        pc[i] = ch;
}

Useless::Useless(const Useless & f) : n(f.n)
{
    ++ct;
    pc = new char[n];
    for(int i = 0; i < n; i++)
        pc[i] = f.pc[i];
}

Useless::Useless(Useless && f) : n(f.n)
{
    ++ct;
    pc = f.pc;      // przechowywanie adresu
    f.pc = nullptr; // stary obiekt otrzymuje "nic" w zamian
    f.n = 0;
}

Useless::~Useless()
{
    delete [] pc;
}

Useless & Useless::operator=(const Useless & f) // przypisanie kopiujące
{
    cout << "kopiujacy operator przypisania: ";
    if(this == &f)
        return *this;
    delete [] pc;
    n = f.n;
    pc = new char[n];
    for(int i = 0; i < n; i++)
        pc[i] = f.pc[i];
    return *this;
}

Useless & Useless::operator=(Useless && f)  // przypisanie przenoszące
{
    cout << "Przenoszacy operator przypisania: ";
    if(this == &f)
        return *this;
    delete [] pc;
    n = f.n;
    pc = f.pc;
    f.n = 0;
    f.pc = nullptr;
    return *this;
}

Useless Useless::operator+(const Useless & f) const
{
    Useless temp = Useless(n + f.n);
    for(int i = 0; i < n; i++)
        temp.pc[i] = pc[i];
    for(int i = n; i < temp.n; i++)
        temp.pc[i] = f.pc[i - n];
    return temp;
}

void Useless::ShowObject() const
{
    cout << "Liczba elementow: " << n;
    cout << ", adres danych: " << (void *) pc << endl;
}

void Useless::ShowData() const
{
    if(n == 0)
        cout << "(obiekt pusty)";
    else
        for(int i = 0; i < n; i++)
            cout << pc[i];
    cout << endl;
}

// aplikacja
int main()
{
    Useless one(10, 'x');
    Useless two = one + one;    // wywołanie konstruktora przenoszącego
    cout << "obiekt one: ";
    one.ShowData();
    cout << "obiekt two: ";
    two.ShowData();
    Useless three, four;
    cout << "three = one\n";
    three = one;
    // automatyczne przypisanie kopiujące
    cout << "teraz obiekt three = ";
    three.ShowData();
    cout << "four = one + two\n";
    four = one + two;
    // automatyczne przypisanie kopiujące
    cout << "teraz obiekt four = ";
    four.ShowData();
    cout << "four = move(one)\n";
    four = move(one);
    // wymuszone przypisanie przenoszące
    cout << "Teraz obiekt four = ";
    four.ShowData();
    cout << "a obiekt one = ";
    one.ShowData();
}