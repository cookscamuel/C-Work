#include <iostream>
#include <String>

using namespace std;


class ProgrammingLanguage {

public:

    ProgrammingLanguage() {
        cout << "ProgrammingLanguage base constructor called." << endl;
    }

    ProgrammingLanguage(string lang) {
        cout << "ProgrammingLanguage constructor with " << lang << " called." << endl;
    }

};


class Java : public ProgrammingLanguage {

public:
    Java() : ProgrammingLanguage("Java") {
        cout << "JAVA CONSTRUCTOR CALLED!" << endl;
    }

};


class Python : public ProgrammingLanguage {

public:
    Python() : ProgrammingLanguage("Python") {
        cout << "PYTHON CONSTRUCTOR CALLED!" << endl;
    }
};


class CPP : private ProgrammingLanguage {

public:
    CPP() : ProgrammingLanguage("C++") {
        cout << "C++ CONSTRUCTOR CALLED!" << endl;
    }
};


int main() {

    Java java;
    Python python;
    CPP cpp;

    return 0;
}