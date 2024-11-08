#include <iostream>
#include <string>

using namespace std;

class String {

private:
    string str;

public:
    String(const string& s) : str(s) {}

    String operator*(const String& other) const { // operator keyword overrides the operator
    // here, the * is overridden.
        cout << "HYUCK! Your asterisk has been decomissioned!" << endl;
        return String(str + other.str);
    }

    void display() const {
        cout << str << endl;
    }

};


int main() {

    String mystring("Hello");
    String mystring2(", World!");

    String s3 = mystring * mystring2; // the compiler knows that we do not want the asterisk to do normal things
    s3.display();

    return 0;
}