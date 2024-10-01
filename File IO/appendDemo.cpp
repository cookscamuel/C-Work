#include <iostream>
#include <fstream>

using namespace std;


int main() {

    fstream fileRW("C:\\Users\\W0490409\\OneDrive - Nova Scotia Community College\\Desktop\\Work\\C++\\File IO\\hello.txt",ios::app); // append mode, adds to the end.
    
    
    if (fileRW.is_open()) { 
            fileRW << "This text was added using fstring.\n";
        }


    else  { // if the file cannot be found.
        cout << "*** ERROR: there was a problem opening the targeted file. ***";
    }

    fileRW.close(); // close the file before trying to access it again.

    /////////////////////////////////////////////////////// Displaying the Contents with ios::in //////////////////////////////////////////////////////////////////

    fileRW.open("C:\\Users\\W0490409\\OneDrive - Nova Scotia Community College\\Desktop\\Work\\C++\\File IO\\hello.txt",ios::in);

    // if the file does not exist.
    if (!fileRW) {
        cout << "*** ERROR: file cannot be accessed. ***";
    }


    else {
        string sentence;
        while (getline(fileRW, sentence)) {
            cout << sentence << endl;
        }
    }

    fileRW.close();
    // always close the file.


    return 0;
}