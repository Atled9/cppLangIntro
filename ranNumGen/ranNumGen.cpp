#include <iostream>
//ctime must be included for randNums to work
#include <ctime>

int main() {
    //generates a pseudo-random number (NOT truly random)
    srand(time(NULL));
    //use (randNum % rangeVal + start) to get a specific range
    int num1 = (rand() % 6) + 1;
    int num2 = (rand() % 6) + 1;
    int num3 = (rand() % 6) + 1;

    std::cout << num1 << '\n' << num2 << '\n' << num3;

    return 0;
}
