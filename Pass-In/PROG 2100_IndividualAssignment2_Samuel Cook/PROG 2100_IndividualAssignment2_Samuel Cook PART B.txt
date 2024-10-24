/*
    Author: Samuel Cook
    Course: PROG2100
    Date: October 2, 2024
    Purpose: Demonstrate a basic understanding of shared pointers.
*/

#include <iostream>
#include <memory>

using namespace std;

int main() {

    shared_ptr<int> pointer1 = make_shared<int>(10);
    // this is how to initialize a shared pointer (value is 10).

    cout << "\nValue of pointer1 from within main scope: " << *pointer1;
    // using the * (dereference operator) to print the value for demonstration purposes.

    { // enter a different scope.

        shared_ptr<int> pointer2 = pointer1;
        // this creates a second shared pointer, pointing to pointer 1.

        cout << "\nValue of pointer2 from within new scope: " << *pointer2;

        *pointer2 = 30;
        // you are still able to alter the value stored at the address.

        cout << "\n\n\t*** SET *pointer2 = 30 ***\n";

        cout << "\nValue of pointer1 from inside new scope: " << *pointer1;

    } // return to previous scope
    
    // cout << pointer2;
    // if this code was not commented out, it would not work, as pointer2 is not in the current scope.
    // its memory is no longer allocated.

    cout << "\nValue of pointer1 from original scope: " << *pointer1;
    // this does not print out 10, but rather 30, as the shared pointer changed the value
    // right before leaving the scope.

    return 0;
}

/*

    What are shared pointers and what advantages do they have over traditional pointers?

    Shared pointers are a type of smart pointer introduced in C++11. They can be used to
    have multiple pointer variables that all point to the same memory address. All shared
    pointers jointly own the memory address. When an instance of a shared pointer is done
    being used (no longer in scope), the memory it occupies is automatically freed. Shared
    pointers keep track of how many shared pointers exist, and when that number reaches 0,
    all memory allocated is freed.

    Shared pointers are useful when numerous parts of a program need to access the exact
    same variable. They are a bit overkill in simpler programs, but can really shine when
    working on a complex project with many components.

    Shared pointers automatically free up memory without the programmer needing to manually
    take care of it. Once there are no more shared pointers remaining, the once occupied
    memory is automatically freed. Another advantage is that shared pointers pointers
    automatically prevent dangling pointers, as pointers that are no longer needed are
    removed and the memory is automatically freed.

    Above is my simple C++ program showing off very basic shared pointer abilities.


    Sources Used:
    https://www.geeksforgeeks.org/shared_ptr-in-cpp/
    https://www.youtube.com/watch?v=4bdp9aHzuQY

*/