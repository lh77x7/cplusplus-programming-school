#include "BankAccount.h"

std::string name;
std::string accountNumer;
double balance;

// konstruktor
BankAccount::BankAccount(const std::string & client, const std::string & num, double bal): // overloaded constructor
	name(client), accountNumer(num), balance(bal){}

// show balance
void BankAccount::show(void) const {
    cout << "\nName: " << this->name << ", account numer: " << this->accountNumer << ", balance: " << this->balance << "$\n";
}


// deposit money
void BankAccount::deposit(double cash){
    this->balance += cash;
}

// take money out
void BankAccount::withdraw(double cash){
    this->balance >= cash ? this->balance -= cash : this->balance = 0;
}

