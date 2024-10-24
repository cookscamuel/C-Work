#include <iostream>

using namespace std;

// this is how to declare a class
class Assignment {

// this is how to define public attributes
public:
    string title;
    string dueDate;

    // Assignment(string title, string dueDate); this is a constructor

};


int main() {

    Assignment a1; // this is how to declare a stack object. This is simple because there is no default constructor.

    // you can set values for the attributes with the dot operator
    a1.title = "Math Homework";
    a1.dueDate = "2024-10-15";

    // it can be printed with the dot operator as well
    cout << a1.title << endl << a1.dueDate << endl;


    // You can make heap objects from the same class, you don't need to specify it in the class.
    Assignment* heapAssignment = new Assignment; // more like java, uses the pointer dereference operator.
    // you don't need the (), unless there is something to pass it, like a constructor.

    heapAssignment->title = "Computer Science Project";
    heapAssignment->dueDate = "2024-10-19";
    // use the -> operator instead of the dot operator.

    cout << heapAssignment->title << endl << heapAssignment->dueDate << endl;

    delete heapAssignment;
    // memory is allocated upon creation, simply delete the object when you are done with it.

    return 0;
}