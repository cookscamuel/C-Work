#ifndef PROBATION_EMPLOYEE_H
#define PROBATION_EMPLOYEE_H

#include "PermEmp.h" // inherits from Permanent Employee header file rather than from Employee header file.

class ProbationEmployee : public PermanentEmployee {
public:
    ProbationEmployee(string name, double wage) : PermanentEmployee(name, wage){}

    double calculateNetPay() const override;

};

#endif