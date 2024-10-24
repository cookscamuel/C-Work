#include <iostream>
#include <string>

// this is an abstract class, it contains a pure virtual function.
class Assignment {

public:
    virtual void submit() = 0; // this is a pure virtual function
    virtual void calcGrade() = 0; // this is a second PVF, YOU CAN ADD PARAMETERS TO THESE
    virtual ~Assignment() {} // this is a virtual destructor (NOT PURE)

};