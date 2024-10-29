#ifndef BANK_ACCOUNT_H // guard parameters to avoid compiler confusion
#define BANK_ACCOUNT_H

/*
    Author: Samuel Cook
    Date: October 28
    File: bankAccount.h
    Purpose: Abstract class for bank accounts to derive from.
*/


#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
// these are included in the base abstract class so they do not need to be included anywhere else.

using namespace std;


class BankAccount {

private:
    string accountNumber; // variable for holding a user's account number.
    float balance; // variable for tracking the current balance of the account.

protected:
    int creditScore;
    /*
        I added this to showcase the protected access modifier. It may not make
        much sense in the way I have included it in this project for real life
        situations, but the concept of protected attributes is hopefully 
        starightforward with my example.

        Essentially, this variable holds the current credit score for an account,
        if the account has one.
    */

public:
    string accountHolderName; // variable to hold the name linked to the user's account.

    // Parameterized constructor.
    BankAccount(string account, float accountBalance, string name) : accountNumber(account), balance(accountBalance), accountHolderName(name) {};

    // Virtual destructor.
    virtual ~BankAccount() = default;

    // PVF for depositing money into the account.
    virtual void deposit(float amount) = 0;

    // PVF for withdrawals.
    virtual void withdraw(float amount) = 0;

    // Setters for balance and account number.
    void setBalance(float userBal) {
        this->balance = userBal;
    }

    void setAccountNumber(string userAcc) {
        this->accountNumber = userAcc;
    }


    // Getters for balance and account number.
    float getBalance() {
        return balance;
    }

    string getAccountNumber() {
        return accountNumber;
    }

};

#endif
