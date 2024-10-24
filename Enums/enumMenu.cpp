#include <iostream>

using namespace std;


enum MenuOptions {
    WELCOME = 1,
    HELP,
    EXIT
};

void displayMessage(MenuOptions option) {

    switch (option) {
        case WELCOME:
            cout << "Welcome, what can I do for you?" << endl;
            break;

        case HELP:
            cout << "Here is some help." << endl;
            break;

        case EXIT:
            cout << "Exiting..." << endl;
            break;
        
        default:
            cout << "Invalid selection." << endl;
            break;

    }

}


int main() {

    int choice;

    cout << "=== MAIN MENU ===" << endl;
    cout << "1 - Welcome Message\n2 - Help\n3 - Exit\nPlease enter your choice (1-3): " << endl;
    cin >> choice;

    displayMessage(static_cast<MenuOptions>(choice));
    // this lets you turn an integer into a corresponding variable in an enum

    return 0;
}