#ifndef JOINT_ACCOUNT_H // guard parameters to avoid compiler confusion
#define JOINT_ACCOUNT_H

/*
    Author: Samuel Cook
    Date: October 28
    File: jointAccount.h
    Purpose: Derived class for joint accounts.
*/

#include "bankAccount.h"

class JointAccount : public BankAccount {
// This also inherits using the public access specifier.

public:
    JointAccount(string account, float accountBalance, string name) : BankAccount(account, accountBalance, name) {}
    // this class also uses the BankAccount constructor.

    void deposit(float amount) override;

    void withdraw(float amount) override;
    // preparing to introduce definitions for these two implemented PVFs.

};

#endif