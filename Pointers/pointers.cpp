/*
    Author: Samuel Cook
    Course: PROG2100
    Date: September 17, 2024
    Filename: pointers.cpp
    Purpose: Working with pointers.
*/

#include <iostream>
using namespace std;

int main() {

    int variable = 100;

    // int* pointer = &variable; // This is the one line method.

    // this is the two line method.
    int* pointerName; // you can put the asterisk attached to the int instead of the pointer name.
    pointerName = &variable;

    cout << "With an asterisk (dereference operator): " << *pointerName << " prints the value of the pointed-to variable.\n";
    cout << "Without an asterisk: " << pointerName << " prints the memory address.\n";

    variable = 20;
    cout << "Changing variable value: " << *pointerName << "\n";
    
    *pointerName = 30;
    cout << "Changing the *pointerName value: " << *pointerName << "\nThe memory address stays the same: " << pointerName << "\n" << endl;

    // ASTERISK: VALUE
    // NO ASTERISK: ADDRESS

    int array[5] = {10, 20, 30, 40, 50};

    int* arrPointer = array;

    cout << arrPointer << " stores " << *arrPointer << " which is the first element in the array.\n";
    arrPointer++;
    cout << arrPointer << " stores " << *arrPointer << " which is the second element in the array.\n";
    arrPointer--;
    cout << arrPointer << " stores " << *arrPointer << " which is the first element in the array.\n" << endl;

    for (int i=0; i<size(array); i++) {
        cout << "Location: " << (arrPointer + i) << " Stores: " << *(arrPointer + i)  << endl;
    }

    // int* ptr = nullptr; // initialize null pointer.
    // int variable = 50;

    // if (ptr == NULL) { // check if pointer is null.
    //     cout << "NULL";
    // }
    // else {
    //     cout << "NOT NULL";
    // }

    // ptr = &variable; // set pointer to point at memory address of variable.

    //     if (ptr == NULL) {
    //     cout << "\nSTILL NULL";
    // }
    // else {
    //     cout << "\nNOT NULL, VALUE IS NOW " << *ptr;
    // }

    // int value = 50;
    // int* ptr1 = &value;
    // int** ptr2 = &ptr1;

    // cout << *ptr1 << " is printed using *ptr1" << endl;
    // cout << **ptr2 << " is printed using **ptr2" << endl;
    // cout << &value << " is the memory address of value." << endl;
    // cout << ptr1 << " is the memory address of ptr1." << endl;
    // cout << ptr2 << " is the memory address of ptr2." << endl;
    // cout << *ptr2 << " is the memory address of ptr1 using *ptr2." << endl;
    

    return 0;

}