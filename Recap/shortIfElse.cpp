/*
    Author: Samuel Cook
    Course: PROG2100
    Date: September 10, 2024
    Filename: shortIfElse.cpp
    Purpose: Experiment with local and global variables.
*/

#include <iostream>

int main() {

    int age = 153;
    std::string message = (age < 150) ? "You are mortal man." : "You are an eldritch god.";
    std::cout << message << std::endl;
    // shorthand if else statement.

    int number = 2;

    switch(number) {
        case 1:
            std::cout << "One";
            break;
        case 2:
            std::cout << "Two";
            break;
        case 3:
            std::cout << "Three";
            break;
        default:
            std::cout << "Other";
            break;
    }


    return 0;
}

// NOTES:
// string data type is declared using lowercase.
// remember the shorthand, it is more efficient.