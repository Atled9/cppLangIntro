#include <iostream>

double rectArea(double length, double width);
double rectPrismVol(double length, double width, double height);
std::string concatenate(std::string string1, std::string string2);

int main() {
    /*return data back to the spot
    where you called the function*/
    /*
    double length;
    double width;
    double height;
    std::cout << "What is the length of the prism?: ";
    std::cin >> length;
    std::cout << "What is the width of the prism?: ";
    std::cin >> width;
    std::cout << "What is the height of the prism?: ";
    std::cin >> height;


    std::cout << "The volume of the prism is " << rectPrismVol(length, width, height) << "cm^3\n";
    */
    std::string firstname;
    std::string lastname;
    std::cout << "What is your first name?: ";
    std::cin >> firstname;
    std::cout << "What is your last name?: ";
    std::cin >> lastname;

    std::cout << "Hello " << concatenate(firstname, lastname) << '!' << '\n';

    return 0;
}
double rectArea(double length, double width) {
    return length * width;
}
double rectPrismVol(double length, double width, double height) {
    return length * width * height;
}
std::string concatenate(std::string string1, std::string string2) {
    return string1 + ' ' + string2;
}
