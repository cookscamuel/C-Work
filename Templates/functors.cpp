#include <iostream>

class HelloWorld {

public:
    void operator()() { // This overloads the function call operator ( this -> () )
        std::cout << "Hello, World!" << std::endl;
    }
};

// The second set of parentheses is where you would put any parameters the function would need.

class Adding {

public:
    int operator()(int a, int b) {
        return a + b;
    }

};

int main() {

    HelloWorld hello; // Create object like usual.

    hello(); // call the object like a function.

    hello.operator()(); // the function can be called like this as well.

    Adding add;

    std::cout << add(1, 2);

    return 0;
}