#include <iostream>

// Define a macro for the fixed tax rate
#define TAX_RATE 0.15 // 15%
// This is a macro for a constant variable.

#define PRINT(x) std::cout << "The printed value is " << x // THIS one is a function-like macro.
// The Function-Like Macro is called PRINT

int main() {

    double productPrice;
    double totalPrice;
    int number = 100;

    std::cout << "Enter the product price: $";
    std::cin >> productPrice;

    totalPrice = productPrice + (productPrice * TAX_RATE);

    std::cout << "Total price after tax: $" << totalPrice << std::endl;

    PRINT(number);

    return 0;
}

/*
    Macros seem to be good to use instead of functions since they are faster.
    If you have a basic function, maybe turn it into a macro instead.

    Macros are not strongly typed. Parameters do not stricly need to be of one
    type. Because of this, there can be errors. The compiler does not check for
    these errors.
*/