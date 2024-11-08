#include "Reservation.h"
#include "TentativeReservation.h"

int main() {

    Reservation res1("Standard Reservation");
    TentativeReservation res2("Tentative Reservation");
    string greeting = "Ahoy, Lad!";
    string* message = &greeting;

    res1.displayDetails();
    res2.displayDetails();

    res1.displayDetails(true);
    res2.displayDetails();

    res1.displayDetails(message);

    return 0;
}