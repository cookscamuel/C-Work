#include "TentativeReservation.h"

void TentativeReservation::displayDetails() const {
    Reservation::displayDetails(); // this calls the base class version of this function.
    cout << "Your tentative reservation is secured." << endl;
}