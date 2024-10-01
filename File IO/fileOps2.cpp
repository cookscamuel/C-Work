#include <iostream>
#include <fstream>

using namespace std;


int main() {

    ifstream fileToRead("C:\\Users\\W0490409\\OneDrive - Nova Scotia Community College\\Desktop\\Work\\C++\\File IO\\hello.txt"); // create a variable called fileToRead to read from a file.
    
    if (!fileToRead) { 
    // error handling, checks to make sure the file exists.

        cout << "*** ERROR: there was a problem opening the targeted file. ***";
        // if the file is not able to open, print error message.

    }

    else  {

        string sentence; // variable to store the contents of the text file.
        while (getline(fileToRead, sentence)) { // read every line of the file.
            cout << sentence << endl; // print out each line.
        }
        
        }

    fileToRead.close(); // close the file.


    return 0;
}