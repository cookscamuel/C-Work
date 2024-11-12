#include <iostream>
#include <array>
#include <vector>
#include <algorithm>

class Product {
private:
    std::array<std::string, 5> productList;
    std::vector<std::string> productIngredients;

public:

    Product() {
        productList = {"Product A", "Product B", "Product C", "Product D", "Product E"};
    }

    void displayProductList() {
        std::cout << "Product List: " << std::endl;

        for (auto it = productList.begin(); it != productList.end(); ++it) { // Auto is like a faster way of making a int i = 0. It doesn't require you to specify a type.
            std::cout << *it << std::endl;
        }

        /*
            Without auto here, the data type would have had to have been specified for the iterator. It would have been
            std::array<std::string, 5>::iterator it = productList.begin();
            Auto is way easier when doing these weird iterations.
        */

    }

    void addIngredientFromUser() {
        std::string ingredient;
        int numIngredients;

        std::cout << "How many ingredients do you want to add? ";
        std::cin >> numIngredients;

        productIngredients.clear();

        std::cin.ignore();
        for (int i = 0; i < numIngredients; ++i) {
            std::cout << "Enter ingredient " << (i + 1) << ": ";
            std::getline(std::cin, ingredient);
            productIngredients.push_back(ingredient);
        }
    }

    void displayIngredients() {
        std::cout << "Ingredients List: " << std::endl;
        for (auto it = productIngredients.begin(); it != productIngredients.end(); ++it) {
            std::cout << *it << std::endl;
        }
    }

    void sortIngredients() {
        std::sort(productIngredients.begin(), productIngredients.end());
        std::cout << "\nSorted Ingredients: " << std::endl;
        displayIngredients();
    }

};


int main() {

    Product product;

    product.displayProductList();

    product.addIngredientFromUser();

    product.displayIngredients();

    product.sortIngredients();

}