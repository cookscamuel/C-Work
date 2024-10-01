/*
    Author: Samuel Cook
    Course: PROG2100
    Date: September 10, 2024
    Filename: studentGrades.cpp
    Purpose: Experiment with loops, decisions, continues, and breaks.
*/

#include <iostream>
using namespace std;

int main() {
    cout << "=== Average Grade Calculator ===\n";
    float score;
    float total = 0;
    int studentNum = 0;
    while (score != -99) {

        cout << "Enter -99 to stop any time. Enter score for Student #" << studentNum + 1 << ": " << endl;
        cin >> score;

        if (score == -99) {
            if (studentNum == 0) {
                cout << "No scores were entered.";
                return 1;
            }
            break;
        }

        if (score < 0) {
            cout << "\nInvalid grade, must be minimum of 0." << endl;
            continue;
        }

        total += score;
        studentNum++;

        cout << "\nScore: " << score;
        cout << "\nTotal: " << total << "\n\n";
    }

    studentNum - 1;

    float average = total / studentNum;

    cout << "\nAverage: " << average;

    return 0;
}