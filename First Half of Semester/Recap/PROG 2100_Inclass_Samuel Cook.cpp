/*
    Author: Samuel Cook
    Course: PROG2100
    Date: September 12, 2024
    Purpose: In-Class function activity.
*/

#include <iostream>
using namespace std;

int studentNum = 0;
// this is a global counter variable to track how many grades have been entered.


int gatherScores() {

    cout << "=== Average Grade Calculator ===\n";
    // print the title for the program.

    float score; // local float variable for keeping track of most recent input grade.
    float total = 0; // local float variable which represents the sum of all grades entered.

    while (score != -99) {
    // until the value of score equals -99, the below code block will repeat.

        cout << "Enter -99 to stop any time. Enter score for Student #" << studentNum + 1 << ": " << endl;
        cin >> score;
        // prompt the user for input and store it in the score variable.

        if (score == -99) {
            break;
        }
        // this checks whether or not the user has entered -99 to escape.

        if (score < 0) {
            cout << "\nInvalid grade, must be minimum of 0." << endl;
            continue;
        }
        // this checks to see if the grade entered is any other negative number. The entered grade will not be counted.

        total += score;
        // add the most recently entered score to the total, this represents a sum of all entered scores (except for the -99).

        studentNum++;
        // increase the counter variable studentNum with each successful grade input.

        }

        return total;
        
        /*
            This function does not really need to return any values, but I wanted
            to practice with it. Having the score and total variables as global
            would work the same.
        */
}


int calculateAverage(float gradeTotal) { 
// The parameters here refers to the sum of all entered grades returned from the gatherScores function.

    studentNum - 1; 
    // subtract one from the counter variable to account for the user entering -99.

    float average = gradeTotal / studentNum;
    // calculate the average using the 
    
    return average;
    // This could also just cout to the screen rather than returning a value, but I wanted to practice with returning values.
}


int main() {

    float finalTotal = gatherScores();
    // call the gatherScores function, store the return value in a float called finalTotal.

    float finalAvg = calculateAverage(finalTotal);
    // call the calulateAverage function, feed it the value of finalTotal for arguments, and store the returned value in a float called finalAvg.

    if (finalAvg < 0) {
        cout << "No grades were entered.";
    }
    // this handles the scenario where the user enters no grades.
    
    else {
        cout << "Number of Grades Entered: " << studentNum << ".\n";
        cout << "Average Grade: " << finalAvg << "%";
    }
    // print the final average score to the screen.
        
    return 0;
}