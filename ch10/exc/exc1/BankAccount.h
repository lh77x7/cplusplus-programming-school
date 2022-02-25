#include <iostream>
#include <cstring>
#include <string>

using std::cout;
using std::cin;
using std::endl;

class BankAccount
{
    private:
        std::string name;
        std::string accountNumer;
        double balance;
    public:
        BankAccount(const std::string & client, const std::string & num, double bal = 0.0); // overloaded constructor
	    ~BankAccount() {}
        void show(void) const;      // show balance
        void deposit(double cash);  // deposit money
        void withdraw(double cash); // take money out  
};
