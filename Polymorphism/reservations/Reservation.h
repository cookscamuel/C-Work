#ifndef RESERVATION_H
#define RESERVATION_H

// This is the base class for this project.

#include <iostream>
#include <string>

using namespace std;

class Reservation {

private:
    string name;

public:
    Reservation(const string& resName) : name(resName) {}

    void displayDetails() const;
    void displayDetails(bool showFees) const;
    void displayDetails(const string& message) const;

};


#endif