#include <iostream>
using namespace std;

// Define a Base Class
class BaseClass {

public:
    virtual void displaySentence() { // Notice the virtual keyword, this allows this function to be redefined in derived classes.
        cout << "Base class here, how's it going?" << endl;
    }

};

class DerivedClass : public BaseClass { // This class uses public inheritance to derive from the BaseClass base class.

public:

    void displaySentence() override { // The override keyword makes sure that the base class function of this name is overridden.
        cout << "Hello Friends, this is the derived class!" << endl;
    }

};


int main() {

    BaseClass base; // This is an object of the base class.

    DerivedClass der; // This is an object of the derived class.

    base.displaySentence();
    der.displaySentence();
    // When the same function is called from two different classes, the output is
    // whatever it was defined as in its own class.

    // Though it is the same function, base.displaySentence() will output "Base class here, how's it going?"
    // and der.displaySentence() will output "Hello Friends, this is the derived class!"

    // Below is a brief example of a base class pointer pointing to a derived class object.
    BaseClass* basepointer; // this is a BaseClass pointer.
    basepointer = &der; // Here, the base pointer points to the memory address of the derived object.
    basepointer->displaySentence(); // even though this is a base pointer, it will use the derived class function since that's where it's pointing.

    return 0;
}