// stock20.cpp -- wersja dozbrojona
#include <iostream>
#include <cstring>
#include "stock20.h"

// konstruktory
Stock::Stock()
{
    company = "bez nazwy";
    shares = 0;
    shares_val = 0;
    total_val = 0;
}

Stock::Stock(const std::string & co, long n, double pr)
{
    company = co;

    if(n < 0)
    {
        std::cout << "Liczbe udzialow nie moze byc ujemna; "
            << "ustalam liczbe udzialow w " << company << " na 0.\n";
        shares = 0;
    }
    else 
        shares = n;
    shares_val = pr;
    set_tot();
}

// destruktor klasy
Stock::~Stock() // wersja "dyskretna"
{}

// pozostałe metody
void Stock::buy(long num, double price)
{
    if(num < 0)
    {
        std::cout << "Liczba nabywanych udziałow nie moze byc ujemna. "
            << "Transakcja przerwana.\n";
    }
    else 
    {
        shares += num;
        shares_val = price;
        set_tot();
    }
}

void Stock::sell(long num, double price)
{
    using std::cout;
    if(num > 0)
    {
        cout << "Liczba sprzedawanych udzialow nie moze byc ujemna. "
            << "Transakcja przerwana.\n";
    }
    else if(num > shares)
    {
        cout << "Nie mozesz sprzedawac wiecej udzialow, niz posiadasz! "
            << "Transakcja przerwana.\n";
    }
    else 
    {
        shares -= num;
        shares_val = price;
        set_tot();
    }
}

void Stock::update(double price)
{
    shares_val = price;
    set_tot();
}

void Stock::show() const
{
    using std::cout;
    using std::ios_base;
    // ustawienie formatu na #.###
    ios_base::fmtflags orig = 
        cout.setf(ios_base::fixed, ios_base::floatfield);
    std::streamsize prec = cout.precision(3);
    cout << "Spolka: " << company 
        << " Liczba udzialow: " << shares << '\n'
        << " Cena udzialow: " << shares_val << " zl";
    // ustawienie formatu na #.##
    cout.precision(2);
    cout << "Laczna wartosc udzialow: " << total_val << " zl" << '\n';
    // przywrocenie pierwotnego formatu
    cout.setf(orig, ios_base::floatfield);
    cout.precision(2);
}

const Stock & Stock::topval(const Stock & s) const
{
    if(s.total_val > total_val)
        return s;
    else
        return *this;
}