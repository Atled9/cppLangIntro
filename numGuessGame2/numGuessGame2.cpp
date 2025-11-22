#include <iostream>
#include <ctime>

int main() {
    srand(time(NULL));

    int randNum = (rand() % 100) + 1;
    int guessNum;
    int numTries = 0;

    std::cout << "******************GUESSING GAME******************\n";
    do {
        std::cout << "Guess a number between 1 and 100; ";
        std::cin >> guessNum;
        numTries++;

        if (guessNum > randNum) {
            std::cout << "Too High!\n";
        }
        else if (guessNum < randNum) {
            std::cout << "Too Low!\n";
        }
        else {
            std::cout << "CONGRATULATIONS! You guessed the correct number in " << numTries << " tries!\n";
        }

    } while(guessNum != randNum);
    std::cout << "************************************\n";
    return 0;
}
