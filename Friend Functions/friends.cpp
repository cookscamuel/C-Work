#include <iostream>

using namespace std;

class Assignment {

private:
    double marks1;
    double marks2;

public:
    Assignment(double m1, double m2) : marks1(m1), marks2(m2) {}

    friend double calculateTotalMarks(Assignment assignment);
    // this is kind of like a prototype for a friend function.
    // it just introduces the function that will be friends with
    // the class.

};

// this is where the friend function is made
double calculateTotalMarks(Assignment assignment) {
    return assignment.marks1 + assignment.marks2;
}
// its like a getter/setter that is outside the class.
// can be used to work with two different classes perhaps.

// the real use is when you do not want to make getters and setters inside the class.


int main() {

    Assignment a1(85, 73);

    double total = calculateTotalMarks(a1);

    cout << "TOTAL MARKS FROM FRIEND FUNCTION: " << total << endl;

    cout << calculateTotalMarks(a1); // works just like a normal function.

    return 0;
}