#include "ProbEmp.h"


double ProbationEmployee::calculateNetPay() const { // this one does not need both functions.
    double cpp = empWage * (cppRate / 2);
    double ei = empWage * (eiRate / 2);
    return empWage - (cpp + ei);
}