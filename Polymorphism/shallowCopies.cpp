#include <iostream>

using namespace std;

/*
    Remember, copy constructors can take an existing object
    and get used as an argument to a copy constructor to 
    create another object identical to the one that already
    existed.
*/

class CopyConstructorClass {

public:
    int value;

    // Normal constructor
    CopyConstructorClass(int v) : value(v) {}

    // Shallow Copy Constructor (default)
    CopyConstructorClass(const CopyConstructorClass& object) = default;

    // Function to display the value.
    void display() const {
        cout << "Value: " << value << endl;
    }

};


int main() {

    CopyConstructorClass obj1(42);
    cout << "Original object: ";
    obj1.display();

    CopyConstructorClass obj2 = obj1;

    cout << "Shallow Copy Value: ";
    obj2.display();

    obj1.value = 30;
    cout << "After changing Object 1 value to 30:" << endl << "Object 1: ";
    obj1.display();
    cout << "Object 2: ";
    obj2.display();
    cout << "Does not update, it just copies it at its current point in time." << endl;

    return 0;
}

// Shallow copies copy values of variables of objects directly.
// This works as long as the object is not storing values on the heap.

// If any variables are stored on the heap, the copy constructor will
// duplicate pointers to that memory address instead of the actual
// value that is stored at that address.

// Shallow copies can make dangling pointers, memory issues, or make
// the program unnecessarily complicated.

// Use shallow copies when you need to work with a shared memory location.
// Can make code more efficient.