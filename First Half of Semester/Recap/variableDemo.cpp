/*
    Author: Samuel Cook
    Course: PROG2100
    Date: September 10, 2024
    Filename: variableDemo.cpp
    Purpose: Experiment with local and global variables.
*/

#include <iostream>
int vehicleSpeed = 60; // declare global variable vehicleSpeed with a value of 60.

void displayVehicleSpeed() {
    int localSpeed = 80; // declare local variable localSpeed with a value of 80, stored within function displayVehicleSpeed
    
    vehicleSpeed = 100; // I added this on my own to experiment with changing a global variable within a function.

    std::cout << "Speed of the vehicle (inside function): " << localSpeed << "km/h" << std::endl; // print localSpeed variable value (80)
    std::cout << "Global vehicle speed (inside function): " << vehicleSpeed << "km/h" << std::endl; // print globalSpeed variable value (60)

}

int main() {

    std::cout << "Global vehicle speed (inside main): " << vehicleSpeed << "km/h" << std::endl; // print vehicleSpeed variable value (60)

    //std::cout << "Local vehicle speed (inside main): " << localSpeed << "km/h" << std::endl; // print vehicleSpeed variable value (60)
    /*
        You cannot access the variable localSpeed within main because it is a local variable.
        It exists only within the function displayVehicleSpeed().
    */

    displayVehicleSpeed(); 
    // call displayVehicleSpeed function.

    return 0;
}