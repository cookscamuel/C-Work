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