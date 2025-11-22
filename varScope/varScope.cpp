#include <iostream>

void printNum();
int myNum = 3; //declared globally
int main() {
    /*Local variables are declared inside a function or block {}.
    Global variables are declared inside outside of all functions.*/
    int myNum = 1; //local variables override global ones
    printNum();
    std::cout << ::myNum << '\n'; //scope resolution operator overrides local declaration

    return 0;
}

void printNum() {
    int myNum = 2; //local variables override global ones
    std::cout << ::myNum << '\n'; //scope resolution operator overrides local declaration
}
