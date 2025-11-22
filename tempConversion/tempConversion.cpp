#include <iostream>

int main() {
    double temp;
    char unit;

    std::cout << "******************TEMPERATURE CONVERTER******************\n";

    std::cout << "Use F to calculate Fahrenheit\n";
    std::cout << "Use C to calculate Celsius\n";
    std::cout << "Please enter the unit: ";
    std::cin >> unit;

    if (unit == 'F'|| unit == 'f'){
        std::cout << "Enter the temperature in Celsius: ";
        std::cin >> temp;

        temp = 1.8 * temp + 32;
        std::cout << "Your temperature is: " << temp << "F\n";
    }
    else if (unit == 'C' || unit == 'c') {
        std::cout << "Enter the temperature in Fahrenheit: ";
        std::cin >> temp;

        temp = (temp - 32) / 1.8;
        std::cout << "Your temperature is: " << temp << "C\n";
    }
    else {
        std::cout << "Please enter a valid unit";
    }


    std::cout << "************************************\n";
    return 0;
}
