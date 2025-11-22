#include <iostream>

int main() {
    char op;
    double num1;
    double num2;
    double result;

    std::cout << "******************CALCULATOR******************\n";

    std::cout << "What operation are you using?: ";
    std::cin >> op;

    std::cout << "What is the value of the first operand?: ";
    std::cin >> num1;

    std::cout << "What is the value of the second operand?: ";
    std::cin >> num2;

    switch (op) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;
        default:
            std::cout << "You did not use a valid operator\n";
            std::cout << "************************************\n";
            return 0; //exits the main() function
    }
    std::cout << "Your result is: " << result << '\n';
    std::cout << "************************************\n";
    return 0;
}
