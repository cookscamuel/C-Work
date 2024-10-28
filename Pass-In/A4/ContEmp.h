#ifndef CONTRACT_EMPLOYEE_H
#define CONTRACT_EMPLOYEE_H

#include "empClass.h"

class ContractEmployee : public Employee {
public:
    ContractEmployee(string name, double wage) : Employee(name, wage){}

    double calculateGrossPay() const override;

    double calculateNetPay() const override;

};

#endif