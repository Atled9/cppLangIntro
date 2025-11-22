#include <iostream>

int main() {
    /*Type conversion = convert a value
    of one data type to another:
        Implicit = automatic
        Explicit = precede value with new data type */

    //int x = 3.14; //implicitly converted the value to an integer
    //double x = (int) 3.14; //explicitly cast value as an integer

    //char x = 100; //implicitly convert x to ASCII character "d"
    //std::cout << (char) 100; //explicitly cast integer as a character

    int correct = 8;
    int questions = 10;
    //double score = correct / (double)questions * 100; //this works
    double score = (double)correct / questions * 100; //this also works
    //double score = correct / questions * (double)100; // this does not work because the division produces a value of 0

    std::cout << "The score is: " << score << '%' << '\n';
    return 0;
}
