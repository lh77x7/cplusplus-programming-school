// stock20.cpp -- wersja dozbrojona, ćwiczenie 3 rozdział 12, metody klasy stock20.cpp
#include <iostream>
#include "stock20.h"

// konstruktory
Stock::Stock()
{
    company = nullptr;
    shares = 0;
    share_val = 0;
    total_val = 0;
}

Stock::Stock(const std::string & co, long n, double pr)
{
    int len = sizeof co;
    company = new char[len + 1];
    int i = 0;

    for(; i < len and '0' != co[i]; ++i)
        company[i] = co[i];
    company[i] = '\0';

    if(n < 0)
    {
        std::cout << "Liczbe udzialow nie moze byc ujemna; "
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
    if(company)             // jeśli wskaźnik nie jest zerem
        delete [] company;  // usuń dynamiczne alokowanie pamięci
        company = nullptr;  // zresetuj adres wskaźnika
}

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
        share_val = price;
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
        share_val = price;
        set_tot();
    }
}

void Stock::update(double price)
{
    share_val = price;
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
    if(company){
        cout << "Spolka: " << company 
        << " Liczba udzialow: " << shares << '\n'
        << " Cena udzialow: " << share_val << " zl";
        // ustawienie formatu na #.##
        cout.precision(2);
        cout << "Laczna wartosc udzialow: " << total_val << " zl" << '\n';
    } 
    else 
    {
        cout << "Spolka: bez nazwy, liczba udzialow: " << shares << '\n'
        << " Liczba udzialow: " << share_val << " zl";
        // ustawienie formatu na #.##
        cout.precision(2);
        cout << "Laczna wartosc udzialow: " << total_val << " zl" << '\n';
    }
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

std::ostream& operator<<(std::ostream& os, const Stock & s) {
	using std::cout;
	using std::ios_base;
	// set format to #.###
	ios_base::fmtflags orig =
		os.setf(ios_base::fixed, ios_base::floatfield);
	std::streamsize prec = cout.precision(3);
	if (s.company) {
		os << "Spolka: " << s.company
			<< "  Liczba udzialow: " << s.shares << '\n' 
			<< "  Cena udzialow: $" << s.share_val;
		// set format to #.##
		os.precision(2);
		os << "  Laczna wartosc udzialow: $" << s.total_val << '\n';
	}
	else {
		os << "Spolka: bez nazwy,  liczba udzialow: " << s.shares << '\n' << 
			"  Cena udzialow: $" << s.share_val;
		// set format to #.##
		os.precision(2);
		os << "  Laczna wartosc udzialow: $" << s.total_val << '\n';
	}
	// restore original format
	os.setf(orig, ios_base::floatfield);
	os.precision(prec);
	return os;
}