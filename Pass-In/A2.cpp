/*
    Author: Samuel Cook
    Course: PROG2100
    Date: September 30, 2024
    Purpose: Gather days and hours worked, calculate total and average pay.
*/

#include <iostream>
using namespace std;

// =========================================== Global Variables =========================================

string empID;                   // string variable to hold employee ID, used for display purposes only.
int numDays;                    // integer variable that holds the number of days the user wishes to enter hours for. Used to determine array size.
float* daysArray = nullptr;     // pointer variable for storing the hours worked on each day (array).

const float hourlyRate = 20.00; // fixed hourly rate used to calculate total/average pay.

float totalPay = 0;
float averagePay = 0;
// two simple float variables that will be used to hold the values of total and average pay, respectively.

// ============================================= Prototypes =============================================

void getOvertimeHours(float **overtimeHours, int numDays);

void calculateOvertime(float *overtimeHours, int numDays, float hourlyRate, float *totalPay, float *averagePay);
// prototypes for the main function. I did this as it is considered a best practice.

// =========================================== Main Function ============================================

int main() {

    cout << "\n===== OVERTIME STATISTICS =====\n";
    cout << "Please enter your Employee ID number: " << endl;
    cin >> empID;
    cout << "\nPlease enter the number of days that you worked overtime: " << endl;
    cin >> numDays;
    // prompt the user for employee ID and number of days that were worked.

    cout << "\nYou entered: \n"
         << "Employee ID: " << empID << "\nOvertime Days: " << numDays << "\n";
    // this prints a message for the user, confirming what they just entered.

    getOvertimeHours(&daysArray, numDays);
    // call the getOvertimeHours function, pass it the array of hours and also the numDays variable for memory allocation.

    calculateOvertime(daysArray, numDays, hourlyRate, &totalPay, &averagePay);
    /*
        pass this function the addresses for totalPay and averagePay so that we can
        store the values that will be calculated in the function inside of them.
        This is where pointers shine, because we cannot return multiple values
        with a single function.
    */

    cout << "\n======== RESULTS FOR EMPLOYEE #" << empID << " ========\n";

    cout << "Employee ID: " << empID << "\n";

    cout << "Total Hours Worked: " << totalPay / hourlyRate << "\n";

    cout << "Total Overtime Pay: $" << totalPay << "\n";

    cout << "Average Overtime Pay: $" << averagePay << " per day";

    // the 5 cout statements above print the results from the two function calls.

    delete[] daysArray; 
    // free up the memory that was allocated for the array as it is no longer needed.

    return 0;
}

// ============================================= Functions ==============================================

void getOvertimeHours(float **overtimeHours, int numDays) {

    *overtimeHours = new float[numDays]; 
    // dynamically allocate memory with the 'new' keyword to create an array for storing hours.

    for (int i = 0; i < numDays; i++) // loop for however many days the user entered (numDays)
    {

        cout << "\nPlease enter the number of Overtime Hours you worked on Day " << (i + 1) << ": " << endl;
        cin >> (*overtimeHours)[i];
        cout << "Day " << (i + 1) << ": " << (*overtimeHours)[i] << " hours." << endl;
        // on each loop, prompt the user for the number of hours they worked on each day.
        // store each number of hours as an index in the daysArray array.
    
    }
}

void calculateOvertime(float *overtimeHours, int numDays, float hourlyRate, float *totalPay, float *averagePay) {

    *totalPay = 0;
    *averagePay = 0;
    // I initialize these pointers so I can store values at their addresses.

    float totalHours = 0;
    // variable to simply hold the total hours worked. I found it was safest to do it this way,
    // but I recognize that it could also be done in the for-loop below.

    for (int i = 0; i < numDays; i++)  // loop for however many days the user entered (numDays)
    {

        totalHours += overtimeHours[i];
        // this goes through each hour entry in the array and totals them all, storing the result in totalHours.
    }

    *totalPay = (totalHours * hourlyRate);
    // store the product of total hours and the hourly rate at the memory address for totalPay.
    // this represents the total pay the user earned based off of hours worked and a $20 wage.

    *averagePay = (*totalPay / numDays);
    // the average pay per day is the total pay divided by the number of days worked,
    // this value will be stored at the memory address for averagePay.

    // the values of totalPay and averagePay are both accessible from main.
}

/*

    REFLECTION COMMENTS:

    ======================= Why did I use dynamic memory allocation? ==========================

    Aside from it being a requirement in the assignment, I used dynamic memory allocation
    because it ensures that no memory is wasted or leaking. Properly handling memory
    allocation means that the program will not attempt to access data that does not exist.

    In addition to this, dynamic memory allocation entails that no memory needs to be
    allocated without being used, meaning we can allocate only the amount of memory
    that we need. Dynamic memory allocation gives us complete control to manage memory in our
    programs, allowing them to be extremely efficient.


    ============== What is the purpose of each function, and how were pointers used? ==========

    I will break down each function individually:

    - void getOvertimeHours(float **overtimeHours, int numDays)

     This function takes the pointer variable which will be used as an array, along with
     the integer value numDays that the user enters. This function will dynamically
     allocate memory for an array, using the numDays as the size. This array will be used
     to hold the number of hours worked for each day that the user specified. A for-loop
     loops numDays amount of times, asking for how many hours the user worked on each day.
     These hours are kept in the daysArray array.


    - void calculateOvertime(float *overtimeHours, int numDays, float hourlyRate, float *totalPay, float *averagePay)

     This function takes the array of hours, the number of days worked, the fixed hourly
     rate, and the currently empty variables for holding the total and average pay as
     arguments. totalPay and averagePay are both initialized to equal 0 within the function
     to allow their locations to be accessed. I created a variable to store the total 
     hours just to make it easier on myself to calculate the total pay. The value of the
     *totalPay variable is set to the value of totalHours multiplied by hourlyRate (20).
     The value of the *averagePay is set to the value of *totalPay divided by the number
     of days (numDays). This gives the average money made per day.


    - main

     Inside the main function, I simply receive user input for the number of days worked
     and the employee number, call the two functions described above while passing the
     appropriate arguments, then print the results to the screen (the employee ID, the
     total hours worked [just for fun], the total overtime pay, and the average pay per
     day). At the end of main, I free up the memory that was allocated for the array of 
     hours inside of the getOvertimeHours function after it has been utilized.

    Pointers were extremely useful here because functions cannot return multiple values.
    You can simply pass the memory address of a variable to a function, alter the 
    variable value by dereferencing it within the function, and then call the variables
    from within main, all without returning any variables.


    ================== How did I handle null pointers and memory management? ==================

    The only null pointer I created was for the array holding the hours for each day. This
    was the only variable I decided to make null because I wanted to initialize it, but had
    no real value to give it at the time. I did not see any other instances where I needed
    null pointers, as totalPay and averagePay are having values added to it rather than
    having values set to it. I simply set both variables equal to 0, and passed the memory
    address of each variable to the calculateOvertime function.

    The only memory management I really did in this program was for the array holding the
    hours. In the function getOvertimeHours, I allocate space for it using the 'new' keyword.
    At the end of the program, when I no longer need the array, I use the 'delete[]' keyword
    to free up the once occupied memory.

*/