// rtti2.cpp -- zastosowanie dynamic_cast, typeid oraz type_info
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <typeinfo>

using namespace std;

class Grand
{
    private:
        int hold;
    public:
        Grand(int h = 0) : hold(h) {}
        virtual void Speak() const { cout << "Jestem klasa Grand!\n"; }
        virtual int Value() const { return hold; }
};

class Superb : public Grand
{
    public:
        Superb(int h = 0) : Grand(h) {}
        void Speak() const { cout << "Jestem klasa Superb!!\n"; }
        virtual void Say() const
        { cout << "Przechowuje wartosc klasy Superb, ktora wynosi " << Value() << "!\n"; }
};

class Magnificient : public Superb
{
    private:
        char ch;
    public:
        Magnificient(int h = 0, char c = 'A') : Superb(h), ch(c) {}
        void Speak() const { cout << "Jestem klasa Magnificent!!!\n"; }
        void Say() const { cout << "Przechowuje znak "  << ch <<
        " oraz liczbe " << Value() << "!\n"; }
};

Grand * GetOne();

int main()
{
    srand(time(0));
    Grand * pg;
    Superb * ps;
    for(int i = 0; i < 5; i++)
    {
        pg = GetOne();
        cout << "Teraz przetwarzam obiekt typu " << typeid(*pg).name() << ".\n";
        pg->Speak();
        if(ps = dynamic_cast<Superb *>(pg))
            ps->Say();
        if(typeid(Magnificient) == typeid(*pg))
            cout << "Tak, rzeczywiscie jestes wspaniala.\n";
    }

    return 0;
}

Grand * GetOne()
{
    Grand * p;
    switch(rand() % 3)
    {
        case 0: p = new Grand(rand() % 100);
            break;
        case 1: p = new Superb(rand() % 100);
            break;
        case 2: p = new Magnificient(rand() % 100, 'A' + rand() % 26);
            break;
    }
    return p;
}