#include <iostream>

int main() {
    int weekdayNum;

    std::cout << "What is the day of the week (1-7)?: ";
    std::cin >> weekdayNum;

    switch (weekdayNum) {
    case 1:
        std::cout << "It is Monday!";
        break;
    case 2:
        std::cout << "It is Tuesday!";
        break;
    case 3:
        std::cout << "It is Wednesday!";
        break;
    case 4:
        std::cout << "It is Thursday!";
        break;
    case 5:
        std::cout << "It is Friday!";
        break;
    case 6:
        std::cout << "It is Saturday!";
        break;
    case 7:
        std::cout << "It is Sunday!";
        break;
    default:
        std::cout << "This is not a valid day!";
        //return 0;
    }
    std::cout << '\n';

    //This will not work
    /*
    switch (weekdayNum) {
    case (weekdayNum >= 1 && weekdayNum <= 5):
        std::cout << "It is a weekday!";
        break;
    default:
        std::cout << "It is a weekend!";
    }*/
    return 0;
}
