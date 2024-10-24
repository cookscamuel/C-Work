#include <iostream>
#include <String>

using namespace std;

// Define structs outside of the main function.
struct Assignment {

    int assignmentNumber;
    string assignmentName;
    string level;
    int grade;

    // making a function
    string displayName() {
        return assignmentName;
    }

    // defining a constructor
    Assignment(int asNum, string asName, string asLev, int asGrade) {
        assignmentNumber=asNum;
        assignmentName=asName;
        level=asLev;
        grade=asGrade;
    }


}A1, A2; // you can create objects right here instead of in main.

// closing bracket needs semicolon.


int main() {

    A1.assignmentNumber = 1;
    A1.assignmentName = "Math Assignment";
    A1.level = "Intermediate";
    A1.grade = 80;
    A1.displayName();

    cout << A1.displayName();

    Assignment A3 (1, "Yo", "Hey", 4);

    return 0;
}

// this broke when I created the constructor, and I think it's because A1 and A2 cannot be created when a constructor exists.