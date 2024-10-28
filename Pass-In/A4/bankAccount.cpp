#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H


#include <iostream>
#include <String>

using namespace std;


class BankAccount {

protected:
    string accountNumber;
    double balance;

public:

    string accountHolderName;

    BankAccount(string account, double accountBalance, string name) : accountNumber(account), balance(accountBalance), accountHolderName(name) {};

    virtual ~BankAccount() = default;

    virtual double displayBalance() const = 0;

    virtual double deposit() const = 0;

    virtual double withdraw() const = 0;

};

#endif
