#include <iostream>
#include <ctime>

int main() {
    srand(time(0));

    int randNum = (rand() % 5) + 1;

    switch (randNum) {
    case 1:
        std::cout << "You win a plushie!\n";
        break;
    case 2:
        std::cout << "You win a t-shirt!\n";
        break;
    case 3:
        std::cout << "Free Buffet!\n";
        break;
    case 4:
        std::cout << "You win a gift card!\n";
        break;
    case 5:
        std::cout << "You win a trip abroad!\n";
        break;
    }


    return 0;
}
