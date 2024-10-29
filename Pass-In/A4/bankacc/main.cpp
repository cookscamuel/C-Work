/*
    Author: Samuel Cook
    Date: October 28
    File: main.cpp
    Purpose: Main file for testing objects, functions, and access modes, ensuring everything works as intended.
*/

#include "savingsAccount.h"
#include "jointAccount.h"
// these statements link the correct files in the project together to make it work even when things are separated.

int main() {

    // create two new dynamically allocated objects: one for savings, the other for joint accounts.
    SavingsAccount* save = new SavingsAccount("485325", 4700.53, "Samuel");
    JointAccount* join = new JointAccount("534749", 7432.65, "Jodie and Kent");

    cout << "CURRRENT SAVINGS BALANCE: $" << save->getBalance() << endl; // checking the accessibility of getter from main.
    save->deposit(5);
    save->deposit(-2);
    save->withdraw(150);
    save->withdraw(20000);
    save->withdraw(-5);
    // basic tests for the object's functions

    cout << "========================================" << endl;

    // another series of tests for the joint account object.
    cout << "CURRRENT JOINT BALANCE: $" << join->getBalance() << endl;
    join->deposit(52.43);
    join->deposit(0);
    join->withdraw(4223);
    join->withdraw(3262.09);
    join->withdraw(0);
    
    // tests for the unique credit score interactions found in the savings account.
    save->setCreditScore(742);
    cout << "\nAccount number " << save->getAccountNumber() << " Credit Score: " << save->getCreditScore() << endl;
    // getCreditScore is just a basic getter, but it could become more complex (ie: professional credit report).

    // join->setCreditScore(3);
    // joint accounts do not have functions for credit scores, and cannot use the setter or getter found in the savings account logic.

    cout << "Goodbye, " << save->accountHolderName << endl;
    cout << "Goodbye, " << join->accountHolderName << endl;
    // showcase public access to attributes, no methods needed.
    
    delete save, join; // free the dynamically allocated memory.

    return 0;
}