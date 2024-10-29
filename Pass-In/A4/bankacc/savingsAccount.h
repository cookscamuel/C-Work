#ifndef SAVINGS_ACCOUNT_H // guard parameters to avoid compiler confusion
#define SAVINGS_ACCOUNT_H

/*
    Author: Samuel Cook
    Date: October 28
    File: savingsAccount.h
    Purpose: Derived class for savings accounts.
*/

#include "bankAccount.h" // link the parent class.

class SavingsAccount : public BankAccount {
// This class inherits from BankAccount using the public access specifier, granting direct access to public and private attributes and functions.

public:
    SavingsAccount(string account, float accountBalance, string name) : BankAccount(account, accountBalance, name) {}
    // this class uses the BankAccount constructor.

    void deposit(float amount) override;

    void withdraw(float amount) override;
    // this prepares these two functions above to be overridden with new definitions.
    // its the way they are incorporated into meaningful functions rather than PVFs.

    void setCreditScore(int value);

    int getCreditScore();
    
    /*
        these last two functions are basically just getters and setters for the protected
        credit score variable found in the base class. I wasn't sure how else to represent
        protected here, but the idea is that the protected variable can be accessed in this
        class because it is derived. These functions are not featured in the joint account
        class, this is also meant to show that attributes can exist dormant if they do not
        need to be used immediately. Perhaps the joint account will need to access it at
        some point, and it will not be an issue with the way my code is written.    
    */

};

#endif