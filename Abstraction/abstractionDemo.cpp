#include "assignmentHeader.h"
// use the header file we created, no need to include anything else since its included in there already.


using namespace std;

class DerivedAssignment1 : public Assignment {
private:
    double marks;

public: 

    DerivedAssignment1(double m) {
        marks = m;

    }

    // like Java interfaces, this is implementing the method that was defined in the header file's Abstract Class.
    void submit() override {
        cout << "Submitted work!\nYour mark: " << marks << endl;
    }
    // literally just use the pure virtual function. It's not that difficult.

    // now, this class has implemented the header file's abstract class.


    void calcGrade() override {
        if (marks >= 60) {
            cout << "YOU PASSED" << endl;
        }
        else {
            cout << "YOU FAILED" << endl;
        }
    }

};


class GroupAssignment : public Assignment {

private:
    string title;

public:

    GroupAssignment(string name) {
        title = name;
    }

    void submit() override {
        cout << "Submitted work for " << title << endl;
    }

    void calcGrade() override {
        cout << "ERROR: no grade supplied!";
    }

    ~GroupAssignment() {
        cout << "DELETED!" << title << endl;
    };


};


int main() {

    Assignment* assignment1 = new DerivedAssignment1(6.3);
    // references the derived class since objects cannot be made directly from abstract classes.

    assignment1->submit();
    assignment1->calcGrade();

    Assignment* assignment2 = new GroupAssignment("Computer Science Project");

    assignment2->submit();
    assignment2->calcGrade();


    delete assignment1;
    delete assignment2;

    return 0;
}