#include <iostream>
#include <ctime>

int main() {
    int num;
    int guess;
    int tries = 0;

    srand(time(NULL));
    num = (rand() % 10) + 1;

    std::cout << "******************GUESSING GAME******************\n";
    do {
        std::cout << "Guess a number between 1 and 10: ";
        std::cin >> guess;
        tries++;

        if (guess != num) {
            std::cout << "Wrong number! Try again!\n";
        }
    } while(guess != num);

    std::cout << "CONGRATULATIONS! You guessed the correct number in " << tries << " tries!\n";
    std::cout << "************************************\n";
    return 0;
}
