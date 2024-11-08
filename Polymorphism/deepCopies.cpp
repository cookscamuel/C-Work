#include <iostream>

using namespace std;

/*
    Deep copies are objects that are formed by duplicating variable
    values and allocating new memory.

    Deep copies make independent copies of the pointers by copying
    the data that they point to. This allows the new object to
    operate seperately from the original.

    User defined copy constructors create deep copies.

    Unlike shallow copies, the copied pointers make actual pointers
    rather than just having an address.
*/

class DeepCopyClass {

public:
    int* value;

    DeepCopyClass(int v) {
        value = new int(v);
    }

    DeepCopyClass(const DeepCopyClass& other) {
        value = new int(*other.value);
        cout << "Deep copy constructor called!" << endl;
    }

    ~DeepCopyClass() {
        delete value;
    }

    void display() const {
        cout << "Value: " << *value << endl;
    }


};


int main() {


    DeepCopyClass obj1(43);
    DeepCopyClass obj2 = obj1;
    
    obj1.display();
    obj2.display();

    *obj1.value = 3;

    obj1.display();
    obj2.display();

    return 0;
}
