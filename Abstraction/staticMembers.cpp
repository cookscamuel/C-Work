#include <iostream>

using namespace std;

class Assignment {

private:
    string title;
    int marks;
    static int assignmentCount;

public:

    // this is preferred
    Assignment(string title, int marks) : title(title), marks(marks) {
        assignmentCount++;
    }
    // using an initializer list with a body


    // this one is not as efficient as the one above
    // Assignment(string title, int marks) {
    //     this->title = title;
    //     this->marks = marks;
    //     assignmentCount++;
    // }


    // This is a static function
    static int getAssignmentCount() {
        return assignmentCount;
    }

    // static void showDetails() {

    //     cout << "TITLE: " << title << endl;
    //     cout << "MARKS: " << marks << endl;

    // }
    // this will not work because title and marks are not static (they rely on specific instances of objects made with this class).
    // static functions work with static members.

    void display() {
        cout << "TITLE: " << title << ", MARKS: " << marks << endl;
    }

};

// initialize static members
int Assignment::assignmentCount = 0;


int main() {

    Assignment* a1 = new Assignment("MATH", 3);
    a1->display();
    cout << Assignment::getAssignmentCount(); // use this syntax to call static functions (Classname::staticFuncName())

    Assignment a2("SCIENCE", 5);
    a2.display();
    cout << Assignment::getAssignmentCount();
    
    return 0;
}