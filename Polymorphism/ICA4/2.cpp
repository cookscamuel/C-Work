#include <iostream>
using namespace std;

// Define the class
class Question2Demo {

private:
    int variable;

public:
    Question2Demo(int num) : variable(num) {
        cout << "Constructor has been called!" << endl;
    }

    ~Question2Demo() {
        cout << "Destructor has been called!" << endl;
    };
};




int main() {

    Question2Demo* obj = new Question2Demo(54); // dynamically allocate memory for a new object using the new keyword.

    cout << "(constructor activated above this sentence)" << endl; // this proves that the constructor worked since there is a confirmation cout statement above this one.

    delete obj; // delete keyword used to guarantee memory is freed from program.
    // when the previously allocated memory is freed, the destructor is called
    // to clean up/remove any saved variables or data the object had.

    cout << "(destructor called above this sentence)" << endl; // if there is a destructor statement above this line, it worked correctly.

    return 0;
}