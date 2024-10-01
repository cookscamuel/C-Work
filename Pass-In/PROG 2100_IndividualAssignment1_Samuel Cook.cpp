/*
    Author: Samuel Cook
    Course: PROG2100
    Date: September 19, 2024
    Purpose: Calculator for gross and net pay based on employee type-dependent deduction amounts.
*/

#include <iostream>
using namespace std;


// ========================================== Global Variables ===========================================

string empType;
/*
    I decided to use string because the value that needs to be entered
    for determining employee type is not having mathematics performed
    on it. If the user enters text by accident, the program will not
    immediately crash. It's the best I've got until we look at proper
    error handling in class.
*/
double hourlyWage;
double hoursWorked;

// ============================================= Functions ===============================================

// function to determine how much the employee should have deducted from their pay
double calculateDeduction(string type) { // type refers to the employee type (permanent or temporary)

    double determineDeduction = (type == "1") ? 0.80 : 0.85;
    // short hand if-else does all the work, if it isn't permanent, it's temporary, and vice versa.
    // these numbers multiplied by the pay totals later represent 20% and 15% deductions, respectively.

    return determineDeduction;
    // return either 0.80 or 0.85

}

// function to calculate the gross and net pay, as well as to display it. takes hourly wage, hours worked, and deduction amount as arguments
void calculateGross(double wage, double hours, double deduction) {
   
    double grossPay; // declare local variable to store the gross pay total.

    if (hours <= 40) { // if there is no overtime...
        grossPay = wage * hours;
        cout << "\nGross Pay: $" << grossPay << "\nNet Pay: $" << (grossPay * deduction) << endl;
    }
    /*
        if there is no overtime, simply calculate gross pay. multiply the gross pay by the deduction
        value to get the net pay. display both values to the user. 
    */

    else { // if there is overtime...

        grossPay = wage * 40.00; // set the gross pay to the wage multiplied by the 40 regular hours.
        hours -= 40.00; // remove the 40 regular hours from the number of hours to be left with the overtime hours.
        double overtimePay = wage * 1.5; // overtimePay represents 1.5x the regular hourly wage.

        cout << hours << " overtime hours at $" << overtimePay << "/hour.\n"; 
        // this tells the user how many hours are overtime hours as well as what their wage was for those hours.

        grossPay += (overtimePay * hours); // multiply the leftover hours by the overtime wage and add it to the total gross pay.
       
        cout << "\nGross Pay: $" << grossPay << "\nNet Pay: $" << (grossPay * deduction) << endl;
        // Display the grossPay variable value, and multiply gross pay by the deductions to find and display the net pay.
    }
}


// ============================================= Main Function ===============================================

int main() {


        cout << "\n=$= Pay Calculator =$=\n";
        cout << "1 - Permanent Employee (20\% Deductions)\n2 - Temporary Employee (15\% Deductions)\n";
        cout << "Please enter the number that corresponds with your employee status: ";
        cin >> empType;
        // prompt the user for their employee type (1 or 2)

        if (empType != "1" && empType != "2") { // if the user enters something other than 1 or 2,
            cout << "\n*** Error: Invalid entry. ***" << endl;
            return 1;
            // just end the program. I was going to continuously prompt the user, but decided against it.
        }
        else {

            string confirmEmpStatus = (empType == "1") ? "\nYou have selected: Permanent Employee\n" : "\nYou have selected: Temporary Employee\n";
            cout << confirmEmpStatus;
            // These two lines simply confirm for the user what employee type they have selected.
           
            double deduction = calculateDeduction(empType);
            
            /*
                this passes the user's selection to the calculateDeduction function.
                its return value is stored in the deduction variable.
            */

            /*
                I was having a problem where I could not return the proper
                value for the deduction (it was a value less than 0, but was
                just coming back as 0), so my fix was just to return it as 100
                times the desired value and divide it by 100 in main.

                I learned it was because of a type casting issue, my function
                was of int type rather than double.
            */

            while (true) { // loop until the user enters the desired entry. There is no error checking, so entering a character will break the program.

                cout << "\nPlease enter your hourly wage: $";
                cin >> hourlyWage;
                // prompt the user for their hourly wage

                if (hourlyWage <= 0) {
                    cout << "\n*** Error: Invalid entry. ***" << endl;
                    continue;
                }
                // if the user enters a value less than or equal to 0, prompt them again.

                else {
                    cout << "\nYou have entered: $" << hourlyWage << "/hour.\n";
                    break;
                }
                // confirm with the user what they have entered and break out of the loop

            }

            while (true) { // once again, loop until the user enters the desired value.

                cout << "\nPlease enter the number of hours you worked: ";
                cin >> hoursWorked;
                // prompt the user for the number of hours they worked.

                if (hoursWorked <= 0) {
                    cout << "\n*** Error: Invalid entry. ***" << endl;
                    continue;
                }
                // if the user enters a value less than or equal to 0, prompt them again.
                else {
                    cout << "\nYou have entered: " << hoursWorked << " hours worked.\n";
                    break;
                }
                // confirm with the user what they have entered and break out of the loop
            }

            calculateGross(hourlyWage, hoursWorked, deduction);
            /*
                call the calculateGross function and pass it the previous two values the 
                user entered as well as the deduction variable.
            */
        }

    return 0;
    
    }
