#include <iostream>
#include <cmath>

int main() {
        double legOne;
        double legTwo;
        double hypotenuse;

        std::cout << "Provide the length for one of the legs: ";
        std::cin >> legOne;

        std::cout << "Provide the length for the other leg: ";
        std::cin >> legTwo;

        hypotenuse = sqrt(pow(legOne, 2) + pow(legTwo, 2));
        std::cout << "The length of the hypotenuse is: " << hypotenuse << '\n';

        return 0;
}
