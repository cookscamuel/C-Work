#include <iostream>

using namespace std;

// this is how to declare a class
class Assignment {

// this is how to define public attributes
public:
    string title;
    string dueDate;

    // Assignment(string title, string dueDate); this is a constructor

private:
    int creditLevel;

public: // getter and setter, must be public.
    int getCreditLevel() const { // const after the function name is preferred.
        return creditLevel;
    }
    void setCreditLevel(int level) {
        this->creditLevel = level;
    };

};


int main() {

    Assignment* a1 = new Assignment;

    a1->title = "Computer Science Project";
    a1->dueDate = "2024-10-19";
    a1->setCreditLevel(5);
    // use setter

    

    cout << "Title: " << a1->title << "\nDue: " << a1->dueDate << "\nCredit Level: " << a1->getCreditLevel() << endl; // using getter.

    delete a1;
    // memory is allocated upon creation, simply delete the object when you are done with it.

    return 0;
}