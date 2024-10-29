#include "savingsAccount.h" // link this logic file to its associated class file.

/*
    Author: Samuel Cook
    Date: October 28
    File: savingsAccount.cpp
    Purpose: Logic file for the functions found in the derived class for savings accounts.
*/

// This is the logic for the deposit function.
void SavingsAccount::deposit(float amount) {
    cout << "Depositing $" << amount << " into Savings Account " << getAccountNumber() << "." << endl;
    if (amount <= 0) {
        cout << "ERROR: invalid entry." << endl;
        cout << "Savings Account Balance: $" << getBalance() <<  "." << endl;
    }
    else {
        float newBalance = getBalance() + amount; // variable to track the new balance for use in the setter.
        setBalance(newBalance); // set the new balance.
        cout << "New Savings Account Balance: $" << getBalance() <<  "." << endl;
    }
}

void SavingsAccount::withdraw(float amount) {
    cout << "Withdrawing $" << amount << " from Savings Account " << getAccountNumber() << "." << endl;
    if (amount > getBalance()) { // if the withdrawal is larger than what is available.
        cout << "ERROR: insufficient funds." << endl;
        cout << "Savings Account Balance: $" << getBalance() <<  "." << endl;
        // do nothing and exit the function
    }
    else if (amount <= 0) { // if the user enters a bad value to withdraw (negative money AKA being given money)
        cout << "ERROR: invalid entry." << endl;
        cout << "Savings Account Balance: $" << getBalance() <<  "." << endl;
        // do nothing and exit the function
    }
    else { // if everything is okay
        float newBalance = getBalance() - amount; // deduct the value from the total balance.
        setBalance(newBalance); // set the new value to the current balance.
        cout << "New Savings Account Balance: $" << getBalance() << "." << endl;
    }

}

// Getters and Setters for the credit score feature.
void SavingsAccount::setCreditScore(int value) {
    this->creditScore = value; // set the credit score to whatever value has been passed to the function.
}

int SavingsAccount::getCreditScore() {
    return creditScore; // simply return the integer value.
}