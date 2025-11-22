#include <iostream>

int main() {

    //Integer (whole number)
    /*
    int x; //declaration
    x = 5; //assignment
    */

    /*int x = 5; //declaration and assignment
    int y = 6;
    int sum = x + y;
    int age = 27;

    //Double (number including decimal)
    double price = 10.99;
    double gpa = 3.5;
    double temperature = 99.5;

    //single character
    char grade = 'A';
    char initial = 'B';
    char currency = '$';

    //boolean (true or false)
    bool student = true;
    bool power = false;
    bool forSale = true;

    //string (objects that represent a sequence of text)
    std::string name = "Samantha";
    std::string day = "Friday";
    std::string food = "Pop-tarts";
    std::string address = "5569 Rue Street";

    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age << " years old" << '\n';*/

    //const specifies that a variable's value is constant
    //tells compiler to prevent the variable's modification
    //(read only)

    const double PI = 3.14159;
    //PI = 100;
    double radius = 10;
    double circumference = 2 * PI * radius;
    const int SPEED_OF_LIGHT = 299792458;
    const int WIDTH = 1920;
    const int HEIGHT = 1080;
    std::cout << circumference << "cm\n";
    return 0;
}
