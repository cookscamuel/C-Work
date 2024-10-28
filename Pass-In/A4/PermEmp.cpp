#include "PermEmp.h"

double PermanentEmployee::calculateGrossPay() const { // I forgot the const, make sure they are written in the exact same way.
    return empWage;
}

double PermanentEmployee::calculateNetPay() const {
    double cpp = empWage * cppRate;
    double ei = empWage * eiRate;
    return empWage - (cpp + ei);
}

// this is where the logic for functions is kept for the header files.