#ifndef TAX_CLASS_H
#define TAX_CLASS_H

#include <iostream>

#define BRACKET1 10000
#define BRACKET2 40000
#define BRACKET3 80000

#define RATE1 0.10
#define RATE2 0.20
#define RATE3 0.30
#define RATE4 0.40

#define TAX_BRACKET1(income) income -= (income * RATE1)
#define TAX_BRACKET2(income) income -= (income * RATE2)
#define TAX_BRACKET3(income) income -= (income * RATE3)
#define TAX_BRACKET4(income) income -= (income * RATE4)

class Tax {
private:
    double income;

public:
    void calculateTax(double income) {
        if (income < BRACKET1) {
            std::cout << "ERROR: Invalid entry." << std::endl;
        }
        else if (income <= BRACKET1) {
            TAX_BRACKET1(income);
            std::cout << "Income after 10\% taxes: $" << income << std::endl;
        }
        else if (income <= BRACKET2) {
            TAX_BRACKET2(income);
            std::cout << "Income after 20\% taxes: $" << income << std::endl;
        }
        else if (income <= BRACKET3) {
            TAX_BRACKET3(income);
            std::cout << "Income after 30\% taxes: $" << income << std::endl;
        }
        else {
            TAX_BRACKET4(income);
            std::cout << "Income after 40\% taxes: $" << income << std::endl;
        }
    }

};

#endif