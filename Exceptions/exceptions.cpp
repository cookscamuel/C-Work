/*
    Author: Samuel Cook
    Course: PROG2100
    Date: September 24, 2024
    Filename: exceptions.cpp
    Purpose: Experiment with exceptions.
*/

#include <iostream>
#include <fstream>
#include <string>
#include <exception>

using namespace std;


int main() {

    ofstream fileToWrite;

    try {
        
        fileToWrite.open(""); // error occurs because a file is not specified.
    
        if (!fileToWrite.is_open()) { 
            throw runtime_error("*** ERROR: unable to open the specified file. ***");
        }

        fileToWrite << "Hey";
        fileToWrite.close();
        cout << "Text added successfully.";
        
    }
    catch(const runtime_error& e) {
        cout << "*** ERROR: Runtime exception caught. ***\n" << e.what() << endl;
        return 1;
    }
    catch(const exception& e) {
        cout << "*** ERROR: General exception caught. ***\n" << e.what() << endl;
    }
    catch(...) {
        cout << "*** ERROR: Unknown exception occurred. ***\n" << endl;
    }
    

    return 0;
}
