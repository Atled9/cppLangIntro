#include <iostream>

int main() {
    //"break" breaks out of a loop
    //"continue" skips the current iteration

    for (int i = 1; i <= 20; i++) {
        if (i == 13) {
            continue;
        }
        std::cout << i << '\n';
    }
}
