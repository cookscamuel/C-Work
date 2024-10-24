#include <iostream>

using namespace std;

// this is how to declare a class
class Assignment {

// this is how to define public attributes
public:
    // non-static members
    string title;
    string dueDate;

    // static member (all objects will share this)
    static int totalAssignments;

    // this is a default constructor, there are no parameters.
    Assignment() {
        title="undefined";
        dueDate="undefined";
        totalAssignments++;
    }

    // this is a parameterized constructor.
    Assignment(string name, string due) {
        title=name;
        dueDate=due;
        totalAssignments++;
    }

    // this is a copy constructor
    Assignment(const Assignment &A) {
        title = A.title;
        dueDate = A.dueDate;
        totalAssignments++;
    }

    // this will create a default constructor, it forces the compiler to use this one.
    // Assignment() = default;

    void display() const {
        cout << "Assignment: " << title << "\nDue: " << dueDate << endl;
    }

    void displayTotalAssignments() {
        cout << "Total Assignments: " << totalAssignments << endl;
    }

    ~Assignment() {
        totalAssignments--;
        cout << "\nDESTRUCTOR CALLED";
    }

};

int Assignment::totalAssignments = 0;

int main() {

    Assignment* a1 = new Assignment; // heap object. POINTER == HEAP

    a1->display();
    a1->displayTotalAssignments();

    Assignment* a2 = new Assignment;
    a2->display();
    a2->displayTotalAssignments();


    Assignment assignmentCopy(*a1);
    assignmentCopy.display();
    assignmentCopy.displayTotalAssignments();
    // compiler defined constructor will make all of the attributes blank
    // the compiler tries to make its own constructor
    
    // // using the parameterized constructor.
    // Assignment a2("Math Test", "Tomorrow");

    // a2.display();
    // a2.displayTotalAssignments();
    

    // delete a1, a2, assignmentCopy;
    // always delete heap objects.

    // you don't need to delete objects when you have a destructor

    return 0;
}