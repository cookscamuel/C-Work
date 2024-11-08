#include <iostream>

using namespace std;

/*
    Enum Classes are also called Scoped Enums.
    Here, enums are scoped, which prevents name conflicts.
    Strongly typed, meaning variables are not implied to be integers by default.
    The type can be customized.
*/

enum class ErrorCode {
    Success,
    NotFound,
    PermissionDenied,
    InvalidInput
};

ErrorCode performOperation(int value) {
    if (value < 0) {
        return ErrorCode::InvalidInput;
    }
    else if (value == 0) {
        return ErrorCode::NotFound;
    }
    else if (value > 10) {
        return ErrorCode::PermissionDenied;
    }
    return ErrorCode::Success;
}

void handleError(ErrorCode error) {
    switch (error) {
        case ErrorCode::Success:
            cout << "Operation completed succesfully!" << endl;
            break;
        case ErrorCode::NotFound:
            cout << "Error: Item not found." << endl;
            break;
        case ErrorCode::PermissionDenied:
            cout << "Error: Permission denied." << endl;
            break;
        case ErrorCode::InvalidInput:
            cout << "Error: Invalid input." << endl;
            break;
        // A default is not mandatory, I am accepting this now.
    
    }
}

int main() {

    int inputValue;

    cout << "Enter a value (negative for invalid, 0 for not found, >10 for permission denied): ";
    cin >> inputValue;

    ErrorCode result = performOperation(inputValue);

    handleError(result);

    return 0;
}