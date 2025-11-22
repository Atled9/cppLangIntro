#include <iostream>

int main() {
    /*Do-while loops run a block of code first
    THEN repeat if the loop condition is true*/

    int number;
    /*this implementation will not work because
    the number variable is already initialized
    with a positive value*/
    /*
    while (number < 0) {
        std::cout << "Enter a positive number: ";
        std::cin >> number;
    }*/

    /*You could implement a copy-paste fix by running
    the code inside the loop before entering the loop*/
    /*
    std::cout << "Enter a positive number: ";
    std::cin >> number;

    while (number < 0) {
        std::cout << "Enter a positive number: ";
        std::cin >> number;
    } */
    /*However, using a do-while loop would be much
    more efficient*/

    do {
        std::cout << "Enter a positive number: ";
        std::cin >> number;
    } while (number < 0);

    std::cout << "Your number is: " << number << '\n';
    return 0;
}
