#ifndef PERMANENT_EMPLOYEE_H
#define PERMANENT_EMPLOYEE_H

#include "empClass.h"

class PermanentEmployee : public Employee { // single inheritance, one class.
public:
    PermanentEmployee(string name, double wage) : Employee(name, wage) {}

    double calculateGrossPay() const override;

    double calculateNetPay() const override; // const before makes the return value const, const after makes the function constant.

};

#endif

// header files do not contain the logic for functions, but they do have the override keyword so you can set it up later.
// this is a blueprint.