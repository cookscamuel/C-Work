#include "PermEmp.h"
#include "ProbEmp.h"
#include "ContEmp.h"

// Include the header files rather than the cpp files. Kind of weird.


int main() {

    PermanentEmployee pe("Joe", 5000.0);
    ContractEmployee ce("Larry", 5000.0);
    ProbationEmployee pr("Daryl", 5000.0);

    cout << "GROSS FOR PERM: " << pe.calculateGrossPay() << endl << "NET FOR PERM: " << pe.calculateNetPay() << endl;
    cout << "GROSS FOR CONT: " << ce.calculateGrossPay() << endl << "NET FOR CONT: " << ce.calculateNetPay() << endl;
    cout << "GROSS FOR PROB: " << pr.calculateGrossPay() << endl << "NET FOR PROB: " << pr.calculateNetPay() << endl;

    return 0;
}

// so, you end up having a base blueprint, then you have specific blueprints for each implementation of the base blueprint, then you have cpp files for each sub-blueprint.
// then, in main, you include the sub-blueprints rather than the cpp logic files.