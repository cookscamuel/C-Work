#include <iostream>

using namespace std;

class Food {


public:
    virtual void showDetails() { // virtual makes it able to be overridden
        cout << "Hey look, a Food!" << endl;
    }

    virtual ~Food() {} // virtual to allow destructor to be overridden

};

class Burger : public Food {

public:
    void showDetails() override { // this function is taken and changed to do something else
        cout << "It's a burger!" << endl;
    }

    // notice that the destructor does not have to be overridden

};

class Bruschetta : public Food {

public:
    void showDetails() override {
        cout << "Micha's bruschetta was so good." << endl;
        Food::showDetails();
    }


};


class IceCream : public Food {

public:
    void showDetails() override {
        cout << "I love ice cream." << endl;
    }

};

void printDetails(Food* objType) {
    objType->showDetails();
}

void printDetails2(Food objType) {
    objType.showDetails();
}

int main() {

    // Stack objects
    Burger burg;
    Bruschetta brush;
    IceCream ice;

    // These are just pointers, there is no memory allocation occurring here.
    Food* burgPoint = &burg;
    Food* brushPoint = &brush;
    Food* icePoint = &ice;

    // pass the pointers
    printDetails(burgPoint);
    printDetails(brushPoint);
    printDetails(icePoint);
    // the unique functions are accessible


    printDetails2(burg); // this is object slicing, the overridden functions do not exist in the base class function.
    printDetails2(brush);
    printDetails2(ice);
    // without a pointer, it goes to the base class.


    return 0;
}