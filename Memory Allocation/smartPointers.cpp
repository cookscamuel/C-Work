#include <iostream>
#include <memory>

using namespace std; // Allows us to use standard library components without the std:: prefix

// Function demonstrating unique_ptr
void useUniquePtr() {
    // Create a unique_ptr for an integer, initializing it with the value 42
    unique_ptr<int> carPtr = make_unique<int>(42); 
    // Print the value that carPtr points to
    cout << "Car Value: " << *carPtr << endl; // Access the value using dereference operator
}

// Function demonstrating shared_ptr
void useSharedPtr() {
    // Create a shared_ptr (bikePtr1) for an integer, initializing it with the value 100
    shared_ptr<int> bikePtr1 = make_shared<int>(100);  
    {
        // Create another shared_ptr (bikePtr2) that shares ownership of the same memory as bikePtr1
        shared_ptr<int> bikePtr2 = bikePtr1; 
        // Print the value that bikePtr2 points to
        cout << "Shared Bike Value: " << *bikePtr2 << endl;
    } // bikePtr2 goes out of scope here, but bikePtr1 still owns the memory
    // Print the value that bikePtr1 points to after bikePtr2 is out of scope
    cout << "Bike Value after bikePtr2 scope: " << *bikePtr1 << endl; // Memory is still valid
}

// Function demonstrating weak_ptr
void useWeakPtr() {
    // Create a shared_ptr for an integer, initializing it with the value 200
    shared_ptr<int> truckPtr = make_shared<int>(200);
    // Create a weak_ptr that observes truckPtr, without increasing its reference count
    weak_ptr<int> weakTruckPtr = truckPtr; 

    // Attempt to get a shared_ptr from weakTruckPtr
    if (auto lockedTruckPtr = weakTruckPtr.lock()) { 
        // If successful, print the value that lockedTruckPtr points to
        cout << "Weak Truck Value: " << *lockedTruckPtr << endl;
    } else {
        // If the resource is no longer available, print a message
        cout << "Truck resource no longer available." << endl;
    }
}

// Main function to run the examples
int main() {
    useUniquePtr(); // Call the function to demonstrate unique_ptr
    useSharedPtr(); // Call the function to demonstrate shared_ptr
    useWeakPtr();   // Call the function to demonstrate weak_ptr
    return 0;       // Return 0 to indicate successful completion
}