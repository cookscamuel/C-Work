#ifndef SAVINGS_ACCOUNT_H
#define SAVINGS_ACCOUNT_H

#include "bankAccount.h"

class SavingsAccount : public BankAccount {

public:
    SavingsAccount(string account, double accountBalance, string name) : BankAccount(account, accountBalance, name) {}

    void deposit(float amount) {
        
    }

    void withdraw() {

    }

};

#endif