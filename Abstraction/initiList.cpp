#include <iostream>

using namespace std;

class Assignment {

private:
    string name;
    int mark;

public:
    Assignment() : name("Default Assignment"), mark(0) {} 
    // this is an initializer list, it sets default values for a default constructor

    Assignment(const string& name, int score) : name(name), mark(mark) {}
    // this is another way of writing an initializer list.

    // initializer lists must be used for const data members (attributes), since there is no memory allocated separately for const data members

};


int main() {
    return 0;
}