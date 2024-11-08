#include <iostream>
using namespace std;

// Define the base Animal class
class Animal {

// Create private variables for the base class.
private:
    string name;
    int limbs;
    int age;
// because they are private, they will not be inherited.

// Define public functions.
public:

    int teeth; // this is a public variable, and so it will be inherited by the derived classes.

    // Simple constructor, which will display a message upon creation.
    Animal(string animalName, int numlimbs, int numage) : name(animalName), limbs(numlimbs), age(numage) {
        cout << "New Animal Created: ";
    }

    virtual void makeSound() { // virtual keyword means any derived classes can take this function and reshape it to do whatever they want.
        cout << "The animal makes a sound." << endl;
    }
    // Base class pointers pointing to a derived class object can call this function and it will use the derived object's version rather than the base class's.

    virtual void eat() {
        cout << "The animal eats." << endl;
    }

    string getName() const { // simple getter, used to access private variable in other classes.
        return name;
    }
};

// Derived Class for Goats
class Goat : public Animal {

public:
    Goat(string name, int limbs, int age) : Animal(name, limbs, age) { // constructor for Goat objects that uses the base class constructor to set up member variables.
        cout << name << " has arrived!" << endl; // print a message when this constructor is called.
        teeth = 30;
    }

    void makeSound() override { // override keyword combined with virtual keyword guarantees that the function of the same name in the base class is properly redefined.
        cout <<  Animal::getName() << " says 'meeehhhhh!'" << endl; // different functionality than the base class's.
    }

};

// Derived class for Octopi
class Octopus : public Animal {

public:
    Octopus(string name, int limbs, int age) : Animal(name, limbs, age) { // the same idea as the goat constructor but for Octopi.
        cout << "Larry crawls on in!" << endl;
        teeth = 160;
    }

    void makeSound() override {
        cout <<  Animal::getName() << " is inaudible as they crawl along the ocean floor." << endl;
    }

    void eat() override { // notice how this function was not changed in the goat class.
        cout << Animal::getName() << " scarfs down a mollusk." << endl;
    }

};

int main() {

    Goat billy("Billy", 4, 12);

    Octopus larry("Larry", 3, 6);

    billy.makeSound();
    billy.eat(); // The goat class does not redefine the eat function, it simply inherits the one from the base class.

    larry.makeSound();
    larry.eat();
    larry.teeth = 6; // teeth is public, and it can be accessed in main directly. teeth was inherited from Animal, it was not defined in Octopus.
    cout << larry.getName() << " has " << larry.teeth << " teeth!" << endl;
    cout << billy.getName();


    return 0;
}