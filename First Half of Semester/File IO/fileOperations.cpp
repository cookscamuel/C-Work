/*
    Author: Samuel Cook
    Course: PROG2100
    Date: September 24, 2024
    Filename: fileOperations.cpp
    Purpose: Experiment with file IO.
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;


int main() {

    ofstream fileToWrite("C:\\Users\\W0490409\\OneDrive - Nova Scotia Community College\\Desktop\\Work\\C++\\File IO\\hello.txt"); // create a variable called fileToWrite.
    string userInput;

    cout << "Enter some text: ";
    getline(cin,userInput);
    
    if (fileToWrite.is_open()) { 
    // error handling, checks to make sure the file is open.

        fileToWrite << userInput;
        // write to the file

    }

    else  {
        cout << "There was a problem opening the targeted file.";
        
        }
        // if the file is not able to open, print error message.

    fileToWrite.close();
    // always make sure to close the file.


    return 0;
}
