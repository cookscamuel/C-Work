#include <iostream>

using namespace std;


class GradeBook;
// class prototype to prepare the base class.


class Assignment {

private:
    double marks1;
    double marks2;

public:
    Assignment(double m1, double m2) : marks1(m1), marks2(m2) {}

    friend class GradeBook;
    // make them friends with this

};


// create the friend class
class GradeBook {

public:
    void displayMarks(const Assignment& assignment) { // uses reference to objects created from specific class
        cout << "A1: " << assignment.marks1 << endl << "A2: " << assignment.marks2 << endl; // access private members.
    }
};


int main() {

    Assignment a1(85, 90);

    GradeBook friendOfA1;

    friendOfA1.displayMarks(a1); // use the instance of the friend class to utilize it.

    return 0;
}