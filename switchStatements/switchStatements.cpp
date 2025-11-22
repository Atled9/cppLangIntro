#include <iostream>

int main() {
    /*Switch is an alternative to using many if-else statements.
    compare one value against matching cases*/

    /*int month;
    std::cout << "Enter your month (1-12): ";
    std::cin >> month;*/

    //the following code is inefficient
    /*if (month < 1) {
        std::cout << "That is not a valid input";
    }
    else if (month == 1) {
        std::cout << "Your month is January!";
    }
    else if (month == 2) {
        std::cout << "Your month is February!";
    }
    else if (month == 3) {
        std::cout << "Your month is March!";
    }
    else if (month == 4) {
        std::cout << "Your month is April!";
    }
    else if (month == 5) {
        std::cout << "Your month is May!";
    }
    else if (month == 6) {
        std::cout << "Your month is June!";
    }
    else if (month == 7) {
        std::cout << "Your month is July!";
    }
    else if (month == 8) {
        std::cout << "Your month is August!";
    }
    else if (month == 9) {
        std::cout << "Your month is September!";
    }
    else if (month == 10) {
        std::cout << "Your month is October!";
    }
    else if (month == 11) {
        std::cout << "Your month is November!";
    }
    else if (month == 12) {
        std::cout << "Your month is December!";
    }
    else {
        std::cout << "That is not a valid input";
    }*/

    //let's use the switch statement instead
    /*switch (month) {
        case 1:
            std::cout << "It is January!";
            break;
        case 2:
            std::cout << "It is February!";
            break;
        case 3:
            std::cout << "It is March!";
            break;
        case 4:
            std::cout << "It is April!";
            break;
        case 5:
            std::cout << "It is May!";
            break;
        case 6:
            std::cout << "It is June!";
            break;
        case 7:
            std::cout << "It is July!";
            break;
        case 8:
            std::cout << "It is August!";
            break;
        case 9:
            std::cout << "It is September!";
            break;
        case 10:
            std::cout << "It is October!";
            break;
        case 11:
            std::cout << "It is November!";
            break;
        case 12:
            std::cout << "It is December!";
            break;
        default:
            std::cout << "Please enter in only numbers 1-12";
    }*/

    //Let's use an example with grades
    char grade;
    std::cout << "What letter grade?: ";
    std::cin >> grade;

    switch (grade) {
        case 'A':
            std::cout << "You did great!";
            break;
        case 'B':
            std::cout << "You did okay.";
            break;
        case 'C':
            std::cout << "You barely passed!";
            break;
        case 'D':
            std::cout << "You failed.";
            break;
        case 'F':
            std::cout << "Did you even try?";
            break;
        default:
            std::cout << "Please enter a valid letter grade.";
    }

    return 0;
}
