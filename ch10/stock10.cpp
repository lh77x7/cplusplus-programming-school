// stock10.cpp -- klasa Stock, z konstruktorem i destruktorem
#include <iostream>
#include "stock10.h"

// konstruktor (wersja "hałaśliwa")
Stock::Stock()  // konstruktor domyślny
{
    std::cout << "Wywołano konstruktor domyslny\n";
    company = "bez nazwy";
    shares = 0;
    share_val = 0.0;
    total_val = 0.0;
}

Stock::Stock(const std::string & co, long n, double pr)
{
    std::cout << "Wywolano konstruktor z argumentem " << co << "\n";
    company = co;

    if(n < 0)
    {
        std::cout << "Liczba udzialow nie moze byc ujemna; "
            << "ustalam liczbe udzialow w " << company << " na 0.\n";
        shares = 0;
    }
    else
        shares = n;
    share_val = pr;
    set_tot();
}

// destruktor klasy
Stock::~Stock()
{
    std::cout << "Do widzenia, " << company << "!\n";
}

// pozostałe metody
void Stock::buy(long num, double price)
{
    if(num < 0)
    {
        std::cout << "Liczba nabywanych udzialow nie moze byc ujemna. "
            << "Transakcja przerwana.\n"; 
    }
    else {
        shares += num;
        share_val = price;
        set_tot();
    }        
}

void Stock::sell(long num, double price)
{
    using std::cout;
    if(num < 0)
    {
        cout << "Liczba sprzedawanych udzialow nie moze byc ujemna. "
            << "Transakcja przerwana.\n";
    }
    else if(num > shares)
    {
        cout << "Nie mozesz sprzedac wiecej udzialow, niz posiadasz! "
            << "Transakcja przerwana.\n";
    }
    else 
    {
        shares -= num;
        share_val = price;
        set_tot();
    }
}

void Stock::update(double price)
{
    share_val = price;
    set_tot();
}

void Stock::show()
{
    using std::cout;
    using std::ios_base;
    // ustawienie formatu na #.###
    ios_base::fmtflags orig = 
    cout.setf(ios_base::fixed, ios_base::floatfield);
    std::streamsize prec = cout.precision(3);

    cout << "Spolka: " << company
    << " Liczba udzialow: " << shares << '\n';
    cout << " Cena udzialu: " << share_val << " zl";
    // ustawienie formatu na #.##
    cout.precision(2);
    cout << " Laczna wartosc udzialow: " << total_val << " zl" << '\n';
    cout.setf(orig, ios_base::floatfield);
    cout.precision(prec);
}