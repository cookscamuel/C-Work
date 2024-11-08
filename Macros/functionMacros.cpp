
#include <iostream>

#define MAX(a, b) ( ( (a) > (b) ) ? (a) : (b) )
#define MIN(a, b) ( ( (a) < (b) ) ? (a) : (b) )

int main() {

    std::cout << "Enter Number 1: ";
    int num1 = 0;
    std::cin >> num1;

    std::cout << "Enter Number 2: ";
    int num2 = 0;
    std::cin >> num2;

    std::cout << "Max is: " << MAX(num1, num2) << std::endl;
    std::cout << "Min is: " << MIN(num1, num2) << std::endl;

    std::cout << "Enter Value 1: ";
    float val1 = 0;
    std::cin >> val1;

    std::cout << "Enter Value 2: ";
    float val2 = 0;
    std::cin >> val2;

    std::cout << "Max val is: " << MAX(val1, val2) << std::endl;
    std::cout << "Min val is: " << MIN(val1, val2) << std::endl;

    std::cout << "Enter Word 1: ";
    std::string word1 = "";
    std::cin >> word1;

    std::cout << "Enter Word 2: ";
    std::string word2 = "";
    std::cin >> word2;

    std::cout << "Max val is: " << MAX(val1, val2) << std::endl;
    std::cout << "Min val is: " << MIN(val1, val2) << std::endl;
    
    return 0;
}