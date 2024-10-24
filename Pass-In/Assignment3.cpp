/*
    Author: Samuel Cook
    Course: PROG2100
    Date: October 21, 2024
    File: gradeLoader.cpp
    Purpose: Attempt to read grades from a file, throw an appropriate error message if the reading does not occur.
    
    This program assumes each unique grade is on its own line in a text file. Each line is considered a unique grade,
    regardless of the actual contents of the line.
*/

#include <iostream>
#include <fstream>

using namespace std;


// Enum to hold the error codes.
enum Errors {
    NO_ERROR = 1,
    NOT_FOUND,
    EMPTY,
    OVER_MAX
};

// Prototype for display function.
void displayGrades(Errors error, string gradeArray[10]);


// Main function.
int main() {

    string grades[10];             // used to hold grades that were read from a file.
    string gradeEntry;             // used to temporarily hold a line (grade) from a file until it is stored in the grades array.
    int error = EMPTY;             // used to assign an error depending on the scenario. set to Empty by default until proof of text is found.

    ifstream readGrades("grades.txt"); // attempt to read from the grades file
    
    // if the file cannot be found for reading
    if (!readGrades) { 
        error = NOT_FOUND; // set the error to be displayed to not found.
    }

    // if the file is found and opened
    else  {

        for (int i=0; getline(readGrades, gradeEntry); i++) { // go through every line in the file

            // if the line is empty
            if (gradeEntry == "") {
                i--; // decrease the counter variable by one
                continue; // return to the top of the loop
                // by doing this, any time an empty line is found, the program skips over it
                // and does not include it as a grade to be displayed, even if it is at the 
                // start or in the middle of the list of grades.
                // This also ensures that the program does not think the maximum amount of 
                // grades has been reached before this has actually occurred.
                // If this is the case for each loop, the value of error is still set to
                // empty, which reflects what has occurred.
            }

            // if the counter has reached 10 (meaning 10 items have already been added to the grade array)
            else if (i == 10) {
                error = OVER_MAX; // set the error message to the one for over maximum entries.
                break; // exit the loop immediately
            }
            
            // if the line is not empty, and there is still room in the array
            else {
                grades[i] = gradeEntry; // add the line to the array.
                error = NO_ERROR; // set the error message to no error.
                // this will only happen if a line with anything on it is found.
                // empty lines will not trigger this, but a space will.
            }
        }
    }

    // call the function and pass it the error and the grades array.
    displayGrades(static_cast<Errors>(error), grades);

    // always close the file that was read from.
    readGrades.close();

    return 0;
}


// Function for displaying either the grades or an appropriate error message.
void displayGrades(Errors error, string gradeArray[10]) {

    // this will run a block of code depending on what error code reached the function call.
    switch (error) {
        case NO_ERROR: // if there was at least one line with at least one character
            cout << endl << "=== GRADES ===";
            for (int i=0; i<=9; i++) { // loop through for the fixed number of indexes
                
                if (gradeArray[i] == "") { // if an index is not filled
                    continue; // do not print it to the screen, skip it
                }
                else {
                    cout << endl << gradeArray[i]; // print the contents of index i to the screen on each loop.
                }
            }
            cout << endl;
            break; // break from the switch.

        case NOT_FOUND: // the file cannot be opened/is not found
            cout << "ERROR: File not found." << endl; // output an error message to the screen.
            break; // break from the switch.

        case EMPTY: // if each line in the file contains no characters
            cout << "ERROR: The file is empty." << endl; // output an error message to the screen.
            break; // break from the switch.

        case OVER_MAX:
            cout << "ERROR: Maximum data size exceeded." << endl;
            break; // break from the switch.
        
        default: // if somehow the error is set to another value
            cout << "ERROR: An unknown error occurred. Please try again." << endl; // output notice of unknown error to the screen
            break; // break from the switch.
    }
}