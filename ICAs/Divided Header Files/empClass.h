#ifndef EMPLOYEE_PAYROLL_H
#define EMPLOYEE_PAYROLL_H


#include <iostream>
#include <String>

using namespace std;


class Employee {

protected:
    string empName;
    double empWage;
    const double cppRate = 0.05;
    const double eiRate = 0.015;

public:
    Employee(string name, double wage) : empName(name), empWage(wage) {};

    virtual ~Employee() = default;

    virtual double calculateGrossPay() const = 0;

    virtual double calculateNetPay() const = 0;

};

#endif


/*
    This is the base class. It defines all possible functions that children can use.

    Then, each header file is like another set of blueprints for specific classes
    that implement the base header file.

    Then, each implemented class header file has a .cpp file that describes the logic
    for that class.

    
*/