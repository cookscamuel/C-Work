#include "combinationClass.h"
#include <cmath>

template <typename T>
class Shape {

private:
    T radius;

public:
    Shape(T rad) : radius(rad) {}

    T calculateRadius() {
        return M_PI * (radius * radius); // Pi * radius squared
    }

};


int main() {

    CombinationClass comb;

    cout << comb.combine(3, 6);

    string str1 = "chicken\n";
    string str2 = "burger\n";

    cout << comb.chickenFunc(str1, str2);



    Shape<int> shape(5); // you can specify the data type upon creation. It works without doing this, but it's probably a best practice to do it.
    Shape<float> shape2(23.5f);

    cout << shape.calculateRadius() << endl;
    cout << shape2.calculateRadius() << endl;

    return 0;
}

/*
    Differences between Macros and Templates

    Macros can be used to define constants and small functions that are intended to be used
    multiple times. Their intentions are to promote reusability and cut back on how much code
    needs to be written. This is the same goal Templates have, they want to help by cutting
    back on the amount of code that needs to be written (one function template for all data types).
    Both Macros and Templates are not type safe.


    The differences are that macros are not used for classes, but templates are used for functions and classes.

    Compile Time Polymorphism

    Method Overloading, Operator Overloading, Templates



*/