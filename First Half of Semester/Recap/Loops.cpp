/*
    Author: Samuel Cook
    Course: PROG2100
    Date: September 10, 2024
    Filename: Loops.cpp
    Purpose: Experiment with loops.
*/

#include <iostream>
using namespace std;

int main() {

    int numModules;
    float score;
    float total = 0;
    // declare variables

    cout << "How many courses do you have? Enter as an integer: ";
    cin >> numModules;
    // prompt user for input and accept input

    if (numModules <= 0) {
        cout << "Invalid number of modules.";
        return 1;
    }
    // check if the user enters a number of modules less than or equal to 0.
    // end program if this happens.

    // this is very simple error handling, works if user enters a non-integer type.

    for (int i=1; i<= numModules; i++) {

        cout << "Enter score for Course #" << i << ": "; // prompt user for each course score.
        
        cin >> score;// there is no error handling for this segment.

        total += score; // The same thing as total = total + score
    }


    float average = total / numModules; // calculate the average grade from all entered scores.

    cout << "The average score is: " << average << endl; // print average.

    return 0;
}