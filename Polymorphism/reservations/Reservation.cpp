#include "Reservation.h"

void Reservation::displayDetails() const {
    cout << "Reservation name: " << name << endl;
}

void Reservation::displayDetails(bool showFees) const {
    cout << "Reservation name: " << name << endl;
    if (showFees) {
        cout << "Fees: $1000000" << endl;
    }
}

void Reservation::displayDetails(const string& message) const {
    cout << message << ": " << name << endl;
    cout << "It worked!" << endl;
}

// they all have the same name, but can be used differently
// it's kind of like an if statement depending on the way you call the function.


// Also, this is the first example of a base class not being abstract
// Logic can be separated like any other class.