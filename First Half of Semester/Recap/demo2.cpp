/*
    Author: Samuel Cook
    Course: PROG2100
    Date: September 5, 2024
    Filename: demo2.cpp
    Purpose: Receive input.
*/

#include <iostream> // header file for input output stream operations
using namespace std; // for accessing objects and variable from standard libraries

int main() { // main function, program execution begins here

    string name; // initialize name variable. always initialize variables at the start.

    cout << "Hello! What is your name?\n";
    cin >> name; // take user input
    cout << "Hello " << name << "!\n";
    cout << name << "\n";

    return 0;
}

// NOTES
// if you dont reference namespace std, you can reference it on a single line like this: std::cout