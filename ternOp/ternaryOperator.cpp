#include <iostream>

int main() {
    /*ternary operator (?:) is a replacement to an if/else statement
    condition ? expression1 : expression2;*/

    //int grade;

    /*std::cout << "What is your grade?: ";
    std::cin >> grade;*/

    //this method is inefficient
    /*if (grade >= 70) {
        std::cout << "You have passed!";
    }
    else {
        std::cout << "You have failed.";
    }*/

    //grade >= 70 ? std::cout << "You have passed!" : std::cout << "You have failed.";

    //int number;

    //std::cout << "Provide an integer: ";
    //std::cin >> number;

    //number % 2 == 0 ? std::cout << "Your number is even!" : std::cout << "Your number is odd!";
    //you can make the code above more efficient. 0 evaluates as false. Any other integer evaluates as true

    //number % 2 ? std::cout << "Your number is odd!" : std::cout << "Your number is even!";

    int hungry;

    std::cout << "Are you hungry?: ";
    std::cin >> hungry;

    //hungry ? std::cout << "You are hungry!" : std::cout << "You are full!";

    //you can use ternary operators within other entities
    std::cout << (hungry ? "You are hungry!" : "You are full!");
    return 0;
}
