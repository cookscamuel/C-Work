#include <iostream>

using namespace std;

// very similar to java, almost identical actually
enum Courses {
    ProgrammingWithCPlusPlus = 20,
    MobileAppDevelopment = 40,
    AdvancedJava = 20,
    ProjectManagement = -60
};
// declared outside of main, though they can also be made within main.

int main() {

    cout << "=== DEFAULT COURSE VALUES ===" << endl;

    cout << "C++: " << ProgrammingWithCPlusPlus + 4 << endl; // you can add to the values of them, it will not alter the following unspecified elements.
    cout << "MOBI: " << MobileAppDevelopment << endl;
    cout << "ADVANCED OOP: " << AdvancedJava << endl;
    cout << "PROJECT MANAGEMENT: " << ProjectManagement << endl;
    // by default, the values are simply the index of the variable in the enum.

    // if you do not specify values, they will simply continue to increase by one.

    Courses currentModule;

    currentModule = ProgrammingWithCPlusPlus;

    cout << "Value of currentModule: " << currentModule << endl;

    currentModule = MobileAppDevelopment;

    cout << "Value of currentModule: " << currentModule << endl;

    currentModule = AdvancedJava;

    cout << "Value of currentModule: " << currentModule << endl;

    currentModule = ProjectManagement;

    cout << "Value of currentModule: " << currentModule << endl;
    // storing enum values in a variable in the scope is the best way of using the values.
    // it is not reccommended to directly print or use values from the enum.
    


    return 0;
}