#include <iostream>

int main() {
    /*
    && (AND operator) returns true when both operands are true
    || (OR operator) returns true when one or more operands are true
    ! (NOT operator) returns the opposite boolean value
    */

    /*
    int temp;

    std::cout << "What is the temperature?: ";
    std::cin >> temp;

    if (temp > 0 && temp < 30) {
        std::cout << "The temperature is okay!";
    }
    else {
        std::cout << "The temperature is uncomfortable!";
    }*/

    int temp;
    int sunny; //will be treated as bool

    std::cout << "What is the temperature?: ";
    std::cin >> temp;

    if (temp <= 0 || temp >= 30) {
        std::cout << "The temperature is uncomfortable!\n";
    }
    else {
        std::cout << "The temperature is okay!\n";
    }

    std::cout << "Is it sunny outside?: ";
    std::cin >> sunny;

    if (!sunny) {
        std::cout << "It is cloudy outside!\n";
    }
    else {
        std::cout << "It is sunny outside!\n";
    }

    return 0;
}
