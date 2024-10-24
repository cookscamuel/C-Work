#include <iostream>
#include <String>

using namespace std;

struct Subject {

    string subjectName;
    int subjectCode;

    Subject() {}

    Subject(string asName, int asCode) {
        subjectName = asName;
        subjectCode = asCode;
    }

    void displaySubject() {
        cout << "SUBJECT: " << subjectName << ", CODE: " << subjectCode;
    }

};


class StoreDetails {

private:
    string assignmentName;
    string dueDate;
    int totalMarks;
    Subject course;

public:

    StoreDetails(string name, string due, int marks, Subject courseInfo) {
        assignmentName = name;
        dueDate = due;
        totalMarks = marks;
        course = courseInfo;
    }

    void displayAssignmentDetails() {
        cout << "ASSIGNMENT: " << assignmentName << endl;
        cout << "DUE DATE: " << dueDate << endl;
        cout << "TOTAL MARKS: " << totalMarks << endl;
        cout << "SUBJECT: " << course.subjectName << " " << course.subjectCode << endl;
    }

};


int main() {

    Subject s1 ("Math", 456);

    // s1.displaySubject();


    StoreDetails store("Math Test", "Tomorrow", 68, s1);

    store.displayAssignmentDetails();

    



    return 0;
}