#include <iostream>
#include <string>

using namespace std;


int findMax(int a, int b, int c) {
    if (a > b && a > c) {
        return a;
    } else if (b > c) {
        return b;
    } else {
        return c;
    }
}

int factorial(int factNum) {
    int total = factNum;
    for (int i=1; i < factNum; i++) {
        total = total * i;
    }
    total /= factNum;
    cout << total;
    return factNum;
}
// logic is wrong here. 

float calculateAverage(float arr[], int size) {
    float sum = 0.0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return sum / size;
}

int main() {
    int num;
    cout << "Enter a positive integer to calculate its factorial: ";
    cin >> num;

    if (num < 0) {
        cout << "Invalid input! Factorial is only defined for non-negative integers." << endl;
    } else {
        cout << "Factorial of " << num << " is: " << factorial(num) << endl;  // Error here
    }

    int num1, num2, num3;
    cout << "Enter three integers to find the maximum: ";
    cin >> num1 >> num2 >> num3;
    int maxVal = findMax(num1, num2, num3);
    cout << "The maximum value is: " << maxVal << endl;

    const int size = 5;
    float numbers[size];
    cout << "Enter 5 floating-point numbers: ";
    for (int i = 0; i < size; ++i) {
        cin >> numbers[i];
    }

    float average = calculateAverage(numbers, size);
    cout << "The average of the array is: " << average << endl;

    cout << "You entered the following numbers: ";
    for (int i = 0; i < size; ++i) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}

// A factorial is a number multiplied by all numbers that came before it.