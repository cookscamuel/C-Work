#include <iostream>
#include <vector>
#include <algorithm>

class FunctorDemo {

private:
    int incrementValue;

public:
    FunctorDemo(int value) : incrementValue(value) {}

    // By overloading the (), instances of the class will behave like a function.
    void operator()(int& num) {
        num += incrementValue;
    }

};


int main() {

    // Vector of integers
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    // Display original values.
    std::cout << "Original Vector: ";
    for (const int& num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    FunctorDemo incrementFive(5);

    std::for_each(numbers.begin(), numbers.end(), incrementFive);

    std::cout << "Modified Vector (After Incrementing by 5): ";
    for (const int& num : numbers) {
        std::cout << num << " ";
    }

    return 0;
}

// Functors are useful when wanting to make changes to objects or data structures. They are not a requirement, but
// they can be useful to do so. There are other ways of doing this.