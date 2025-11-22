#include <iostream>

int main() {

    /*arithmetic operators return the result of a
    specific arithmetic operation (+ - * /) */

    //int students = 21;
    //students = students + 1;
    //students += 1;
    //students++;

    //students = students - 2;
    //students -= 2;
    //students--;

    //students = students * 2;
    //students *= 2;

    //students = students / 2;
    //students /= 3;

    //int remainder = students % 2;

    /*Order of Operations:
    1. Parenthesis
    2. Multiplication & Division
    3. Addition * Subtraction*/

    int students = 6 - (5 + 4) * 3 / 2;

    std::cout << "Number of students are: " << students << '\n';

    return 0;
}
