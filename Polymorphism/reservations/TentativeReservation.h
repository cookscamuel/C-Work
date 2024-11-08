#ifndef TENT_RESERVATION_H
#define TENT_RESERVATION_H


#include "Reservation.h"

class TentativeReservation : public Reservation {

public:
    TentativeReservation(const string& resName) : Reservation(resName) {}

    void displayDetails() const;
};

#endif