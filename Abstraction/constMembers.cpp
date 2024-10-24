#include <iostream>

using namespace std;

class Assignment {

private:
    const int assignmentID;
    const int marks;

public:
    Assignment(int id, int m) : assignmentID(id), marks(m) {}

    void display() const {
        cout << "Assignment ID: " << assignmentID << ", Marks: " << marks << endl;
    }
    // you cannot change any values inside a const function body


    const int& getMarks() {
        return marks;
    }

};


int main() {

    Assignment a1(43, 85);

    cout << a1.getMarks() << endl;


    // constant pointer example
    int value2 = 40;
    int value = 10;
    int* const myptr = &value;
    *myptr = 50; // you are allowed to modify the value at the address.

    // myptr = &value2; // you cannot change the memory location of this pointer since it is constant
    cout << *myptr << endl;


    // myptr = nullptr;
    // you can't even make it null

    const int* ptr2 = &a1.getMarks(); // const before int* when assigning it to a const function

    a1.display();
    cout << "POINTER 2 VALUE: " << *ptr2;

    return 0;
}
