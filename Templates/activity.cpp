#include <iostream>
#include <string>
using namespace std;


template <typename S, typename F, typename I>
class Cart {

private:
    S name;
    F price;
    I quantity;

public:
    Cart(S nm, F pr, I qu) : name(nm), price(pr), quantity(qu) {}

    void displayCart() {
        cout << "ITEM: " << name << "\nPRICE: $" << price << "\nQUANTITY: " << quantity << endl;
    }

};


int main() {

    Cart<string, float, int> item ("Phone", 499.99, 2); // specify the data types when making an object. It seems like the right thing to do.

    item.displayCart();

    return 0;
}