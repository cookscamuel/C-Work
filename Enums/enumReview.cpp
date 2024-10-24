#include <iostream>
#include <string>

using namespace std;

enum ErrorCodes {
    NO_ERROR = 400,
    EMPTY_CODE,
    CODE_LENGTH_INVALID
};
// this is an enum holding three different statuses for error codes


ErrorCodes validateCode(const string& code) {
    if (code.empty()) return EMPTY_CODE;
    if (code.length() != 5) return CODE_LENGTH_INVALID;
    return NO_ERROR;
}
// this function analyzes the argument passed to it (in this program, the employee code the user enters),
// and returns an enum variable depending on what the argument was.


void displayErrorMessage(ErrorCodes error) {
    if (error == EMPTY_CODE) {
        cout << "Error: Employee code cannot be empty!" << endl;
    } else if (error == CODE_LENGTH_INVALID) {
        cout << "Error: Employee code must be exactly 5 characters long!" << endl;
    }
    // this function prints the appropriate message to the screen based on which specific
    // error the user triggered with their input.
}

int main() {
    string employeeCode; // variable used to hold the user's input

    cout << "Enter your employee code (5 characters): ";
    getline(cin, employeeCode);
    // prompt the user for input and store it in employeeCode
   
    ErrorCodes errorCode = validateCode(employeeCode);
    // this line creates a new enum variable using the result of the function call for validateCode

    if (errorCode != NO_ERROR) { // if validateCode returned something other than NO_ERROR, this block will execute
        displayErrorMessage(errorCode); // this calls the displayErrorMessage function, passing it the errorCode enum variable.
        return 0; // after the result of the displayErrorMessage is displayed, the program will end here.
    }

 
    cout << "Your employee code is: " << employeeCode << endl;
    // if the program does not end due to an absence of NO_ERROR, this print statement will print to the screen.

    return 0;
}