#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H


#include <iostream>
#include <String>

using namespace std;


class BankAccount {

private:
    string accountNumber;
    double balance;

public:

    string accountHolderName;

    BankAccount(string account, double accountBalance, string name) : accountNumber(account), balance(accountBalance), accountHolderName(name) {};

    virtual ~BankAccount() = default;

    virtual void deposit(float amount) = 0;

    virtual void withdraw(float amount) = 0;

};

#endif
