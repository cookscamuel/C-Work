#include <iostream>
#include <cmath>

using namespace std;

// prototype for first function
namespace NS1 {
    double findSquareRoot(double num);
}

// prototype for second function
namespace NS2 {
    double addSquareRoot(double num);
}


// Main function
int main() {

    double answer = 0;

    {
        using namespace NS1;
        answer = findSquareRoot(16.0);
        cout << "Square root is " << answer << endl;
    }

    
    {
        using namespace NS2;
        answer = addSquareRoot(16.0);
        cout << "Square root (modified) is " << answer << endl;
    }

    // this is a simple way to pause a program. the input is not used.
    cout << "Enter any key to continue." << endl;
    cin.get();

    return 0;
}


// Definitions of the prototyped namepaces above.
namespace NS1 {
    double findSquareRoot(double num) {
        return sqrt(num);
    }
}

namespace NS2 {
    double addSquareRoot(double num) {
        return sqrt(num) + 5;
    }
}