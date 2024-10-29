#include "jointAccount.h" // link this logic file to its associated class file.

/*
    Author: Samuel Cook
    Date: October 28
    File: jointAccount.cpp
    Purpose: Logic file for the functions found in the derived class for joint accounts.
*/

/*
    I will not be explaining the code in this file as it is pretty much the same as the
    logic found in the savings account deposit and withdraw function definitions.
    You could make these functions do different things, but in this example, I have
    changed nothing more than the text that is displayed to the users.
    If there were account charges that occurred depending on the type of account, you
    could reflect that in these logic files (ie: savings accounts deduct $5 for every
    withdrawal, while joint accounts deduct $15 for every deposit over $200).
*/
void JointAccount::deposit(float amount) {
    cout << "Depositing $" << amount << " into Joint Account " << getAccountNumber() << "." << endl;
    if (amount <= 0) {
        cout << "ERROR: invalid entry." << endl;
        cout << "Joint Account Balance: $" << getBalance() <<  "." << endl;
    }
    else {
        float newBalance = getBalance() + amount;
        setBalance(newBalance);
        cout << "New Joint Account Balance: $" << getBalance() <<  "." << endl;
    }
}

void JointAccount::withdraw(float amount) {
    cout << "Withdrawing $" << amount << " from Joint Account " << getAccountNumber() << "." << endl;
    if (amount > getBalance()) {
        cout << "ERROR: insufficient funds." << endl;
        cout << "Joint Account Balance: $" << getBalance() <<  "." << endl;
    }
    else if (amount <= 0) {
        cout << "ERROR: invalid entry." << endl;
        cout << "Joint Account Balance: $" << getBalance() <<  "." << endl;
    }
    else {
        float newBalance = getBalance() - amount;
        setBalance(newBalance);
        cout << "New Joint Account Balance: $" << getBalance() <<  "." << endl;
    }
}
