#include <iostream>
#include <String>

using namespace std;


class ProgrammingLanguage {

private: // ONLY IN THIS CLASS
    string version = "1.0";

protected: // IN THIS FAMILY (THIS CLASS OR CHILD CLASSES)
    string paradigm = "Object Oriented";

public: // EVERYWHERE
    string name = "General Programming Language";

};


// this is inheriting in "public mode"
class Java : public ProgrammingLanguage { // this class is inheriting from ProgrammingLanguage
public:
    void display() {
        cout << "Java is a " << name << endl;
        cout << "It follows the " << paradigm << " paradigm." << endl;
    }
};


class Python : protected ProgrammingLanguage {
public:
    void show() {
        cout << "Python is a " << name << endl;
        cout << "It follows the " << paradigm << " paradigm." << endl;
    }
};


class CPlusPlus : private ProgrammingLanguage {
public:
    void info() {
        cout << "C++ is a " << name << endl;
        cout << "It follows the " << paradigm << " paradigm." << endl;
    }
};



int main() {

    Java* java = new Java;
    Python* python = new Python;
    CPlusPlus* cpp = new CPlusPlus;


    java->display();
    python->show();
    cpp->info();

    cout << java->name;
    cout << python->name;
    cout << cpp->name;

    // the name of python and cpp are protected and private, and cannot be accessed.
    // java is public, so it will allow it.

    delete java, python, cpp;


    return 0;
}