#include "empClass.h"

class PermanentEmployee : public Employee { // single inheritance, one class.
public:
    PermanentEmployee(string name, double wage) : Employee(name, wage) {}

    double calculateGrossPay() const override {
        return empWage;
    }

    double calculateNetPay() const override { // const before makes the return value const, const after makes the function constant.
        double cpp = empWage * cppRate;
        double ei = empWage * eiRate;
        return empWage - (cpp + ei);
    }

};


class ContractEmployee : public Employee {
public:
    ContractEmployee(string name, double wage) : Employee(name, wage){}

    double calculateGrossPay() const override {
        return empWage;
    }

    double calculateNetPay() const override {
        return empWage;
    }
};


class ProbationEmployee : public PermanentEmployee {
public:
    ProbationEmployee(string name, double wage) : PermanentEmployee(name, wage){}

    double calculateGrossPay() const override {
        return empWage;
    }

    double calculateNetPay() const override {
        double cpp = empWage * (cppRate / 2);
        double ei = empWage * (eiRate / 2);
        return empWage - (cpp + ei);
    }
};


int main() {

    PermanentEmployee pe("Joe", 5000.0);
    ContractEmployee ce("Larry", 5000.0);
    ProbationEmployee pr("Daryl", 5000.0);

    cout << "GROSS FOR PERM: " << pe.calculateGrossPay() << endl << "NET FOR PERM: " << pe.calculateNetPay() << endl;
    cout << "GROSS FOR CONT: " << ce.calculateGrossPay() << endl << "NET FOR CONT: " << ce.calculateNetPay() << endl;
    cout << "GROSS FOR PROB: " << pr.calculateGrossPay() << endl << "NET FOR PROB: " << pr.calculateNetPay() << endl;

    return 0;
}