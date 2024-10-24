#include <iostream>
#include <string>

using namespace std; // it is probably best practice to stop using namespace

class AbstractAssignment {  // this is an abstract class

public:
    virtual void submit() = 0;

    virtual string getTitle() const = 0;

    void describe() const {
        cout << "This is an assignment." << endl;
    }
    // abstracts can also have non virtual functions

};

class IGrading{ // this is an interface

public:

    virtual void grade(int marks) = 0;

    virtual int getGrade() const = 0;

    // interfaces can NOT have regular functions

};


// derived class that implements both
class Assignment : public AbstractAssignment, public IGrading {
private:
    string title;
    int marks;


public:
    Assignment(const string& title) : title(title), marks(0) {}

    void submit() override {
        cout << "Assignment: " << title << " has been submitted." << endl;
    }

    string getTitle() const override {
        return title;
    }

    void grade(int marks) override {
        this->marks = marks;
        cout << "Assignment " << title << " received a score of " << marks << endl;
    }

    int getGrade() const override {
        return marks;
    }

};

int main() {

    Assignment a1("MATH");

    cout << a1.getGrade();

    a1.describe();

    return 0;
}