#ifndef COMBCLASS_H
#define COMBCLASS_H

#include <iostream>
#include <string>
using namespace std;


class CombinationClass {

public:

    // here is the function template
    template <typename T>
    T combine(T a, T b) {
        return a + b;
    }

    // Instead of writing one of these that adds numbers, and one for concatenating strings, this is just one function.
    // It can account for any data type.
    // The T stands for type. If you pass it a string, T will get replaced with string when it fires.

    // T can be replaced by anything. I can name it chicken if I want.

    template <typename chicken>
    chicken chickenFunc(chicken a, chicken b) {
        return a + b;
    }

};

#endif