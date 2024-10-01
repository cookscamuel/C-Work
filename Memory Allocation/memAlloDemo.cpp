/*
    Author: Samuel Cook
    Course: PROG2100
    Date: September 10, 2024
    Filename: variableDemo.cpp
    Purpose: Experiment with local and global variables.
*/

#include <iostream>
using namespace std;


int main() {

    int size;

    cout << "Enter the size of the list of fruits: ";
    cin >> size;

    // Dynamically allocate an array for fruits using the 'new' keyword
    string* fruits = new string[size];

    // Enter fruit names until the end of the array is reached.
    for (int i=0; i< size; i++) {
        cout << "Enter fruit #" << i+1 << ": ";
        cin >> fruits[i];
    }

    // Display fruit names
    for (int i=0; i < size; i++) {
        cout << fruits[i] << endl;
    }

    // Free the dynamically allocated memory using the 'delete' keyword
    delete[] fruits;
    
    return 0;
}